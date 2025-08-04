#Write code for finding exponent using divide and conquer techniqye
#if we use this apporach a^n=a*a^n-1 (T(n)=T(n-1)+1), the time complexity will be O(n) which is exactly same as using a for loop
#but using this D&C technique (which i have used in the code), the time complexity will be O(log n)
def exponent(a,b):
    if b==0:
        return 1
    elif b==1:
        return a
    x=exponent(a,b//2)
    if b%2==0:
        return x*x
    else:
        return x*x*a
    

num=3
power=1
x=exponent(num,power)
print(x)

#Recurrence Relation => T(n)=T(n/2)+1
