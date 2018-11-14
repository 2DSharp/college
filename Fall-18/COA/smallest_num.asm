;8086 program for largest number

.model small
.data
    x db 10h, 95h, 02h, 13h, 8h, 17h  ; Initialize the array x
    smallest db ?

.code

begin:

   mov ax, @data ; moving the address of data to ax
   mov ds, ax
   
   mov cx, 05   ; Set counter to max index of array
   mov si, 0    ; First index
   mov al, x[si]; Move the first element to AL
   
   compare: 
    inc si          ; Take one step forward
    cmp al, x[si]   ; cf is set if al is less than x[si]
                    ; i.e., check if min val is less than current value
    jc l1           ; If yes, run the loop again
    mov al, x[si]   ; Otherwise, set the current value as the smallest
  
   
   l1: 
    loop compare     ; Keep looping till cx isn't zero
    mov smallest, al ; Store the al value in smallest
    mov ah, 4ch      ; Exit
    int 21h
   
end begin