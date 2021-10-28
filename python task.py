
def issqaure (x,y,*nums):
    from math import sqrt , ceil
    return[i for i in nums if ceil(sqrt(i))==sqrt(i) and x<=i<=y ]  

