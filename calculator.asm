org 100h

.data
m1 db 10,13, "enter number $"
m2 db 10,13, "enter second number $" 
m3 db 10,13, "choose operation 1-add 2-sub 3-mul 4- div $"
m4 db 10,13, "answer is : $"
m5 db 10,13, "if you want to cont press 1 otherwise press 0 $"
m6 db 10,13, "error $"


.code

calc:

mov ah,09
lea dx,m1
int 21h

mov ah,01
int 21h

mov bl,al
sub bl,30h

mov ah,09
lea dx,m2
int 21h

mov ah,01
int 21h

mov cl,al
sub cl,30h

mov ah,09
lea dx,m3
int 21h

mov ah,01
int 21h
sub al,30h

cmp al,1
je ad

cmp al,2
je su

cmp al,3
je mu

cmp al,4
je d


ad:

add bl,cl

mov ah,09
lea dx,m4
int 21h

mov dl,bl
add dl,30h

mov ah,02
int 21h
jmp repeat 

su:
 
sub bl,cl

mov ah,09
lea dx,m4
int 21h

mov dl,bl
add dl,30h

mov ah,02
int 21h
jmp repeat 

mu:


mov ah,09
lea dx,m4
int 21h 
mov al,bl
mul cl

mov dl,al
add dl,30h

mov ah,02
int 21h
jmp repeat         
        
d:
mov ah,09
lea dx,m4
int 21h
mov ah,00h 
mov al,bl
div cl

mov dl,al
add dl,30h

mov ah,02
int 21h
jmp repeat                

repeat:
mov ah ,09
lea dx, m5
int 21h

mov ah,01
int 21h

sub al,30h

cmp al,1
je calc

cmp al,0
je finish


eror:

mov ah,09
lea dx,m6
int 21h
jmp repeat


finish:
