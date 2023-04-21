---
title: "Microfluidic Device"
excerpt: "Application of SLA printing to Prototype MicroFluidic Devices"
header:
  image: /assets/img/Pinch_Flow_Fractioning_2023-Apr-06_04-16-12PM-000_CustomizedView11407643201_png.png
  teaser: /assets/img/Pinch_Flow_Fractioning_2023-Apr-06_04-16-12PM-000_CustomizedView11407643201_png.png
   
---

The goal of this project was to showcase how SLA 3D printing can be used to create molds for microfluidic device casting. 


Microfluidic devices are an invaluable tool when conducting precise experiments on small volumes of fluids and are routinely used in the biomedical and research industry. Many diagnostic, biological assays, and environmental assays rely on size based separation of certain distinctive molecules. Microflow devices provide an elegant solution to this problem, providing continuous, small scale, and affordable separation. 

# Theory
The device which we created is designed to separate particles (on the order of 10-50 microns) differentially by size using a pinched flow fractionation system (Figure 1). This technology relies on the larger particles interacting with the solvent flow more than the smaller particles based solely on their size when fed through a pinch point(Figure 2). Further, the separation efficiency can be modulated by altering the flow rates of the two input streams. A higher solute containing flow rates will result in a poorer separation as more fluid will shield the larger particles from the other solvent stream. Thus, this system is tunable. 

# Design Considerations
When designing our microfluidic mold, there were several parameters that we took into consideration. First was the size of the channels. With the Form 3 SLA printer we have a feature size resolution of 25 microns. While Yamada et al. created channels of 50 microns, we were concerned that this size of channel would not be preserved in our final PDMS device. Thus, the pinched section of our flow fractionation device was dimensioned at 100 microns. The angle at which the streams meet is 22.4 degrees, which is low enough to maintain laminar flow when the streams meet. Further, the pinched section opens up to one millimeter, which allows enough space for the particles to separate. See the dimensioned drawing for all measurements (Figure 
3). 

# Development Workflow

The process of creating this device was relatively straightforward. We started with a CAD model designed in Fusion 360 of the negative of our final desired microfluidic device. We used the Form 3 printer in order to print our model with 25 micron resolution and full supports (to prevent warping). After washing we cured our model with the supports on (again to prevent warping) and finally coated the device with a thin layer of waxy parylene. After coating, we filled the molds with PDMS and let them cure overnight. From this point on, we mounted our devices on a glass slide with a plasma treater. The process created covalent bonds between the glass slide and the PDMS, which will prevent liquids from leaking out. To test our device we connected syringes to our access ports. This apparatus is compatible with our previously developed syringe pump, which allows us to specifically control the flow rate entering. 

# Testing Apparatus

The success of our model was preliminary investigated with a simple set up in which we attempted to separate 60 micron spherical particles (white). One inlet contained pure water while the other contained a visible cloudy solution of the particles in water. Both streams were fed to the device at similar flow rates. The outlet ports were collected in a 96 well plate (Figure **). As is visible in the image, one outlet contained particles while the other did not. Since we do not have other sizes, it is difficult to compare the ability of our device to separate particles of different sizes as shown in figure **. In the future, we are going to procure labeled beads of known sizes ranging from 20 microns to 80 micron and evaluate the separation underneath a microscope. 

# Conclusions

Overall, we can conclude that our device was successfully modeled and fabricated. The channels support laminar fluid flow without major introduction of air bubbles. The device shows preliminary evidence that it is able to separate particles of different sizes, however, more testing is needed in order to definitively determine this. Generally, this workflow was successful in the development of microfluidic devices and could be used for future projects with biomedical and chemical engineering applications. 


# CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6e1db99992810ef92e?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

## Figure 1: Pinched Flow Fractioning Diagram (Yamada et al. 2004)

![Figure 1: Pinched Flow Fractioning Diagram (Yamada et al. 2004)](/assets/img/PinchFlow.png)

## Figure 2: Dimensioned Drawing
![Figure 2: Dimensioned Drawing](/assets/img/FlowDiagram.png)

## Figure 3: Model cast in PDMS
![Figure 3: Model cast in PDMS](/assets/img/Fluidic3.jpg)

## Figure 4: Testing Apparatus 
![Figure 4: Model cast in PDMS](/assets/img/Fluidic1.jpg)

## Figure 5: Results (White bead outflow on the right wells, pure solvent outflow on the left wells)
![Figure 4: Model cast in PDMS](/assets/img/Fluidic2.jpg)
