# makeTransparent
OpenCV code to make image background transparent 

## Usage
* Clone repository
```bash
git clone https://github.com/Poirot1729/makeTransparent.git
```

* Change directory
```bash
cd makeTransparent
```

* Build
```bash
mkdir build && cd build
cmake ..
make
```

* Execute
```
./makeTransparent 'image/path' 'backgroung-color'
```
background-color is either white or black according to the image background.
Resulting image will be stored in the main directory as res.png

## Example

### Input Image
![input](https://user-images.githubusercontent.com/15849927/28239523-d3873a96-698b-11e7-8d85-f399d51b97d0.jpg)

### Execution
```bash
./makeTransparent input.jpg 'white'
```

### Output Image
![res](https://user-images.githubusercontent.com/15849927/28239524-dce04452-698b-11e7-9a0c-86c0f7d06852.png)


