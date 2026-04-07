# hash brute-force decoder

This is a funny little side project I've started, just for educational purposes.

Using this - assuming that I actually finish it, and you set it up correctly - you COULD take over the PCs in a building, 
but I would not recommend you do that. Could end you up in a lot of trouble.

I got the idea of "making a distributable program that can allocate resources automatically and solve a brute-force task" 
from my friend CodingMatthew009. 

## how it should work

I am planning to make 2 different binaries: 
- one will function as a master-program
- the other binary will be considered the slave program

The slaves will be decoding hash-keys, with sheer brute-force, 
whilst the master-program will dynamically giving tasks to the said slaves.
