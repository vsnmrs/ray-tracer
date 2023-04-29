# ray-tracer
Path tracer in C++

File format used is ppm (Encoded as ASCII).

By default, the program print the output to the console. To redirect it to a file use:
- In cmd:
    build\Release\RayTracer.exe > image.ppm

- In PowerShell(because by default it encodes in Unicode):
    build\Release\RayTracer.exe | Out-File -FilePath image.ppm -Encoding ASCII
