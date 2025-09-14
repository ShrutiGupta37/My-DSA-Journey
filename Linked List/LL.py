class Node:
    def __init__(self,data=None,next=None):
        self.data=data
        self.next=next

class Linked_List:
    def __init__(self):
        self.head=None
    def insertion_at_beginning(self,data):

        node=Node(data,self.head)
        self.head=node
    
    
    def insertion_at_end(self, data):
        new_node = Node(data)   # new node to insert

        if self.head is None:
            # if list is empty, new node becomes head
            self.head = new_node
            return

        itr = self.head
        while itr.next:   # go until last node
            itr = itr.next
        # now itr is the last node
        itr.next = new_node


    def print(self):
        if self.head is None:
            print("Linked List is empty")
            return
        itr=self.head
        llstr=''
        while itr:
            llstr=llstr + str(itr.data)+ '-->'
            itr=itr.next
        print(llstr)
    
ll=Linked_List()
ll.insertion_at_beginning(5)
ll.insertion_at_beginning(85)
ll.insertion_at_beginning(59)
ll.insertion_at_end(20)
ll.print()
