// pseudocode --> executable in repl.it
// copy and paste it in repl.it
//
class Node{
	constructor(value){
		this.left = null;
		this.right = null;
		this.value = value;
	}
}

class BinarySearchTree{
	constructor(){
		this.root = null;
	}
	insert(value){
		// code below  for insert() 

	}
	lookup(value){
		// code below for lookup()
			
	}
}

const tree = new BinarySearchTree()'
tree.insert(9);
tree.insert(4);
tree.insert(6);
tree.insert(20);
tree.insert(170);
tree.insert(15);
tree.insert(1);
// Strigify JS to JSON
JSON.stringify(traverse(tree.root));
//  				9
//  		4				6
//  	1						15
//  								20	
//  					

function traverse(node){
	const tree = { value: node.value };
	tree.left = node.left === null ? null :
		traverse(node.left);
	tree.right = node.right === null ? null :
		traverse(node.right);
	return tree;
}
