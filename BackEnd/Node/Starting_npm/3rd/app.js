const _=require('lodash');
const items=[1,[2,[3,[4,5]]]];

const new_items=_.flatMapDeep(items);
console.log(new_items);