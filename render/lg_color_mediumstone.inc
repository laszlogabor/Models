

#declare lg_color_mediumstone = texture {
   pigment { rgbft <0.594846491, 0.610197368, 0.6527960523, 0, 0> }
   normal { bumps .01 scale .10 turbulence 0  }
   finish {
      ambient .0
      diffuse 1
      brilliance 1
      phong 1 phong_size 40
      specular 1
      reflection { .05 falloff 1 exponent 1 }
      conserve_energy
  }
};

