def push():
    x=int(input("\nEnter item: "))
    if len(stack)==stack_size:
        print("\nOverflow")
    else:
        stack.append(x)
        
def pop():
    if len(stack)==0:
        print("\nUnderflow")
    else:
        stack.pop(len(stack)-1)

def Display():
    print(stack)


stack=[]
stack_size=5

while(1):
  
    print("1)Push\n2)Pop\n3)Display\n4)Exit")
    n=int(input("\nChoose a number:"))
    match n:
        case 1:
            push()
        case 2:
            pop()
        case 3:
            Display()
        case 4:
            break



