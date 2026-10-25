## Objective:
To cyclically rotate a vector to the right "K" times

## Theory behind:
- When we rotate the vector to right, by `K`, the vector rotates cyclically
  Eg: vector : [9, 6, 3, 0, 4] when cyclically rotated by 3 yields : [3, 0, 4, 9, 6]
- what is to be understood is that since we are performing a cyclic rotation, there is a repeating pattern we need to identify at first
  - whenever the cyclic rotation is done by `K = vector.size()`, then we get the back the same initial vector back
  - in this example, we get: [9, 6, 3, 0, 4]
- create a new array to populate the elements from initial array to obtain the rotated array.
- so we perform `K%A_size` to identify how many times we really need to shift the vector cyclically
- then iterate through the vector and compute the new indices where each element from the initial element has to be placed (in the new rotated array)
- also, it is imperative that, before we perform any rotation we need to verify that the received vector is not empty:
  - empty ==> return back an empty array
  - non-empty ==> perform rotation
