# Smart Light with Human Detection

## 📌 Overview
This project was developed by a team of four contributors (myself and three classmates) as part of **IT254 at Illinois State University**. Each team member also maintains their own repository for their contributions.

The project implements a **smart lighting system** that automatically turns on when a human is detected using a camera. It also adjusts brightness based on ambient light levels using a photoresistor.

---

## 💡 Features
- 🔍 Human detection using a pre-trained YOLO model  
- 🌗 Automatic brightness adjustment based on ambient light  
- ⚡ Power-saving behavior 

---

## 🧠 How It Works
- A camera continuously captures frames.
- A Python script processes the frames using a YOLO-based human detection model.
- If a human is detected:
  - The Arduino-controlled LED turns on.
  - Brightness is adjusted based on ambient light detected by a photoresistor.
- The system uses an **inverse relationship**:
  - Dark environment → Brighter LED  
  - Bright environment → Dimmer LED  

---

## 🛠️ Technologies & Tools
- **Arduino** (microcontroller + LED control)
- **Python**
- **YOLOv8** (human detection model)
- **OpenCV (cv2)** (initial testing, later replaced, use to draw box)
- **Photoresistor + LED circuit** (breadboard setup)
- **Laptop camera**

> Note: We initially used OpenCV-based motion detection, but it was unreliable and required movement. We switched to YOLOv8 for accurate and consistent human detection.

---

## 🚀 How to Use

### 1. Hardware Setup
- Connect your Arduino to your computer
- Build a simple LED + photoresistor circuit on a breadboard

### 2. Upload Arduino Code
- Open the `.ino` file in Arduino IDE
- Upload it to your Arduino board

### 3. Connect Camera
- Use a laptop webcam or external camera

### 4. Run Python Script
- Install dependencies (e.g., OpenCV, YOLO)
- Run the Python script on your device

### 5. Observe Behavior

- **Human detected:**
  - Dark → LED full brightness  
  - Otherwise → LED dim  

- **No human detected:**
  - Bright → LED off  
  - Otherwise → LED dim  

- Updates every 500ms

---

## 📅 Project Timeline

**Duration:** 5 weeks  

- **Week 1:**  
  - Defined project idea, goals, and scope  

- **Week 2:**  
  - Planning and task distribution  
  - Decided system architecture  

- **Weeks 3–5:**  
  - Built hardware circuit  
  - Developed Arduino code  
  - Implemented and refined Python + ML integration  
  - Weekly progress meetings (Wednesdays at library)  

---

## 👥 Contributors
- Marcus Nguyen: https://github.com/ManhCuong110907/IT_254_SmartLight.git
- Noah Adam: https://github.com/nwadams-lab/Motion-Detection-Ambient-Light-System.git
- Daniel: https://github.com/dannykillzz/254-2-.git
- Kariq: https://github.com/kariqmyers-star/IT-254-.git

---

## ⚠️ Notes
- Ensure proper wiring of the LED and photoresistor to avoid hardware issues  
- YOLO model requires sufficient processing power for real-time detection  
- Lighting conditions and camera quality may affect detection accuracy  

---

## 📷 Future Improvements
- Add support for multiple object classes  
- Improve performance on low-power devices (e.g., Raspberry Pi)  
- Implement a GUI for easier control and monitoring  
- Optimize brightness control using PWM smoothing  

---

## 📜 License
This project is for educational purposes.