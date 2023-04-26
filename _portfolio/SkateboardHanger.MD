---
title: "SLS + Generative Design of a skateboard hanger"
excerpt: "Application of SLS and generative design to printing to create a skateboard hanger"
header:
  image: /assets/img/Hanger.png
  teaser: /assets/img/HangerAssembly1.png
   
---

The objective of this project was to leverage generative design in order to develop an optimized model for the hanger of a skateboard. The design was generated with selective laser sintering  (SLS) powder bed fusion being the final additive manufacturing technique to be used. 

# Generative Design Constraints

The design was initiated by creating preserved geometries off of an existing STEP file for the skateboard undercarriage assembly. This allowed new key preserved geometries to be extruded on top of existing features, additionally the existing pieces could be used as obstacles in the generative design workspace. There were four key preserved geometries that were created: the peg for the pivot cup, the connector to the kingpin, and the two hollow cylinders for the axle to fit through. The remainder of the objects in the assembly, excluding the hanger, were used as obstacles in the generative design space. This ensured that the generative design would not encroach on the rubber brushes, baseplate, or axle. An additional obstacle was created wrapping around the end of the axle to give the required 17 mm clearance to the wheels. Once all of the geometry was assigned, a load through the peg and the connector of 1000 N each was applied. This load case was loosely modeled on the force that a rider would exert  2000 newtons of force on one axle during a trick. This would only occur with a heavy rider and additional acceleration from tricks. Further, a 600 N force 90 degrees from normal was placed on either of the axle couplers to account for forces when the rider is turning. Since SLS printing is being used in this case, the manufacturing method was defined as unrestricted since no supports are required for pSLS. The results of the generative design are displayed in Figure 1,2,and 3. 

# pSLS

The generative design was printed with polymer SLS (pSLS) with the Formlabs Fuse1 using Nylon12 60 micron powder. pSLS is an ideal method of printing generative designs as it does not have limitations on overhang angles and produces parts with limited anisotropy. The final printed part can be seen in Figure 4.


Overall, this project sought to apply generative design to the development of SLS printable models. 


# CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6e5f43cc7128a5806f?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

## Figure 1: Rendered CAD model of the hanger

![Figure 1: Rendered CAD model of the hanger)](/assets/img/Hanger.png)

## Figure 2: Full assembly of the skateboard truck with the designed hanger
![Figure 2: Full assembly of the skateboard truck with the designed hanger](/assets/img/HangerAssembly1.png)

## Figure 3: Stress Diagram of the hanger with saftey factors included
![Figure 3: Stress Diagram of the hanger with saftey factors included](/assets/img/StressDiagramHanger.png)


## Figure 4: SLS printed model
![Figure 4: SLS printed model](/assets/img/Fluidic1.jpg)


