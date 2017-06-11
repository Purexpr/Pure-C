# Pure-C
Here I show examples of how to perform pure functional programming in   
the ISO standardized C programming language  
(no need for vendor plugin/extensions)

The key to perform functional programming in the C language  
is to realize that the **function** in **functional programming**  
actually corresponds **struct**, not C procedures.  
Here we will call this upgraded functions as **s-function**  
for C which is an abbreviation for "struct-function".  

## Key Elements
### Closure
Fundamentally, **closure** means store local environment  
values (**env-values**) into **functions**.  
Here we store **env-values** into **s-functions**.
**C99** provides **compound literal** which make it  
easy to create/return **struct** on-the-fly.
