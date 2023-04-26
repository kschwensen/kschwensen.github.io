---
title: "SLS + Generative Design of a skateboard hanger"
excerpt: "Application of SLS and generative design to printing to create a skateboard hanger"
header:
  image: /assets/img/Hanger.png
  teaser: /assets/img/HangerAssembly1.png
   
---

The objective of this project was to leverage generative design in order to develop an optimized model for the hanger of a skateboard. The design was generated with selective laser sintering  (SLS) powder bed fusion being the final additive manufacturing technique to be used. 

# Generative Design Constraints

The design was initiated by creating preserved geometries off of an existing STEP file for the skateboard undercarriage assembly. This allowed new key preserved geometries to be extruded on top of existing features, additionally the existing pieces could be used as obstacles in the generative design workspace. There were four key preserved geometries that were created: the peg for the pivot cup, the connector to the kingpin, and the two hollow cylinders for the axle to fit through. The remainder of the objects in the assembly, excluding the hanger, were used as obstacles in the generative design space. This ensured that the generative design would not encroach on the rubber brushes, baseplate, or axle. An additional obstacle was created wrapping around the end of the axle to give the required 17 mm clearance to the wheels. Once all of the geometry was assigned, a load through the peg and the connector of 1000 N each was applied. This load case was loosely modeled on the force that a rider would exert  2000 newtons of force on one axle during a trick. This would only occur with a heavy rider and additional acceleration from tricks. Further, a 600 N force 90 degrees from normal was placed on either of the axle couplers to account for forces when the rider is turning. Since SLS printing is being used in this case, the manufacturing method was defined as unrestricted since no supports are required for pSLS. The results of the generative design are displayed in Figure 1,2,and 3. Interestingly, the results for the Nylon 12 and ALSi10Mg were almost identical in terms of form and size.


# pSLS

The generative design was printed with polymer SLS (pSLS) with the Formlabs Fuse1 using Nylon 12 60 micron powder. pSLS is an ideal method of printing generative designs as it does not have limitations on overhang angles and produces parts with limited anisotropy. The final printed part can be seen in Figure 4.


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



# Research and Discussion

The applications of this type of technology workflow is extensive, however, it’s particularly useful in the development of high strength, lightweight parts for performance automobiles. As these race/luxury cars benefit from marginal decreases in overall mass and increases in strength more so than mass manufactured automobiles and can be more economically viable in the early stages of maturation of this technology. A key example is the development of Formula 1 parts for race cars, which will be explored as an example in this discussion. 
 
The generative design part of this synergistic pairing is particularly important, as it serves as the method of developing optimized parts which are able to withstand a prescribed amount of force. Multiple studies have found mass reductions of up to 40% with simultaneous 20% increases in strength (3-7).This allows for the informed creation of parts without the usual need for iterative strength testing in a laboratory. Generative design involves the definition of constraints through preserved and obstacles geometries. Further, additional structural constraints and structural loads can be defined allowing the software to create a model which can withstand the forces. The software (there are many different providers) is subsequently able to simulate the loads and iteratively taper the design down until the imputed parameter -usually mass or stiffness - is minimized (6). The output of the generative design is the model alongside calculated parameters such as overall mass, safety ratings, and maximum tolerated stress. The final model is often an organic shape which is difficult to manufacture with traditional methods. 

As a result, various types of additive manufacturing (AM) are well suited to actualize these models. Specifically, powder bed fusion (PBF) is an AM technique that is well suited for generative design models. There are various submethods of PBF including SLS, selective laser melting (SLM), and electron beam melting (EBM) (1). Each of these has benefits and drawbacks, however, automobile parts typically use SLM or EBM to create parts with higher density and better mechanical properties. For polymers these methods do not require support material and an unrestricted geometry can be developed. However, metal PBF requires supports in order to dissipate heat to the conductive baseplate. As a result, more care must be taken when constraining the generative design software for metal models, however, this is still less constraining than deposition based printing which has overhang and bridging distance limitations. Further, the resolution and homogenous mechanical properties (low anisotropy) of PBF printing is critical when printing the generative design pieces. Additionally, multiple industrial grade metals such as ALSi10Mg, Ti6Al4V, and other weldable alloys are compatible with mSLS printing. However, the porosity of the piece can be a concern depending on which submethod is used. For example, mSLS can typically only achieve 70% to 80% dense materials (2). To combat this and create more solid parts, various post processing techniques can be used. However, SLM and EBM can achieve almost fully dense materials. Overall, PBF has the potential to be successfully coupled with generative design to create high quality parts that are practical as high-value parts for real-world applications.

To better understand the synergy between these technologies several case studies should be reviewed. Generative design has been used very successfully with traditional subtractive manufacturing for high performance cars. An early example of the GD + PBF workflow, is the BMW 3D printed roof bracket for their BMW i8 Roadster (5). The bracket was first optimized, reducing its weight by 44%, and printed with metal PBF. A student Formula 1 team used generative design and TI6Al4V PBF in the workflow for several of the parts of their car. Their team was able to successfully optimize the part and the printing orientation in the bed. Importantly, they validated their final piece with a static stress testing system and found that the final part was stronger than simulated - likely due to excess material. Further, they compared the deviations from the model and found minimal deviations that could be removed with more post-processing. In their final test, they integrated their 3D printed rockers and found that the part performed as expected. Overall, they outline an open source workflow (unlike other performance car teams) for creating parts with GD and PBF (Figure 5) (6). Academics have also contributed substantial work to validating and simulating how this workflow can be applied to more general cases. Arunkumar et al. produced a piston with generative design by specifying the forces which would be exerted on the piston during its range of motion. The resulting piece had 23% less mass, while still maintaining a safety factor of 3. While this final piece was not used in a real car, it showcases the power of this workflow to create parts that are more efficient (7). 

Overall, the field requires more maturity before it can be used in widespread applications. However, generative design and powder bed fusion have been successfully coupled in order to create high value parts for automobiles where the weight - strength tradeoff is a vital parameter to optimize. As PBF becomes more practical, the scope of this workflow will expand. 



1) Gibson et al., “Powder Bed Fusion.” 2021
2) Patel, Dhirenkumar, and Akash Pandey. “Powder Bed Fusion of Aluminium Alloys: A Review of Experimental Explorations – Microstructure, Mechanical Properties, and Recent Advances.” Materials Today: Proceedings, January 2, 2023. https://doi.org/10.1016/j.matpr.2022.12.228.
3) “Optimization and experimental research on treelike joints based on generative design and powderBed Fusion.” Engineering Structures 278 (March 1, 2023): 115564. https://doi.org/10.1016/j.engstruct.2022.115564.
4) Renishaw. “Renishaw: Additives in Formula 1: Technology of the Future.” Renishaw. Accessed April 26, 2023. http://www.renishaw.com/en/additives-in-formula-1-technology-of-the-future--43777.
5) Scott, Clare. “BMW Impresses with 3D Printed Roof Bracket for BMW I8 Roadster.” 3DPrint.com | The Voice of 3D Printing / Additive Manufacturing, August 13, 2018. https://3dprint.com/222268/bmw-3d-printed-roof-bracket/.
6) Markovits, Tamás, and Bence Szederkényi. “Investigation of Generative Design for Powder Bed Fusion Technology in Case of Formula Student Race Car Components Using Ti6Al4V Alloy.” Journal of Manufacturing Processes 80 (August 1, 2022): 220–31. https://doi.org/10.1016/j.jmapro.2022.05.058.
7) Arunkumar, A, A Sooriyamoorthy, C Mishael, and A Giri. “A Study on Engine Piston Optimization by Generative Design Approach.” IOP Conference Series: Materials Science and Engineering 1228, no. 1 (March 1, 2022): 012014. https://doi.org/10.1088/1757-899X/1228/1/012014.
