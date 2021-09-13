project(
  'gamejam', # Set project name
  ['cpp'], # Set project language
  version : '0.0.1', # Set project version
  default_options : [
    # https://mesonbuild.com/Builtin-options.html
    'cpp_std=c++17', # Require the C++17 standard.
  ]
)
sdl2_dep = dependency('sdl2', required : true) # Require the SDL2 graphics library
sdl2_image_project = subproject('sdl2_image') # Get better SDL image generation support from wrapDB 
sdl2_image_dep = sdl2_image_project.get_variable('sdl2_image_dep')

subdir('src')

  

# TODO: add dependencies to meson