# Eugene 0.1.0 - Pre-alpha

This is the first iteration of this rover consists of ultrasonic sensing, DC motor driver, 2 DC motors and a 3D-printed chassis
The next iteration is **v0.2.0**, set to release on **May 15, 2026**.

###Planned changes(v0.2.0):

- Elimination of `delay()` in place of `millis()` algorithm
- Better ultrasound sensing
- Addition of Bluetooth module zs-040 to control the rover via `Serial Bluetooth Terminal`
- Implementation of state machine to toggle between ultrasound and BT mode with push button
- Better power management




**Demo video(v0.1.0):** https://www.youtube.com/watch?v=5wAjBlTuVfc

---
## Structure
The files are ordered as follows:
- src/ <-- code
- docs/ <-- wiring diagrams and presentation

## Hardware Components Used
> Links are the exact items used in Eugene 1.0 (FYI: Not sponsored).
- **Arduino Uno:**  
  https://www.amazon.com/Arduino-A000066-ARDUINO-UNO-R3/dp/B008GRTSV6/

- **Geared motors (TT DC motors, 3–6V class):**  
  https://www.amazon.com/AEDIKO-Motor-Gearbox-200RPM-Ratio/dp/B09N6NXP4H

- **Motor driver (L298N dual H-bridge module):**  
  https://www.amazon.com/BOJACK-H-Bridge-Controller-Intelligent-Mega2560/dp/B0C5JCF5RS

- **Batteries (18650 cells):**  
  https://www.amazon.com/AFSONGOO-Rechargeable-Flashlights-Headlamps-Doorbells/dp/B0CSSZXLLC/

- **Chassis CAD (by Ian Carey, Thingiverse):**  
  https://www.thingiverse.com/thing:5556192

- **Castor wheel (small swivel caster):**  
  https://www.amazon.com/Adhesive-Rotation-Universal-Storage-Furniture/dp/B0B4SGYDFH

- **Switches (small DC slide switches):**  
  https://www.amazon.com/Tnuocke-Vertical-Position-Latching-SS12F15-G5/dp/B099N3HFPG/

