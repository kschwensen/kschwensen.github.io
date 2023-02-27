---
title: "Print in Place Pliers"
excerpt: "A multi-material 3D print"
header:
  image: /assets/img/20221212_142535.jpg
  teaser: /assets/img/Assembly_Final_2022-Dec-13_04-11-57AM-000_CustomizedView10062345548.png
   
---

This project resulted from a culmination of knowledge and skill in my additive manufacturing class—the print-in-place pliers leverage multi-material 3D printing technology.

# Key Features

* **No assembly required** The key feature of this print is the use of a multi-material printer in order to create flexible components for the spring action on the pliers. As a result, this design is functional directly off the print bed!
* **Durable for repeated use**The design takes into consideration the frequent use of these pliers, thus no thin - easily broken - components exist in this design. 
* **Open Source Design** Additionally, the design and printing parameters are all open source, allowing anyone who has a multi-material printer to replicate this print. 


# CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH35dfcQT936092f0e43117d2bfaff09a0e8?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

# Printed Part
![Printed Part](/assets/img/PrintInPlacePliers.jpg)

# Design Considerations

The core of this design consists of two rigid handles and corresponding jaws printed with PLA which are connected with a wavy circle printed out of 95A TPU. A key aim of this project was to create a design that could exert a considerable amount of force, as such the handles are rigidly connected to each jaw ( as opposed to a flexible TPU connection). The wavy TPU connection allows the handles to rotate over their axis as the pliers are used, and keeps the PLA pieces in the correct orientation relative to one another. The waves give the TPU extra capability to stretch and compress resulting in a smooth motion. This feature was created in Fusion 360 by first creating a spline and then patterning the spline around the axis of rotation for the pliers. The extruded spline is 6 mm when connecting parts and is retained within the handles and jaw with a continuing 2 mm extrusion embedded in the PLA part. This pattern was subsequently offset and extruded as a separate body. Further, the orientation of the jaws and handles is such that when applying full compression, the jaws are able to close completely with some remaining angular separation in between the handles (i.e. the handles will never collide before the jaws).

# Final Print Dimensions 

The theoretical dimensions of the model can be found in the linked CAD model. However, the flexibility of the TPU allows for some flexibility in the parameters, as a result, the dimensions of the final model were measured with calipers. 

Maximum Jaw Capacity: 10.8 mm
Normal Jaw Capacity: 5.25 mm

Maximum Jaw Angle: 18 degrees
Normal Jaw Angle: 10 degrees 
Length of Jaw: 13.5 mm

# Print Settings
This print was sliced in the super slicer program with the specifications for the MakerGear M3 Independent Dual Extrusion 3D Printer could be loaded into super slicer with configuration files. To print with both materials different filament settings were loaded which included a slower speed and a “FLEX” designation for TPU. In addition, a wipe tower was enabled to prevent stringing materials are switched and make sure the line is fully primed before printing. See the configuration file below for more information. 
[Link to Configuration File](/assets/SyringePump.ino)

