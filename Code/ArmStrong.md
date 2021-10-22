---
Name: 'Manas Vijaywargiya'  
Github: 'https://github.com/manasdevslopes'  
WebSite: ''  
Problem: 'Armstrong Numbers'  
Description: 'Recursive method for Armstrong Numbers in JS'  
Language: 'JavaScript' 
---
```
function armstrong(n){
    let number = new String(n)
 
    n = number.length
    let output = 0
    for(let i of number)
      output = output + parseInt(i)**n
 
    if (output == parseInt(number))
        return("True" + "<br>")
    else
        return("False" + "<br>")
}
         
document.write(armstrong(153))
document.write(armstrong(120))

```


