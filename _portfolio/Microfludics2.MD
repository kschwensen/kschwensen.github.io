---
title: "Microfluidic Device"
excerpt: "Application of SLA printing to Prototype MicroFluidic Devices"
header:
  image: /assets/img/Close-Up Pliers.jpg
  teaser: /assets/img/FusionPliers.png
   
---

The goal of this project was to showcase how SLA 3D printing can be used to create molds for microfluidic device casting. 


Microfluidic devices are an invaluable tool when conducting precise experiments on small volumes of fluids and are routinely used in the biomedical and research industry. Many diagnostic, biological assays, and environmental assays rely on size based separation of certain distinctive molecules. Microflow devices provide an elegant solution to this problem, providing continuous, small scale, and affordable separation. 

The device which we created is designed to separate particles (on the order of 10-50 microns) differentially by size using a pinched flow fractionation system (Figure 1). This technology relies on the larger particles interacting with the solvent flow more than the smaller particles based solely on their size (Figure 2). Further, the separation efficiency can be modulated by altering the flow rates of the two input streams. A higher solute containing flow rates will result in a poorer separation as more fluid will shield the larger particles from the other solvent stream. Thus, this system is tunable. 

When designing our microfluidic mold, there were several parameters that we took into consideration. First was the size of the channels. With the Form 3 SLA printer we have a feature size resolution of 25 microns. While Yamada et al. created channels of 50 microns, we were concerned that this size of channel would not be preserved in our final PDMS device. Thus, the pinched section of our flow fractionation device was dimensioned at 100 microns. The angle at which the streams meet is 22.4 degrees, which is low enough to maintain laminar flow when the streams meet. Further, the pinched section opens up to one millimeter, which allows enough space for the particles to separate. See the dimensioned drawing for all measurements (Figure 
3). 


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
[Link to Configuration File](/assets/Multi Material Config File.ini)

