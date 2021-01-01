var i;
var ans;

i = 2;
ans = 0;
while(i < process.argv.length)
{
	ans += parseInt(process.argv[i])
	i++
}
console.log(ans)