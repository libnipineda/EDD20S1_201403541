# EDD20S1_201403541
Repositorio del curso estructura de datos primer semestre.
String: Tipos de datos es crea, visualiza, transfiere, transfierefrom. 
Descripción: Los valores del TDA string son valores de cadena. El TDA String es tipo inmutable.
Especificación de las operaciones:
•	crearMoneda(_Name,_Decimal,_Symbol: String) devuelve (String)
   o	Requerimiento: 
   o	Efecto: Devuelve valores tipo cadena.
•	CrearUsuario(_User,_Id: String) delvuelve (String)
   o	Requerimiento: _Id valores aleatorios de 0 en adelante 
   o	Efecto: Devuelve valores tipo cadena.
•	Transfer(String _Owner, String _Value) devuelve(Boolean)
   o	Requerimiento: _Owner direccion para transferir y _Value cantidad a transferir
   o	Efecto: Transferir una tipo de moneda a una direccion especifica.
•	TransferFrom(String _User1, String _User2, String _Value) devuelve(Boolean)
   o	Requerimiento: _User1 usuario que desea enviar y _User2 usuario que va a recibir, _Value cantidad a enviar.
   o	Efecto: Transferir monedas de un usuario a otro
•	BalanceOf(String _Owner) devuelve(String cantidad)
   o	Requerimiento:  _Owner direccion para consultar el saldo.
   o	Efecto: Obtiene el saldo del propietario.
•	Approve(String _Spender, String _Value) devuelve(Boolean)
   o	Requerimiento: _Spender usuario que gastara los fondos y _Value cantidad de monedas
   o	Efecto: Aprobar la cantidad especificada de moneda.
