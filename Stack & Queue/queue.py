def enque():
    x=int(input("Enter item"))
    if len(Queue)==Queue_size:
        print("Overflow")
    else:
        Queue.append(x)
        
def deque():
    if len(Queue)==0:
        print("Underflow")
    else:
        Queue.pop(0)

def Display():
    print(Queue)


Queue=[]
Queue_size=5

while(1):
  
    print("1)Push\n2)Pop\n3)Display\n4)Exit")
    n=int(input("Choose a number:"))
    match n:
        case 1:
            enque()
        case 2:
            deque()
        case 3:
            Display()
        case 4:
            break


