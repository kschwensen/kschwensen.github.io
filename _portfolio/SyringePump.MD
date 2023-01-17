---
title: "Syringe Pump"
excerpt: "An open source design for a syringe pump."
header:
  image: /assets/img/20221212_142535.jpg
  teaser: /assets/img/Assembly_Final_2022-Dec-13_04-11-57AM-000_CustomizedView10062345548.png
   
---

This syringe pump design and prototype was the final project for my introductory digital fabrication course. As a team, we created a CAD model of the system, wrote the Arduino code to easily control the system, and build a functional prototype. 

# Features

* **Accurate Flow Rates** The flow rate is controlled by the rotation of a lead screw initiated by a stepper motor. Our system can accurately achieve flow rates between 0.5 and 10 mL per minute.
* **Minimalistic Design** A key feature of this system is the minimalism associated with the 3D printed parts. Our team wanted this pump to be portable and low-profile for seamless integration into medical applications, as such thin holders move the syringe pump along the lead screw. 
* **Open Source Design**  A key feature of our design was its ability to affordably be replicated, costing less than $50 paired with detailed open source documentation our syringe pump is accessible for real-world application.


# CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH35dfcQT936092f0e43044e1d5931769ce5?mode=embed" width="1024" height="768" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

# Components
## off-the-shelf

| Linked Part | Quantity |
|---|---|
|  [200 mm lead screw with 2 mm pitch and 2 mm lead](https://www.amazon.com/dp/B07R1H5ZMV/ref=cm_sw_em_r_mt_dp_0YZ13D4HQBGW2Z86PBV1?_encoding=UTF8&psc=1)  | 1 |
|  [250 mm lead screw with 2 mm pitch and 8 mm lead](https://openbuildspartstore.com/1-4-x-8mm-flexible-coupling/) |  1  |
|  [200 mm linear rod with 8 mm diameter](https://www.amazon.com/dp/B07MPGWJMS/ref=cm_sw_em_r_mt_dp_X5AQS0ES7JH8JG83AAZ3)| 1 |
| [2040 Aluminum Extrusion 1' Length](https://www.mcmaster.com/5537T111-5537T705/)| 1 |
| [Nema 17 Stepper Motor](https://amzn.to/3uhifWk) | 1 |
|[Arduino Uno](https://www.amazon.com/dp/B007R9TUJE/ref=cm_sw_em_r_mt_dp_TY8JGK0CJD1JEJM4BNNJ)| 1 |
|[MEAN WELL RQ-65D AC-DC Power Supply Quad Output 5V 12V 24V 12V 4 Amp](https://www.amazon.com/dp/B005T9HGLI/ref=cm_sw_em_r_mt_dp_A8CZ056TM52EJGZTGZGR?)| 1 |
|[A4988 Stepper Driver](https://www.amazon.com/dp/B01FFGAKK8/ref=cm_sw_em_r_mt_dp_V0YKTYKDWMR8WHTKA53T?)| 1 |
|[Small Breadboard](https://www.amazon.com/dp/B082VYXDF1/ref=cm_sw_em_r_mt_dp_N6Q28CAGPAYCKCSJKDDC?)| 1 |
|[Panel Mount Latching Push Buttons](https://amzn.to/3VxQ29h)|1|
|[Limit Switch](https://amzn.to/3Veb1Ox)|1|
|[RGB Common Cathode LED](https://www.amazon.com/dp/B0194Y6MW2/ref=cm_sw_em_r_mt_dp_FW3CFQT7ZGFQ2R04N6G3?)|1|

## 3D printed

| Linked Part| Quantity|
|---|---|
| [Motor Mount](https://a360.co/3H6mjzP) | 1|
|[Plunger Pusher](https://a360.co/3Wku8pU)|1|
|[Syringe Holder](https://a360.co/3Wku8pU)|1|
|[Box](https://a360.co/3GIQvj3)|1|
|[Lid](https://a360.co/3iJwKQA)|1|

# Arduino Code
[Link to Arduino Code](/assets/SyringePump.ino)

