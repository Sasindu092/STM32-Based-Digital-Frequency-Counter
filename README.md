# STM32 Frequency Counter & OLED Debugging Project

## 📌 Project Overview
A high-precision frequency counter developed on the **STM32F411CEU6 (Black Pill)** using C and the Hardware Abstraction Layer (HAL). This project utilizes Timer Input Capture for frequency measurement and I2C for data visualization.

## 🛠️ Key Technical Features
* **Frequency Capture:** Configured `TIM2` for Input Capture to measure external signals and `TIM3` for PWM generation to provide a test signal.
* **I2C Port Migration:** Successfully migrated communication from I2C1 to **I2C2 (PB10/PB3)** to resolve hardware-level bus contention and `HAL_BUSY` errors.
* **Resilient Firmware:** Implemented a "Safe Start" routine using `HAL_I2C_IsDeviceReady` to prevent system hang-ups when peripherals are disconnected.

## 🔍 Troubleshooting Highlights (The "Engineering" Part)
One of the main focuses of this project was resolving complex hardware-software boundary issues:
1.  **GDB Server Timeouts:** Resolved debugger crashes caused by infinite loops in the I2C initialization by implementing timeouts.
2.  **HAL_BUSY Resolution:** Diagnosed a locked I2C bus state. Responded by resetting the I2C peripheral registers and switching to an alternative hardware I2C port.
3.  **Power Analysis:** Identified that ST-LINK 3.3V power was insufficient for high-current OLED pixel driving, requiring a transition to USB VBUS power.

## 🚀 How to Use
1.  Connect your signal to the Input Capture pin (PA0).
2.  Monitor the `Frequency` variable in Live Expressions.
3.  (Ongoing) Display integration requires a dedicated 3.3V/50mA power source to initialize the OLED pixels.
