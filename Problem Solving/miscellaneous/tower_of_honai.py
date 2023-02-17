# TOWER OF HONAI PROBLEM

# Problem Statement: Given three rods (i.e. A,B and C) and N disks. Initially all
# disks are stacked in decreasing order of diameters. The objective of this puzzle
# is to move the entire disks of one rod to another rod, keeping the order maintain.

# Rules: 1. One rod can move at a time.
#	 2. Only top element can be moved.
#	 3. All disks should maintain the decreasing order of width.

# Example: Move disks of A to rod C. (N=3)
# I/P: 	A = [3,2,1]
#	B = []
#	C = []
# O/P:	A = []
#	B = []
#	C = [3,2,1]

# Approach:
# Base case: N==1
# Move disks from source to buffer. (Destination as buffer)
# Move Source.top to Destination
# Move disks from buffer to Destination. (Source as buffer)

def MoveDisks(N,S,B,D):
	''' Solution of tower of honai problem '''
	# Base case: N==1
	if N==1:
		print(f"Move {S} to {D}")
		return
	
	# Move disks from source to buffer. (Destination as buffer)
	MoveDisks(N-1,S,D,B)
	
	# Move Source.top to Destination
	print(f"Move {S} to {D}")
	
	# Move disks from buffer to Destination. (Source as buffer)
	MoveDisks(N-1,B,S,D)
	
# driving code
if __name__ == '__main__':
	MoveDisks(3,'A','B','C')
	''' Output
	Move A to C
	Move A to B
	Move C to B
	Move A to C
	Move B to A
	Move B to C
	Move A to C '''

