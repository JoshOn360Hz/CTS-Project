## ❌ Academic Integrity Notice ❌ 

⚠️ Important Notice ⚠️

This project is provided strictly for reference and learning purposes only.
You are not allowed to:
#### • Submit this project as your own work for any academic assignments.	
####	• Reproduce, distribute, or reuse this code for academic purposes.

Any unauthorized use of this project for academic submissions violates university policies and ethical standards.
Please use this repository only for learning and improving your skills.


## 📜 License

This project is not licensed for redistribution or academic use. Feel free to explore and learn from the code, but do not submit it as coursework.
# Escape Room Puzzle System

## How It Works
This project creates a physical escape room puzzle where players interact with an Arduino-controlled **keycard door system**.

1. **Card Swipe Simulation**  
   Players "swipe" a 3D printed card that presses a hidden button.

2. **Access Attempt and Error Code**  
   The Arduino checks for a correct code or card input.  
   If correct, instead of opening the door directly, an **error code** is displayed on the **16x2 LCD screen**.

3. **Troubleshooting Mechanism**  
   Players must find a physical **manual** in the room that explains the error code.  
   This manual provides **wiring instructions** for fixing the door mechanism.

4. **Physical Wiring Puzzle**  
   Players use clues to connect the **stepper motor** or **short specific Arduino pins**, retracting the bolt and unlocking the door.

The system combines digital and physical challenges to create an immersive escape room experience.

---

## What It Uses

**Hardware:**
- Arduino Uno
- 16x2 LCD Display
- Stepper Motor (for lock mechanism)
- Keypad
- Push Button (simulating card swipe)
- Locking Mechanism (electronic bolt or latch)
- 3D Printed Card Insert
- Jumper Wires
- Breadboard

**Software:**
- Arduino IDE
- C++ (Arduino Sketch)

**Props:**
- Physical manuals and clues placed around the room
- Images and documents stored in `/Props` used as part of the puzzle

---
