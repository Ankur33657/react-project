const os=require("os");
console.log(os.arch()); 
const freeMemo=os.freemem();
console.log(`free Memo ${freeMemo/1024/1024/1024}`);
const total=os.totalmem();
console.log(` total meemo ${total/1024/1024/1024}`);