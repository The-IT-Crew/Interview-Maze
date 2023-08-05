/* APPROACH

        1
       / \
      2   3
     / \   \
    4   5   6

Hight of the tree = 3
Required array size = pow(2,3)-1 = 7
indexing:
	Root 		= 1
	Left child 	= 2*indexOf(parent)
	Right child = 2*indexOf(parent)+1
Output: [1,2,3,4,5,0,6] where 0 represents NULL
*/
