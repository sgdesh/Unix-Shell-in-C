all: build

build: binaries
  @echo "Building"
  gcc shell.c -o shell

binaries:
  @echo "Building ls..."
  gcc shell.c -o ls

binaries:
  @echo "Building grep..."
  gcc shell.c -o grep
  
binaries:
  @echo "Building cat..."
  gcc shell.c -o cat

binaries:
  @echo "Building mv..."
  gcc shell.c -o mv

binaries:
  @echo "Building cp..."
  gcc shell.c -o cp
  
binaries:
  @echo "Building cd..."
  gcc shell.c -o cd

binaries:
  @echo "Building pwd..."
  gcc shell.c -o pwd

binaries:
  @echo "Building rm..."
  gcc shell.c -o rm

binaries:
  @echo "Building chmod..."
  gcc shell.c -o chmod

binaries:
  @echo "Building mkdir..."
  gcc shell.c -o mkdir

binaries:
  @echo "Building ps...(inbuilt binaries)"
  gcc shell.c -o ps

clean:
  @echo "Cleaning"
  rm ls
  rm shell
