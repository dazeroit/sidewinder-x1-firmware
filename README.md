# Artillery Sidewinder X1 Firmware
<img align="right" src="https://raw.githubusercontent.com/MarlinFirmware/Marlin/1.1.x/buildroot/share/pixmaps/logo/marlin-250.png" />

![GitHub](https://img.shields.io/badge/license-GNU%203-orange)
![GitHub](https://img.shields.io/badge/PlatformIO-ready-success)

 <p>Original firmware for Artillery Sidewinder X1 based on Marlin Firmware v1.1.9</p>
 <p>This repo also contains other firmware versions, based on Marlin, with improvements and additional functions</p>

------------

 ### Alternative versions on this repo and branch explanation

![GitHub](https://img.shields.io/badge/branch-original-blue)
![GitHub](https://img.shields.io/badge/test-passed-success)
![GitHub](https://img.shields.io/badge/released-yes-success)

> **branch : original**<br>
> firmware version : Marlin 1.1.9 (original firmware )<br>
> motherboard : MKS GEN L<br>
> drivers : TMC2100 (or equivalent)<br>

------------

![GitHub](https://img.shields.io/badge/branch-MGL%20T2100%202.0.x-blue)
![GitHub](https://img.shields.io/badge/test-progress-yellow)
![GitHub](https://img.shields.io/badge/released-no-critical)

> **branch : MGL T2100 2.0.x**<br>
> firmware version : Marlin 2.0.x<br>
> motherboard : MKS GEN L<br>
> drivers : TMC2100 (or equivalent)<br>
> #### FEATURES
> - EEPROM
> - NOZZLE PARK
> - ADVANCED PAUSE FEATURE
> - EMERGENCY PARSER
> - MESH BED LEVELING
> - JUNCTION DEVIATION
> - S CURVE ACCELERATION
> - ADAPTIVE STEP SMOOTHING

------------

## Firmware Installation

<p>With the <b>original hardware</b>, the TFT display and the motherboard USB share the same serial port</p>
<p> ⚠️ Disconnect the TFT display before uploading the firmware to avoid problems when loading the firmware or brick the microcontroller</p>
