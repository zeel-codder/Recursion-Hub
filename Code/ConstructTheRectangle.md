---
Name: 'Sujata Choudhary'
Github: 'https://github.com/sujatachoudhary598'
WebSite: ''
Problem: 'Construct a Rectangle'
Description: 'A web developer needs to know how to design a web page size. So, given a specific rectangular web page area, your job by now is to design a rectangular web page, whose length L and width W satisfy the following requirements:

1. The area of the rectangular web page you designed must equal to the given target area.
2. The width W should not be larger than the length L, which means L >= W.
3. The difference between length L and width W should be as small as possible.

Return an array [L, W] where L and W are the length and width of the web page you designed in sequence.'
Language: 'Java'
---

```java
public int[] constructRectangle(int area) {
        int sqrt = (int)Math.pow(area,0.5);
        if(sqrt*sqrt==area){
            return new int[]{sqrt,sqrt};
        }
        int[] ans=new int[2];
        return rectangle(ans,area,sqrt);
    }
    int[] rectangle(int[] ans,int area, int sqrt){
        if(sqrt<1){
            return ans;
        }
        if(area%sqrt==0){
            ans[1]=sqrt;
            ans[0]=area/sqrt;
            return ans;
        }
        return rectangle(ans,area,sqrt-1);
    }

```
