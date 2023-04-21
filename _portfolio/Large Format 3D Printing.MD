---
title: "Large Format 3D Printing and Generative Design"
excerpt: "Application of generative design to large format 3D printing for load bearing structures"
header:
  image: /assets/img/Podium_Iter4_2023-Apr-20_04-00-17PM-000_CustomizedView31917268051_png.png
  teaser: /assets/img/DinoPodium2.jpg
   
---
# Objective
The goal of this project was to explore the potential for generative design technology to be used to make a full-sized podium to be printed on a large format 3D printer. Here generative design is a practical choice as it uses multiple iterations in order to minimize the mass required to meet a certain safety standard and provide structural stability. Since the large format printer inherently takes a long time and produces heavy objects, any optimizations that can be made are especially helpful!

# Workflow and Considerations
In order to make the model for the podium in Fusion 360, I first modeled the preserved geometry including the base, face plate, self, and lectern face. The model and dimensioned drawing is shown below. Notable design decisions were the size of the face plate which is parameterized and can be easily changed to reduce the overall weight of the part. Additionally, a flat shelf and lectern face at 15 degrees provide practical features for the final design. Once the preserved geometry has been created, the obstacles - or places where the generative design should not intrude upon - should be created. In this case, an obstacle was extruded where the space for the self should be and upon the lectern face. After these initial designs were developed the generative design interface was initiated and each body was assigned. Next, the forces were assigned. A force load was then applied to the edge of the lectern face of (2000 N, 800 N, 0 N). This was based on a net maximum load of a 300 pound speaker leaning with their entire body weight on the closest edge of the podium - an unlikely scenario. The base of the podium was defined as the fixed constraint as it will not move during this process. Additionally, a plane of symmetry was placed down the middle of the podium for both aesthetic reasons and for the valid assumption that there will be no preferential loading of one side of the podium versus the other. The material was selected to be ABS - similar to PLA, which does not exist in the Fusion 360 library. The manufacturing method was also defined as additive in the Y- direction with a maximum overhang angle of 45 degrees and minimum thickness of 30 mm. These settings are the first step in ensuring the model is printable. After the generative workspace has been defined, the interactive generation could begin. This process creates a study for each manufacturing method / material that you defined. The simulation iterates until they converge or complete a certain number of trials. Each study result can then be evaluated and modified by exporting the result to a design. The form feature of this design can be modified with several tools including simply moving the vertices and faces and smoothing out uneven regions. In this case, I used the modify tool in order to reduce some overhanging features. After modifications are complete, the file can be exported and printed as per usual. 





# CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6e12a616d4c661f0c3?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

## Rendered Part

![Rendered 3D model of the Podium)](/assets/img/Podium_Iter4_2023-Apr-20_04-00-17PM-000_CustomizedView31917268051_png.png)

## A scaled down model of the podium printed without supports (dinosaurs for scale)
![A scaled down model of the podium printed without supports (dinosaurs for scale)](/assets/img/DinoPodium1.jpg)
![A scaled down model of the podium printed without supports (dinosaurs for scale)](/assets/img/DinoPodium2.jpg)

# Research and Discussion


