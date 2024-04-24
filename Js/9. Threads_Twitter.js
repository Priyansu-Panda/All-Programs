const post={
    username: "@kanpri",
    content: "This ios my #fist",
    likes:150,
    reposts:5,
    tags:["@kan","@pri"],
    1: "one",         // will be converted to string
    null: "nullu"   // will be converted to string
};

console.log(post);
console.log(post["username"]);
console.log(post["likes"]);
console.log(post.likes);
console.log(post.content);
// console.log(post[content]);   //not possible content will behavre as a variable
console.log(post["content"]);
console.log(post.tags);
console.log(post.tags[0]);
console.log(post[1]);
console.log(post[null]);   // it converts to string then print
// console.log(post.1);



let prop = "reposts";
post[prop];   // works
console.log(post[prop]);
// post.prop;   // doesnt work---- in case of using---- VARIABLES

