[Project Name] 🎯
Basic Details
Team Name: [Name]
Team Members
Member 1: [hiba farha] - [malabar college of advanced studies vengara]
Member 2: [shamila fidha] - [malabar college of advanced studies vengara]
Member 3: [liyana sidheeq] -[ malabar college of advanced studies vengara]
Hosted Project Link
[mention your project hosted project link here]

Project Description
[This project is designed to create an intelligent dustbin system that automatically opens its lid when an object (such as hand or waste) is detected. It utilizes an Arduino microcontroller, an ultrasonic sensor, and a servo motor to automate the opening and closing of the dustbin lid, improving hygiene and convenience.]

The Problem statement
[1. Hygiene Concerns: One of the major issues with traditional dustbins is the need to touch the lid, especially in public places or kitchens, which can spread germs and bacteria. The smart dustbin eliminates the need for physical contact, promoting a more sanitary environment.

2. Convenience: In many places, people struggle with opening dustbin lids when their hands are full or dirty. This system makes waste disposal more convenient and hassle-free.

3. Environmental Awareness: Automatic systems can ensure that waste is disposed of properly, as it encourages proper waste segregation. The system can be further developed with smart sensors for specific waste types (organic, recyclable, etc.), helping reduce waste contamination.

4. Accessibility: This technology could benefit people with disabilities or elderly people who might find it challenging to open a traditional dustbin lid. The touch-free functionality makes waste disposal easier and more accessible for everyone.]

The Solution
[This project aims to develop a smart dustbin that automatically opens its lid when it detects an object approaching using an ultrasonic sensor. The ultrasonic sensor measures the distance between the object and the bin, triggering the servo motor to open the lid when a person is near. Once the object is removed or the person moves away, the lid automatically closes, ensuring that the bin remains hygienic and efficient. Additionally, the system can provide real-time feedback on the bin's fill level, helping users and maintenance teams know when the bin is full and needs to be emptied.]

Technical Details-Arduino Microcontroller:

Purpose: Acts as the brain of the system, processing sensor inputs and controlling the servomotor.
Model: Typically an Arduino Uno or similar board is used for simple interfacing with components.
Features: Processes data from the ultrasonic sensor to trigger the servomotor.
Ultrasonic Sensor (HC-SR04):

Purpose: Measures the distance between the sensor and an object (such as a hand or trash) placed near the dustbin.
Working Principle: Sends out sound waves and measures the time it takes for them to bounce back. Based on this, the distance is calculated.
Range: Usually operates in the range of 2 cm to 4 meters, sufficient for detecting proximity of objects near the dustbin lid.
Servomotor (SG90 or similar):

Purpose: Controls the opening and closing of the dustbin lid based on the input from the ultrasonic sensor.
Specifications: Typically, small servo motors like the SG90 are used, which can rotate up to 90 or 180 degrees, depending on the design.

Technologies/Components Used-ultra sonic sensor,servo motor,battery,arduieono
For Software:The software component of the project will be implemented on an Arduino platform. Below are the technical details for the software part:

Hardware Requirements:

Arduino Board (e.g., Arduino Uno)
Ultrasonic Sensor (HC-SR04): Measures the distance between the sensor and the object (hand, for example).
Servo Motor (SG90 or similar): Opens and closes the dustbin lid based on distance measurements.
Jumper wires and breadboard for wiring the components.
Software Workflow:

Initialization: The Arduino code will initialize the ultrasonic sensor, the servo motor, and the necessary variables for controlling the dustbin.

Distance Measurement: The ultrasonic sensor continuously measures the distance to the nearest object (e.g., your hand or an object approaching the dustbin). The sensor sends a pulse, and based on the time it takes for the pulse to return, the distance is calculated.

Triggering Servo Motor: If an object (e.g., a hand) is detected within a specific range (typically 10-20 cm), the Arduino sends a signal to the servo motor to open the dustbin lid. Once the object is no longer detected within range, the servo motor will close the lid after a short delay.

Delay and Control: The servo motor is controlled with a delay to prevent the lid from constantly opening and closing, making it more efficient.

Code Explanation:

Ultrasonic Sensor Function: The ultrasonic sensor uses the pulseIn() function to measure the duration of the pulse returned by the object, which is then converted to a distance.

Servo Control: The Servo library in Arduino is used to control the servo motor, setting its angle to open or close the lid (typically 0° for closed and 90° for open).

Main Logic:

Read the distance from the ultrasonic sensor.
If the distance is below a certain threshold (e.g., 15 cm), open the lid.
After a specified time, or once the object is no longer in range, close the lid.
Example Arduino Code:


}
Considerations:

Sensor Placement: The ultrasonic sensor should be placed at a height where it can effectively detect hand movements or objects approaching the dustbin.
Servo Motor Specifications: Choose a servo motor with enough torque to open and close the lid smoothly.

[EMBADED C]
[ARDUENO IDE]
[SERVO LIBRARY]
[Tools used]
For Hardware:

[server morter,arduino board,battery,ultrasonic sensor]
[List specifications]
[List tools required]
Implementation
For Software:

Installation
[commands]

Run
[commands]

Project Documentation
For Software:

Screenshots (Add at least 3)
![Screenshot1](Add screenshot 1 here with proper name) Add caption explaining what this shows

![Screenshot2](Add screenshot 2 here with proper name) Add caption explaining what this shows

![Screenshot3](Add screenshot 3 here with proper name) Add caption explaining what this shows

Diagrams
![Workflow](Add your workflow/architecture diagram here) Add caption explaining your workflow

For Hardware:

Schematic & Circuit
![Circuit](Add your circuit diagram here) Add caption explaining connections

![Schematic](Add your schematic diagram here) Add caption explaining the schematic

Build Photos
![Team](Add photo of your team here)

![Components](Add photo of your components here) List out all components shown

![Build](Add photos of build process here) Explain the build steps

![Final](Add photo of final product here) Explain the final build

Project Demo
Video
https://github.com/Hibafarha/thh-trash-geany/blob/e142323247aeda1d63cfe3e0083bb64cf7c14719/mp4.mp4

Additional Demos
[Add any extra demo materials/links]

Team Contributions
[Name 1]: [Specific contributions]
[Name 2]: [Specific contributions]
[Name 3]: [Specific contributions]
