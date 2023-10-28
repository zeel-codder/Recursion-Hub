//Web Scraping using Python language

import requests
from bs4 import BeautifulSoup

# Define the URL of the webpage you want to scrape
url = 'https://example.com/articles'

# Send an HTTP GET request to the URL
response = requests.get(url)

# Check if the request was successful (status code 200)
if response.status_code == 200:
    # Parse the page content with BeautifulSoup
    soup = BeautifulSoup(response.text, 'html.parser')

    # Find and extract the titles of articles (adjust based on the webpage structure)
    article_titles = soup.find_all('h2', class_='article-title')

    # Iterate through the titles and print them
    for title in article_titles:
        print(title.text)
else:
    print('Failed to retrieve the webpage. Status code:', response.status_code)
