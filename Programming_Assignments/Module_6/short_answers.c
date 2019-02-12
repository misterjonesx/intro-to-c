1) int a[5];
   FILE * fp;
   fp = fopen("adata.out", "wb"); //"ab" will append the contents of a[5] to the file adata.out than overwriting it
   for (int i = 0; i < 5; i++) //
   {
     fwrite(a, sizeof (int), 5, fp);
   }
   
2) From Prata, "If a file uses binary codes for characters (like ASCII or 
   Unicode) to represent text, then it is a text file. If the binary codes in 
   the file represent machine-language code, numeric data, or image or music 
   encoding, the content is binary."
   
   Perhaps the easiest way to understand the difference is to simply ask, if I
   open this file in a text editor, will I be able to read it! If it's a text
   file, the binary code within will correspond to values in the given character
   set (ASCII or Unicode, for example), and the content will be text, and should
   be readable (provided it's text in a language you understand and isn't 
   gibberish).
   
   If it's a binary file, you will be opening a file that would likely 
   neither be readable nor understandable to the human eye (barring, perhaps, a
   highly trained one as far as the type of encoding is concerned). The output 
   in a text editor would be numeric at best, but more likely include a number
   of characters that the text editor is unable to support or display. 
   The executable files for our .c programs are binary files, and they sure as
   heck don't make any sense to me when I crack them open to look inside.

3.a) "rb"

3.b) "a"

3.c) "w+"

4) You could use a a variable of any of the following storage classes: 
   (static with external linkage), static with internal linkage, 
   static with block scope.
   
   I would recommend static with block scope. This would ensure that the 
   variable could only be incremented by the function when it is called,
   and could not accidentally be incremented if the same variable name
   is used elsewhere in the program, either in the same file (in the case of
   static with internal linkage), or in another file (in the case of static
   with external linkage).

5) By declaring the formal parameters for showinfo() and using the const 
   qualifier the program is more readable in that we know that the showinfo() 
   function won't be manipulating the data in struct namect. This tells us a little
   about what showinfo() doesn't do, and gives us some clues as to what it does do,
   namely, displays information from struct namect without modifying it.
   
   At the same time, using the const modifier makes the program more reliable,
   because it ensures that this desired behavior (that showinfo() not modify the
   struct namect) is enforced. Without the const qualifier, it would be possible
   for code in the showinfo() function to modify namect in a way that was 
   unintended and prevent the program from working properly.

6.1) By writing a program using multiple functions, the functions can be re-used
     in the program. The alternative would be copying/pasting the code each time
     you wanted to get the same functionality you would from simply calling the 
     function again.

6.2) It makes the code easier to maintain. If a function needs to be updated or 
     changed, that change only needs to be made once, in the function definition,
     and it will be reflected throughout the entire program.

6.3) It reduces complexity of the main() function. By dividing discrete tasks 
     into separate functions, you can write a function without having to worry 
     about the rest of the program while writing it. Once that piece is working,
     you can then just drop it into main() or another function by calling it as 
     needed.

7.1) There is a lot of overlap between the benefits of modularity and coding a 
     program using multiple functions, the latter being one example of the
     former. Hence, via modularity, we also benefit from the ability to re-use 
     code across a program. For example, via a set of functions stored in one
     file that are linked to various other modules of the program.

7.2) It makes the code easier to maintain, because the modules themselves are 
     shorter and easier to read and understand.

7.3) It gives us more control over variable scope. With one giant program, it 
     becomes more likely that another part of the program would modify a variable
     unintentionally.

7.4) It makes testing easier. Once a module is tested and working properly, it 
     doesn't need to be tested again unless it is changed.

7.5) It allows a large team to work on the same project, because individuals can
     each be working on separate modules concurrently.