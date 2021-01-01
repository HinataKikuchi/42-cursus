var i;
var res;

i = 0;
res = 0;
const fs = require('fs');
fs.readFile(process.argv[2], function(err, data){
	while(data[i])
	{
		if (data[i] == '\n')
			res++
		i++
	}
})

res++
console.log(res)