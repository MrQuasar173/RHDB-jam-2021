project_source_files = [
    'window/RenderWindow.cpp'
]

window_inc = include_directories('window/include')

project_dependencies = [
    sdl2_dep,
    sdl2_image_dep
]

inc_dirs = [
    window_inc
]

build_args = []

project_target = executable(
  'gamejam',
  'main.cpp',
  dependencies : project_dependencies,
  include_directories : inc_dirs,
  install : true,
  cpp_args : build_args,
)