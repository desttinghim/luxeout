#include <hxcpp.h>

#ifndef INCLUDED_haxe_crypto_Md5
#include <haxe/crypto/Md5.h>
#endif
namespace haxe{
namespace crypto{

Void Md5_obj::__construct()
{
HX_STACK_FRAME("haxe.crypto.Md5","new",0x90507feb,"haxe.crypto.Md5.new","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",73,0xa59e361e)
{
}
;
	return null();
}

//Md5_obj::~Md5_obj() { }

Dynamic Md5_obj::__CreateEmpty() { return  new Md5_obj; }
hx::ObjectPtr< Md5_obj > Md5_obj::__new()
{  hx::ObjectPtr< Md5_obj > result = new Md5_obj();
	result->__construct();
	return result;}

Dynamic Md5_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Md5_obj > result = new Md5_obj();
	result->__construct();
	return result;}

int Md5_obj::bitOR( int a,int b){
	HX_STACK_FRAME("haxe.crypto.Md5","bitOR",0xbf34737b,"haxe.crypto.Md5.bitOR","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",76,0xa59e361e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(77)
	int lsb = (int((int(a) & int((int)1))) | int((int(b) & int((int)1))));		HX_STACK_VAR(lsb,"lsb");
	HX_STACK_LINE(78)
	int msb31 = (int(hx::UShr(a,(int)1)) | int(hx::UShr(b,(int)1)));		HX_STACK_VAR(msb31,"msb31");
	HX_STACK_LINE(79)
	return (int((int(msb31) << int((int)1))) | int(lsb));
}


HX_DEFINE_DYNAMIC_FUNC2(Md5_obj,bitOR,return )

int Md5_obj::bitXOR( int a,int b){
	HX_STACK_FRAME("haxe.crypto.Md5","bitXOR",0x8eb76a23,"haxe.crypto.Md5.bitXOR","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",82,0xa59e361e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(83)
	int lsb = (int((int(a) & int((int)1))) ^ int((int(b) & int((int)1))));		HX_STACK_VAR(lsb,"lsb");
	HX_STACK_LINE(84)
	int msb31 = (int(hx::UShr(a,(int)1)) ^ int(hx::UShr(b,(int)1)));		HX_STACK_VAR(msb31,"msb31");
	HX_STACK_LINE(85)
	return (int((int(msb31) << int((int)1))) | int(lsb));
}


HX_DEFINE_DYNAMIC_FUNC2(Md5_obj,bitXOR,return )

int Md5_obj::bitAND( int a,int b){
	HX_STACK_FRAME("haxe.crypto.Md5","bitAND",0x8ea5f55f,"haxe.crypto.Md5.bitAND","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",88,0xa59e361e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(89)
	int lsb = (int((int(a) & int((int)1))) & int(((int(b) & int((int)1)))));		HX_STACK_VAR(lsb,"lsb");
	HX_STACK_LINE(90)
	int msb31 = (int(hx::UShr(a,(int)1)) & int(hx::UShr(b,(int)1)));		HX_STACK_VAR(msb31,"msb31");
	HX_STACK_LINE(91)
	return (int((int(msb31) << int((int)1))) | int(lsb));
}


HX_DEFINE_DYNAMIC_FUNC2(Md5_obj,bitAND,return )

int Md5_obj::addme( int x,int y){
	HX_STACK_FRAME("haxe.crypto.Md5","addme",0x2873c404,"haxe.crypto.Md5.addme","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",94,0xa59e361e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(95)
	int lsw = (((int(x) & int((int)65535))) + ((int(y) & int((int)65535))));		HX_STACK_VAR(lsw,"lsw");
	HX_STACK_LINE(96)
	int msw = ((((int(x) >> int((int)16))) + ((int(y) >> int((int)16)))) + ((int(lsw) >> int((int)16))));		HX_STACK_VAR(msw,"msw");
	HX_STACK_LINE(97)
	return (int((int(msw) << int((int)16))) | int((int(lsw) & int((int)65535))));
}


HX_DEFINE_DYNAMIC_FUNC2(Md5_obj,addme,return )

::String Md5_obj::hex( Array< int > a){
	HX_STACK_FRAME("haxe.crypto.Md5","hex",0x904bf266,"haxe.crypto.Md5.hex","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",100,0xa59e361e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(101)
	::String str = HX_CSTRING("");		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(102)
	::String hex_chr = HX_CSTRING("0123456789abcdef");		HX_STACK_VAR(hex_chr,"hex_chr");
	HX_STACK_LINE(103)
	{
		HX_STACK_LINE(103)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(103)
		while(((_g < a->length))){
			HX_STACK_LINE(103)
			int num = a->__get(_g);		HX_STACK_VAR(num,"num");
			HX_STACK_LINE(103)
			++(_g);
			HX_STACK_LINE(104)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(104)
			while(((_g1 < (int)4))){
				HX_STACK_LINE(104)
				int j = (_g1)++;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(105)
				::String _g2 = hex_chr.charAt((int((int(num) >> int(((j * (int)8) + (int)4)))) & int((int)15)));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(105)
				hx::AddEq(str,(_g2 + hex_chr.charAt((int((int(num) >> int((j * (int)8)))) & int((int)15)))));
			}
		}
	}
	HX_STACK_LINE(107)
	return str;
}


HX_DEFINE_DYNAMIC_FUNC1(Md5_obj,hex,return )

int Md5_obj::rol( int num,int cnt){
	HX_STACK_FRAME("haxe.crypto.Md5","rol",0x9053919a,"haxe.crypto.Md5.rol","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",169,0xa59e361e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(num,"num")
	HX_STACK_ARG(cnt,"cnt")
	HX_STACK_LINE(169)
	return (int((int(num) << int(cnt))) | int(hx::UShr(num,((int)32 - cnt))));
}


HX_DEFINE_DYNAMIC_FUNC2(Md5_obj,rol,return )

int Md5_obj::cmn( int q,int a,int b,int x,int s,int t){
	HX_STACK_FRAME("haxe.crypto.Md5","cmn",0x90482e0f,"haxe.crypto.Md5.cmn","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",172,0xa59e361e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(q,"q")
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(173)
	int _g = this->addme(a,q);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(173)
	return this->addme(this->rol(this->addme(_g,this->addme(x,t)),s),b);
}


HX_DEFINE_DYNAMIC_FUNC6(Md5_obj,cmn,return )

int Md5_obj::ff( int a,int b,int c,int d,int x,int s,int t){
	HX_STACK_FRAME("haxe.crypto.Md5","ff",0xde352415,"haxe.crypto.Md5.ff","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",176,0xa59e361e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(177)
	int _g = this->bitAND(b,c);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(177)
	return this->cmn(this->bitOR(_g,this->bitAND(~(int)(b),d)),a,b,x,s,t);
}


HX_DEFINE_DYNAMIC_FUNC7(Md5_obj,ff,return )

int Md5_obj::gg( int a,int b,int c,int d,int x,int s,int t){
	HX_STACK_FRAME("haxe.crypto.Md5","gg",0xde3524f5,"haxe.crypto.Md5.gg","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",180,0xa59e361e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(181)
	int _g = this->bitAND(b,d);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(181)
	return this->cmn(this->bitOR(_g,this->bitAND(c,~(int)(d))),a,b,x,s,t);
}


HX_DEFINE_DYNAMIC_FUNC7(Md5_obj,gg,return )

int Md5_obj::hh( int a,int b,int c,int d,int x,int s,int t){
	HX_STACK_FRAME("haxe.crypto.Md5","hh",0xde3525d5,"haxe.crypto.Md5.hh","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",185,0xa59e361e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(185)
	return this->cmn(this->bitXOR(this->bitXOR(b,c),d),a,b,x,s,t);
}


HX_DEFINE_DYNAMIC_FUNC7(Md5_obj,hh,return )

int Md5_obj::ii( int a,int b,int c,int d,int x,int s,int t){
	HX_STACK_FRAME("haxe.crypto.Md5","ii",0xde3526b5,"haxe.crypto.Md5.ii","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",189,0xa59e361e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(189)
	return this->cmn(this->bitXOR(c,this->bitOR(b,~(int)(d))),a,b,x,s,t);
}


HX_DEFINE_DYNAMIC_FUNC7(Md5_obj,ii,return )

Array< int > Md5_obj::doEncode( Array< int > x){
	HX_STACK_FRAME("haxe.crypto.Md5","doEncode",0x943f9096,"haxe.crypto.Md5.doEncode","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",192,0xa59e361e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(194)
	int a = (int)1732584193;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(195)
	int b = (int)-271733879;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(196)
	int c = (int)-1732584194;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(197)
	int d = (int)271733878;		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(199)
	int step;		HX_STACK_VAR(step,"step");
	HX_STACK_LINE(201)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(202)
	while(((i < x->length))){
		HX_STACK_LINE(203)
		int olda = a;		HX_STACK_VAR(olda,"olda");
		HX_STACK_LINE(204)
		int oldb = b;		HX_STACK_VAR(oldb,"oldb");
		HX_STACK_LINE(205)
		int oldc = c;		HX_STACK_VAR(oldc,"oldc");
		HX_STACK_LINE(206)
		int oldd = d;		HX_STACK_VAR(oldd,"oldd");
		HX_STACK_LINE(208)
		step = (int)0;
		HX_STACK_LINE(209)
		a = this->ff(a,b,c,d,x->__get(i),(int)7,(int)-680876936);
		HX_STACK_LINE(210)
		d = this->ff(d,a,b,c,x->__get((i + (int)1)),(int)12,(int)-389564586);
		HX_STACK_LINE(211)
		c = this->ff(c,d,a,b,x->__get((i + (int)2)),(int)17,(int)606105819);
		HX_STACK_LINE(212)
		b = this->ff(b,c,d,a,x->__get((i + (int)3)),(int)22,(int)-1044525330);
		HX_STACK_LINE(213)
		a = this->ff(a,b,c,d,x->__get((i + (int)4)),(int)7,(int)-176418897);
		HX_STACK_LINE(214)
		d = this->ff(d,a,b,c,x->__get((i + (int)5)),(int)12,(int)1200080426);
		HX_STACK_LINE(215)
		c = this->ff(c,d,a,b,x->__get((i + (int)6)),(int)17,(int)-1473231341);
		HX_STACK_LINE(216)
		b = this->ff(b,c,d,a,x->__get((i + (int)7)),(int)22,(int)-45705983);
		HX_STACK_LINE(217)
		a = this->ff(a,b,c,d,x->__get((i + (int)8)),(int)7,(int)1770035416);
		HX_STACK_LINE(218)
		d = this->ff(d,a,b,c,x->__get((i + (int)9)),(int)12,(int)-1958414417);
		HX_STACK_LINE(219)
		c = this->ff(c,d,a,b,x->__get((i + (int)10)),(int)17,(int)-42063);
		HX_STACK_LINE(220)
		b = this->ff(b,c,d,a,x->__get((i + (int)11)),(int)22,(int)-1990404162);
		HX_STACK_LINE(221)
		a = this->ff(a,b,c,d,x->__get((i + (int)12)),(int)7,(int)1804603682);
		HX_STACK_LINE(222)
		d = this->ff(d,a,b,c,x->__get((i + (int)13)),(int)12,(int)-40341101);
		HX_STACK_LINE(223)
		c = this->ff(c,d,a,b,x->__get((i + (int)14)),(int)17,(int)-1502002290);
		HX_STACK_LINE(224)
		b = this->ff(b,c,d,a,x->__get((i + (int)15)),(int)22,(int)1236535329);
		HX_STACK_LINE(225)
		a = this->gg(a,b,c,d,x->__get((i + (int)1)),(int)5,(int)-165796510);
		HX_STACK_LINE(226)
		d = this->gg(d,a,b,c,x->__get((i + (int)6)),(int)9,(int)-1069501632);
		HX_STACK_LINE(227)
		c = this->gg(c,d,a,b,x->__get((i + (int)11)),(int)14,(int)643717713);
		HX_STACK_LINE(228)
		b = this->gg(b,c,d,a,x->__get(i),(int)20,(int)-373897302);
		HX_STACK_LINE(229)
		a = this->gg(a,b,c,d,x->__get((i + (int)5)),(int)5,(int)-701558691);
		HX_STACK_LINE(230)
		d = this->gg(d,a,b,c,x->__get((i + (int)10)),(int)9,(int)38016083);
		HX_STACK_LINE(231)
		c = this->gg(c,d,a,b,x->__get((i + (int)15)),(int)14,(int)-660478335);
		HX_STACK_LINE(232)
		b = this->gg(b,c,d,a,x->__get((i + (int)4)),(int)20,(int)-405537848);
		HX_STACK_LINE(233)
		a = this->gg(a,b,c,d,x->__get((i + (int)9)),(int)5,(int)568446438);
		HX_STACK_LINE(234)
		d = this->gg(d,a,b,c,x->__get((i + (int)14)),(int)9,(int)-1019803690);
		HX_STACK_LINE(235)
		c = this->gg(c,d,a,b,x->__get((i + (int)3)),(int)14,(int)-187363961);
		HX_STACK_LINE(236)
		b = this->gg(b,c,d,a,x->__get((i + (int)8)),(int)20,(int)1163531501);
		HX_STACK_LINE(237)
		a = this->gg(a,b,c,d,x->__get((i + (int)13)),(int)5,(int)-1444681467);
		HX_STACK_LINE(238)
		d = this->gg(d,a,b,c,x->__get((i + (int)2)),(int)9,(int)-51403784);
		HX_STACK_LINE(239)
		c = this->gg(c,d,a,b,x->__get((i + (int)7)),(int)14,(int)1735328473);
		HX_STACK_LINE(240)
		b = this->gg(b,c,d,a,x->__get((i + (int)12)),(int)20,(int)-1926607734);
		HX_STACK_LINE(241)
		a = this->hh(a,b,c,d,x->__get((i + (int)5)),(int)4,(int)-378558);
		HX_STACK_LINE(242)
		d = this->hh(d,a,b,c,x->__get((i + (int)8)),(int)11,(int)-2022574463);
		HX_STACK_LINE(243)
		c = this->hh(c,d,a,b,x->__get((i + (int)11)),(int)16,(int)1839030562);
		HX_STACK_LINE(244)
		b = this->hh(b,c,d,a,x->__get((i + (int)14)),(int)23,(int)-35309556);
		HX_STACK_LINE(245)
		a = this->hh(a,b,c,d,x->__get((i + (int)1)),(int)4,(int)-1530992060);
		HX_STACK_LINE(246)
		d = this->hh(d,a,b,c,x->__get((i + (int)4)),(int)11,(int)1272893353);
		HX_STACK_LINE(247)
		c = this->hh(c,d,a,b,x->__get((i + (int)7)),(int)16,(int)-155497632);
		HX_STACK_LINE(248)
		b = this->hh(b,c,d,a,x->__get((i + (int)10)),(int)23,(int)-1094730640);
		HX_STACK_LINE(249)
		a = this->hh(a,b,c,d,x->__get((i + (int)13)),(int)4,(int)681279174);
		HX_STACK_LINE(250)
		d = this->hh(d,a,b,c,x->__get(i),(int)11,(int)-358537222);
		HX_STACK_LINE(251)
		c = this->hh(c,d,a,b,x->__get((i + (int)3)),(int)16,(int)-722521979);
		HX_STACK_LINE(252)
		b = this->hh(b,c,d,a,x->__get((i + (int)6)),(int)23,(int)76029189);
		HX_STACK_LINE(253)
		a = this->hh(a,b,c,d,x->__get((i + (int)9)),(int)4,(int)-640364487);
		HX_STACK_LINE(254)
		d = this->hh(d,a,b,c,x->__get((i + (int)12)),(int)11,(int)-421815835);
		HX_STACK_LINE(255)
		c = this->hh(c,d,a,b,x->__get((i + (int)15)),(int)16,(int)530742520);
		HX_STACK_LINE(256)
		b = this->hh(b,c,d,a,x->__get((i + (int)2)),(int)23,(int)-995338651);
		HX_STACK_LINE(257)
		a = this->ii(a,b,c,d,x->__get(i),(int)6,(int)-198630844);
		HX_STACK_LINE(258)
		d = this->ii(d,a,b,c,x->__get((i + (int)7)),(int)10,(int)1126891415);
		HX_STACK_LINE(259)
		c = this->ii(c,d,a,b,x->__get((i + (int)14)),(int)15,(int)-1416354905);
		HX_STACK_LINE(260)
		b = this->ii(b,c,d,a,x->__get((i + (int)5)),(int)21,(int)-57434055);
		HX_STACK_LINE(261)
		a = this->ii(a,b,c,d,x->__get((i + (int)12)),(int)6,(int)1700485571);
		HX_STACK_LINE(262)
		d = this->ii(d,a,b,c,x->__get((i + (int)3)),(int)10,(int)-1894986606);
		HX_STACK_LINE(263)
		c = this->ii(c,d,a,b,x->__get((i + (int)10)),(int)15,(int)-1051523);
		HX_STACK_LINE(264)
		b = this->ii(b,c,d,a,x->__get((i + (int)1)),(int)21,(int)-2054922799);
		HX_STACK_LINE(265)
		a = this->ii(a,b,c,d,x->__get((i + (int)8)),(int)6,(int)1873313359);
		HX_STACK_LINE(266)
		d = this->ii(d,a,b,c,x->__get((i + (int)15)),(int)10,(int)-30611744);
		HX_STACK_LINE(267)
		c = this->ii(c,d,a,b,x->__get((i + (int)6)),(int)15,(int)-1560198380);
		HX_STACK_LINE(268)
		b = this->ii(b,c,d,a,x->__get((i + (int)13)),(int)21,(int)1309151649);
		HX_STACK_LINE(269)
		a = this->ii(a,b,c,d,x->__get((i + (int)4)),(int)6,(int)-145523070);
		HX_STACK_LINE(270)
		d = this->ii(d,a,b,c,x->__get((i + (int)11)),(int)10,(int)-1120210379);
		HX_STACK_LINE(271)
		c = this->ii(c,d,a,b,x->__get((i + (int)2)),(int)15,(int)718787259);
		HX_STACK_LINE(272)
		b = this->ii(b,c,d,a,x->__get((i + (int)9)),(int)21,(int)-343485551);
		HX_STACK_LINE(274)
		a = this->addme(a,olda);
		HX_STACK_LINE(275)
		b = this->addme(b,oldb);
		HX_STACK_LINE(276)
		c = this->addme(c,oldc);
		HX_STACK_LINE(277)
		d = this->addme(d,oldd);
		HX_STACK_LINE(279)
		hx::AddEq(i,(int)16);
	}
	HX_STACK_LINE(281)
	return Array_obj< int >::__new().Add(a).Add(b).Add(c).Add(d);
}


HX_DEFINE_DYNAMIC_FUNC1(Md5_obj,doEncode,return )

::String Md5_obj::encode( ::String s){
	HX_STACK_FRAME("haxe.crypto.Md5","encode",0x979f4b6b,"haxe.crypto.Md5.encode","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",29,0xa59e361e)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(35)
	::haxe::crypto::Md5 m = ::haxe::crypto::Md5_obj::__new();		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(36)
	Array< int > h = m->doEncode(::haxe::crypto::Md5_obj::str2blks(s));		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(37)
	return m->hex(h);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Md5_obj,encode,return )

Array< int > Md5_obj::str2blks( ::String str){
	HX_STACK_FRAME("haxe.crypto.Md5","str2blks",0x2f788968,"haxe.crypto.Md5.str2blks","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",139,0xa59e361e)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(140)
	int nblk = (((int((str.length + (int)8)) >> int((int)6))) + (int)1);		HX_STACK_VAR(nblk,"nblk");
	HX_STACK_LINE(141)
	Array< int > blks = Array_obj< int >::__new();		HX_STACK_VAR(blks,"blks");
	HX_STACK_LINE(144)
	int blksSize = (nblk * (int)16);		HX_STACK_VAR(blksSize,"blksSize");
	HX_STACK_LINE(146)
	blks[(blksSize - (int)1)] = (int)0;
	HX_STACK_LINE(153)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(154)
	while(((i < str.length))){
		HX_STACK_LINE(155)
		hx::OrEq(blks[(int(i) >> int((int)2))],(int(str.charCodeAt(i)) << int((hx::Mod((((str.length * (int)8) + i)),(int)4) * (int)8))));
		HX_STACK_LINE(156)
		(i)++;
	}
	HX_STACK_LINE(158)
	hx::OrEq(blks[(int(i) >> int((int)2))],(int((int)128) << int((hx::Mod((((str.length * (int)8) + i)),(int)4) * (int)8))));
	HX_STACK_LINE(159)
	int l = (str.length * (int)8);		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(160)
	int k = ((nblk * (int)16) - (int)2);		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(161)
	blks[k] = (int(l) & int((int)255));
	HX_STACK_LINE(162)
	hx::OrEq(blks[k],(int(((int(hx::UShr(l,(int)8)) & int((int)255)))) << int((int)8)));
	HX_STACK_LINE(163)
	hx::OrEq(blks[k],(int(((int(hx::UShr(l,(int)16)) & int((int)255)))) << int((int)16)));
	HX_STACK_LINE(164)
	hx::OrEq(blks[k],(int(((int(hx::UShr(l,(int)24)) & int((int)255)))) << int((int)24)));
	HX_STACK_LINE(165)
	return blks;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Md5_obj,str2blks,return )


Md5_obj::Md5_obj()
{
}

Dynamic Md5_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ff") ) { return ff_dyn(); }
		if (HX_FIELD_EQ(inName,"gg") ) { return gg_dyn(); }
		if (HX_FIELD_EQ(inName,"hh") ) { return hh_dyn(); }
		if (HX_FIELD_EQ(inName,"ii") ) { return ii_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"hex") ) { return hex_dyn(); }
		if (HX_FIELD_EQ(inName,"rol") ) { return rol_dyn(); }
		if (HX_FIELD_EQ(inName,"cmn") ) { return cmn_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bitOR") ) { return bitOR_dyn(); }
		if (HX_FIELD_EQ(inName,"addme") ) { return addme_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"encode") ) { return encode_dyn(); }
		if (HX_FIELD_EQ(inName,"bitXOR") ) { return bitXOR_dyn(); }
		if (HX_FIELD_EQ(inName,"bitAND") ) { return bitAND_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"str2blks") ) { return str2blks_dyn(); }
		if (HX_FIELD_EQ(inName,"doEncode") ) { return doEncode_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Md5_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Md5_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("encode"),
	HX_CSTRING("str2blks"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bitOR"),
	HX_CSTRING("bitXOR"),
	HX_CSTRING("bitAND"),
	HX_CSTRING("addme"),
	HX_CSTRING("hex"),
	HX_CSTRING("rol"),
	HX_CSTRING("cmn"),
	HX_CSTRING("ff"),
	HX_CSTRING("gg"),
	HX_CSTRING("hh"),
	HX_CSTRING("ii"),
	HX_CSTRING("doEncode"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Md5_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Md5_obj::__mClass,"__mClass");
};

#endif

Class Md5_obj::__mClass;

void Md5_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.crypto.Md5"), hx::TCanCast< Md5_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Md5_obj::__boot()
{
}

} // end namespace haxe
} // end namespace crypto
