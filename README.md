<h1>Learning CI/CD</h1>

<h2>Building</h2>

```
sh premake.sh

mkdir build

cd build

cmake -S .. -B $(pwd)

make
```

<b>Run Program</b>
```
./src/Tic
```

<b>Run Tests</b>
```
./test/unitTests
```

