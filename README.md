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
![input](https://user-images.githubusercontent.com/15849927/28239569-be235da0-698c-11e7-9177-126dfb29cc42.jpeg)

### Execution
```bash
./makeTransparent input.jpg 'black'
```

### Output Image
![res](https://user-images.githubusercontent.com/15849927/28239609-a5fc9c86-698d-11e7-9cb0-9c1c266013d4.png


