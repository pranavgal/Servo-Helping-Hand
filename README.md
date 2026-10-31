# Servo-Helping-Hand
This project is a replica of a helping hand, a tool used to hold wires in place for soldering. Instead of clips and malleable supports, my iteration of the helping hand uses a claw-like mechanism using servos. The build is 3D printed using PLA, and the code is C++, being run on an Arduino Uno R3. I made this project as I'm reaching the point where I will have to start soldering my projects for a more 'official' look. I made this project as a last mini project using a breadboard and showcasing my first design. All of the CAD files are done by me as well as the claw mechanism. 

****Demo Link:
https://youtube.com/shorts/mf-pXX34Wso

**Known Issues:
Currently, the arm attached to the servo tends to lean downwards, and grip strength falters at times.

**Assembly:
1. Insert servo into the case, fitting it into the small rectangular indent at the bottom.
2. Attach servo horn to servo if not already and cut the horn in half
3. Feed the servo wire through the back into the small square opening.
4. Attach the shorter claw arm to the top of the servo horn, fitting it into the hole at the top.
5. Insert the long arm to the pillar within the case, putting the hole in the gear on the little pole
6. Take the restrictive piece and attach it on the part the highest wall in the case, making sure it covers the top of the long arm and doesn't interfere with its rotation path.
7. Wire using breadboard, jumper wires, button, and microcontroller
- I used hot glue for mine but super glue would be optimal.


  

BOM:
https://docs.google.com/spreadsheets/d/1SYO76Gznaj6-r703l9xk6nzmOlXZcnyvFCO7KxG4GtA/edit?usp=sharing

<img width="727" height="191" alt="image" src="https://github.com/user-attachments/assets/a17a1ee0-84e8-44ec-9404-dca1cc880061" />

All items I bought were from amazon but any vendors work.




<img width="789" height="746" alt="image" src="https://github.com/user-attachments/assets/efd2fb3c-3a42-47c0-9cdd-4da08dc44fe2" />
<img width="771" height="441" alt="image" src="https://github.com/user-attachments/assets/3ee617fb-e047-4f68-a7f9-d56a6a2e6ab7" />
<img width="759" height="686" alt="image" src="https://github.com/user-attachments/assets/321b588d-b88f-4f09-9cb8-91391d369d82" />

Product in Fusion360, from different angles, showing components, assembled and individual parts


<img width="4469" height="3636" alt="IMG_0540" src="https://github.com/user-attachments/assets/6581196b-0b21-4b8a-be84-2631720aa701" />
Back
<img width="4523" height="2488" alt="IMG_0537" src="https://github.com/user-attachments/assets/05ff62ad-4f88-4bf8-8ae0-f0022cca10a4" />
Side
<img width="3594" height="2840" alt="IMG_0539" src="https://github.com/user-attachments/assets/05daa71e-aa77-495d-991e-0431aa41f93a" />
Top
<img width="4142" height="2519" alt="IMG_0538" src="https://github.com/user-attachments/assets/9e2e4759-97d8-48ac-9ac5-b607848f8848" />
Front

Product fully printed and assembled



Wiring Schematic: 
[Wiring.Schematic_images.zip](https://github.com/user-attachments/files/34224269/Wiring.Schematic_images.zip)



Connections done with jumper wires, power supply from the Arduino connected to a computer. No soldering as its done on a breadboard. Pushbutton is connected to Digital Pin 8 and GND. Servo is connected to 5V, GND, and the servo Signal pin is connected to Digital Pin 3. 

