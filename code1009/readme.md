# windows 가상 메모리 주소 공간

## 32비트 Windows의 기본 가상 주소 공간
- 낮은 2GB(0x00000000~0x7FFFFFFF): 프로세스에서 사용됩니다.
- 높은 2GB(0x80000000~0xFFFFFFFF): 시스템에서 사용됩니다.

## 64비트 Windows의 기본 가상 주소 공간
- 낮은 2GB(0x00000000~0x7FFFFFFF): 프로세스에서 사용됩니다.
- 높은 2GB(0x80000000~0xFFFFFFFF): 시스템에서 사용됩니다.



# 프로그램 기본 주소

## EXE 기본주소
- 32비트 0x000400000 
- 64비트 0x140000000

## DLL 기본주소
- 32비트 0x010000000 
- 64비트 0x180000000



# 원본 소스 경고

## ASLR(주소 공간 레이아웃 임의화)
- ASLR(Address Space Layout Randomization)이란?

  메모리 손상 취약점 공격을 방지 하기 위한 기술

- 원본 소스 64빌드 경고 내용

  warning LNK4281: x64 이미지에 대한 적합하지 않은 기준 주소 0x3200000. 가장 적합한 ASLR 최적화를 위해 4GB 이상의 기준 주소를 설정하세요.



## x64 변경 주소
  0x103200000
  


# Win32 버젼은 탐지 못하는 문제가 있음


# x64 버전 경고 메시지
Visual Leak Detector read settings from: D:\practice\practice_cpp_stl\x64\Debug\vld.ini
469: !!! VirtualProtect FAILED when protecting for address=00007FFA36C9397A, size=8, with GetLastError()=487, protect_handle->address=00007FFA36C9397A, protect_handle->size=8
469: !!! VirtualProtect FAILED when protecting for address=00007FFA36C9397A, size=8, with GetLastError()=487, protect_handle->address=00007FFA36C9397A, protect_handle->size=8
469: !!! VirtualProtect FAILED when protecting for address=00007FFA36C9397A, size=8, with GetLastError()=487, protect_handle->address=00007FFA36C9397A, protect_handle->size=8
469: !!! VirtualProtect FAILED when protecting for address=00007FFA36C9397A, size=8, with GetLastError()=487, protect_handle->address=00007FFA36C9397A, protect_handle->size=8
469: !!! VirtualProtect FAILED when protecting for address=00007FFA36C9397A, size=8, with GetLastError()=487, protect_handle->address=00007FFA36C9397A, protect_handle->size=8
469: !!! VirtualProtect FAILED when protecting for address=00007FFA36C9397A, size=8, with GetLastError()=487, protect_handle->address=00007FFA36C9397A, protect_handle->size=8
Visual Leak Detector Version 2.5.9 installed.






