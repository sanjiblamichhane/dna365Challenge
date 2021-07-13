## create a linked list
class Node:
	def __init__(self, dataval = None):
		self.dataval = dataval
		self.nextval = None

class SLinkedList:
	def __init__(self):
		self.headval = None

list1 = SLinkedList()
list1.headval = Node("Mon")
e2 = Node("Tue")
e3 = Node("Wed")

# link first node to second node
list1.headval.nextval = e2

# link second node to third node
e2.nextval = e3
