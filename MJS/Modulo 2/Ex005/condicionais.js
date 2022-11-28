var me=
{
  name: 'Jesse',
  age: 20
}




function checkAge(person)
{
  console.log("a idade da pessoa é ", + person.age)
  
  if(person.age >= 18) 
  {
    console.log("Maior de Idade")
  }else
  {
    console.log("Menor de Idade")
  }
}

checkAge(me)

