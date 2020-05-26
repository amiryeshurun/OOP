# OOP

First lesson:

I have updated the directory named "1" with the code from the first lesson. I have also seperated the code to `.cpp` 
and `.h` files as I said.

The file named `main.cpp` contains a little test for the desired functionality, except the delete party member 
function which I did not implement due to time constraints. 

If you have any problems understanding the code or implementing something, please let me know.

---

Second Lesson:

I have uploaded the files from the seocnd lesson to the directory called "2". The notebook with my scratches is also available there (the name of the file is `Sadna 2.pdf`).

---

Third Lesson:

The code of the third lesson is now available at the directory named "3".
If there are any questions, feel free to ask me.

---

Fourth Lesson:

The code is available at the directory named "4". 
Please try to implement the remove function. It should receive a pointer to a "Node" object
and remove the element from the linked list.

Good luck!

---

Fifth Lesson:

The code I wrote is available in the 5th folder. 
I added an operator `std::ostream& operator<<(std::ostream& out, const String& str)` in `main.cpp` just to print the data of a string using cout (`cout << string << endl`).
You will learn about it in upcoming lectures.

---

Eighth Lesson:

The code is available in the directory named `8`. 
* The problem with the update function: since we were calling the update function from the Observable class, and passing the
`this` pointer, the `typeid` of `*o` is Observable and not the specific class. I moved the notifyObservers functions, which calls 
the update function, to the classes `Employee1` and `SecurityAlarm`.