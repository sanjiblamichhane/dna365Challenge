const strings = ['a', 'b', 'c','d'];
// 4* 4 = 16 bytes of storage in 32-bit system

//grab an item from the array
strings[3]; //0(1)

//push method -- add something at the end of the array

strings.push('e');

//check new array
console.log(strings)

//pop -- opposite of push
strings.pop();
//check array after the pop
console.log(strings)

//how to add at the beginning of the array?
//unshift
strings.unshift('x')
console.log(strings)

//add items in the middle
strings.splice(2, 0, 'alien')
console.log(strings)