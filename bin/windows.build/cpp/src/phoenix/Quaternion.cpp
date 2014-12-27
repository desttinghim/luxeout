#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_phoenix_Matrix
#include <phoenix/Matrix.h>
#endif
#ifndef INCLUDED_phoenix_Quaternion
#include <phoenix/Quaternion.h>
#endif
#ifndef INCLUDED_phoenix_Vector
#include <phoenix/Vector.h>
#endif
namespace phoenix{

Void Quaternion_obj::__construct(hx::Null< Float >  __o__x,hx::Null< Float >  __o__y,hx::Null< Float >  __o__z,hx::Null< Float >  __o__w)
{
HX_STACK_FRAME("phoenix.Quaternion","new",0x41d5772f,"phoenix.Quaternion.new","phoenix/Quaternion.hx",7,0x23671680)

HX_STACK_ARG(__o__x,"_x")

HX_STACK_ARG(__o__y,"_y")

HX_STACK_ARG(__o__z,"_z")

HX_STACK_ARG(__o__w,"_w")
Float _x = __o__x.Default(0);
Float _y = __o__y.Default(0);
Float _z = __o__z.Default(0);
Float _w = __o__w.Default(1);
{
	HX_STACK_LINE(448)
	this->ignore_euler = false;
	HX_STACK_LINE(23)
	this->_construct = false;
	HX_STACK_LINE(16)
	this->ignore_listeners = false;
	HX_STACK_LINE(12)
	this->w = 0.0;
	HX_STACK_LINE(11)
	this->z = 0.0;
	HX_STACK_LINE(10)
	this->y = 0.0;
	HX_STACK_LINE(9)
	this->x = 0.0;
	HX_STACK_LINE(27)
	this->_construct = true;
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		this->x = _x;
		HX_STACK_LINE(29)
		if ((this->_construct)){
			HX_STACK_LINE(29)
			this->x;
		}
		else{
			HX_STACK_LINE(29)
			if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
				HX_STACK_LINE(29)
				Dynamic();
			}
			else{
				HX_STACK_LINE(29)
				::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(29)
				int order = (int)0;		HX_STACK_VAR(order,"order");
				HX_STACK_LINE(29)
				Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
				HX_STACK_LINE(29)
				Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
				HX_STACK_LINE(29)
				Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
				HX_STACK_LINE(29)
				Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
				HX_STACK_LINE(29)
				Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
				HX_STACK_LINE(29)
				Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
				HX_STACK_LINE(29)
				Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
				HX_STACK_LINE(29)
				if (((order == (int)0))){
					HX_STACK_LINE(29)
					_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
					struct _Function_5_1{
						inline static Float Block( ::phoenix::Quaternion_obj *__this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",29,0x23671680)
							{
								HX_STACK_LINE(29)
								Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(29)
								return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(29)
					_y1 = ::Math_obj::asin(_Function_5_1::Block(this));
					HX_STACK_LINE(29)
					_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
				}
				else{
					HX_STACK_LINE(29)
					if (((order == (int)1))){
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",29,0x23671680)
								{
									HX_STACK_LINE(29)
									Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(29)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(29)
						_x1 = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(29)
						_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
						HX_STACK_LINE(29)
						_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
					}
					else{
						HX_STACK_LINE(29)
						if (((order == (int)2))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",29,0x23671680)
									{
										HX_STACK_LINE(29)
										Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(29)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(29)
							_x1 = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(29)
							_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(29)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(29)
							if (((order == (int)3))){
								HX_STACK_LINE(29)
								_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",29,0x23671680)
										{
											HX_STACK_LINE(29)
											Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(29)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(29)
								_y1 = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(29)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
							}
							else{
								HX_STACK_LINE(29)
								if (((order == (int)4))){
									HX_STACK_LINE(29)
									_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
									HX_STACK_LINE(29)
									_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",29,0x23671680)
											{
												HX_STACK_LINE(29)
												Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(29)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(29)
									_z1 = ::Math_obj::asin(_Function_9_1::Block(this));
								}
								else{
									HX_STACK_LINE(29)
									if (((order == (int)5))){
										HX_STACK_LINE(29)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(29)
										_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",29,0x23671680)
												{
													HX_STACK_LINE(29)
													Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(29)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(29)
										_z1 = ::Math_obj::asin(_Function_10_1::Block(this));
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(29)
				{
					HX_STACK_LINE(29)
					Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
					HX_STACK_LINE(29)
					Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
					HX_STACK_LINE(29)
					Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
					HX_STACK_LINE(29)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(29)
					_this->ignore_listeners = true;
					HX_STACK_LINE(29)
					{
						HX_STACK_LINE(29)
						_this->x = _x2;
						HX_STACK_LINE(29)
						if ((_this->_construct)){
							HX_STACK_LINE(29)
							_this->x;
						}
						else{
							HX_STACK_LINE(29)
							if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(29)
								_this->listen_x(_x2);
							}
							HX_STACK_LINE(29)
							_this->x;
						}
					}
					HX_STACK_LINE(29)
					{
						HX_STACK_LINE(29)
						_this->y = _y2;
						HX_STACK_LINE(29)
						if ((_this->_construct)){
							HX_STACK_LINE(29)
							_this->y;
						}
						else{
							HX_STACK_LINE(29)
							if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(29)
								_this->listen_y(_y2);
							}
							HX_STACK_LINE(29)
							_this->y;
						}
					}
					HX_STACK_LINE(29)
					{
						HX_STACK_LINE(29)
						_this->z = _z2;
						HX_STACK_LINE(29)
						if ((_this->_construct)){
							HX_STACK_LINE(29)
							_this->z;
						}
						else{
							HX_STACK_LINE(29)
							if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(29)
								_this->listen_z(_z2);
							}
							HX_STACK_LINE(29)
							_this->z;
						}
					}
					HX_STACK_LINE(29)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(29)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(29)
						_this->listen_x(_this->x);
					}
					HX_STACK_LINE(29)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(29)
						_this->listen_y(_this->y);
					}
					HX_STACK_LINE(29)
					if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(29)
						_this->listen_z(_this->z);
					}
					HX_STACK_LINE(29)
					_this;
				}
				HX_STACK_LINE(29)
				_this;
			}
			HX_STACK_LINE(29)
			if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(29)
				this->listen_x(this->x);
			}
			HX_STACK_LINE(29)
			this->x;
		}
	}
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		this->y = _y;
		HX_STACK_LINE(30)
		if ((this->_construct)){
			HX_STACK_LINE(30)
			this->y;
		}
		else{
			HX_STACK_LINE(30)
			if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
				HX_STACK_LINE(30)
				Dynamic();
			}
			else{
				HX_STACK_LINE(30)
				::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(30)
				int order = (int)0;		HX_STACK_VAR(order,"order");
				HX_STACK_LINE(30)
				Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
				HX_STACK_LINE(30)
				Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
				HX_STACK_LINE(30)
				Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
				HX_STACK_LINE(30)
				Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
				HX_STACK_LINE(30)
				Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
				HX_STACK_LINE(30)
				Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
				HX_STACK_LINE(30)
				Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
				HX_STACK_LINE(30)
				if (((order == (int)0))){
					HX_STACK_LINE(30)
					_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
					struct _Function_5_1{
						inline static Float Block( ::phoenix::Quaternion_obj *__this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",30,0x23671680)
							{
								HX_STACK_LINE(30)
								Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(30)
								return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(30)
					_y1 = ::Math_obj::asin(_Function_5_1::Block(this));
					HX_STACK_LINE(30)
					_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
				}
				else{
					HX_STACK_LINE(30)
					if (((order == (int)1))){
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",30,0x23671680)
								{
									HX_STACK_LINE(30)
									Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(30)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(30)
						_x1 = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(30)
						_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
						HX_STACK_LINE(30)
						_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
					}
					else{
						HX_STACK_LINE(30)
						if (((order == (int)2))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",30,0x23671680)
									{
										HX_STACK_LINE(30)
										Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(30)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(30)
							_x1 = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(30)
							_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(30)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(30)
							if (((order == (int)3))){
								HX_STACK_LINE(30)
								_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",30,0x23671680)
										{
											HX_STACK_LINE(30)
											Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(30)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(30)
								_y1 = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(30)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
							}
							else{
								HX_STACK_LINE(30)
								if (((order == (int)4))){
									HX_STACK_LINE(30)
									_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
									HX_STACK_LINE(30)
									_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",30,0x23671680)
											{
												HX_STACK_LINE(30)
												Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(30)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(30)
									_z1 = ::Math_obj::asin(_Function_9_1::Block(this));
								}
								else{
									HX_STACK_LINE(30)
									if (((order == (int)5))){
										HX_STACK_LINE(30)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(30)
										_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",30,0x23671680)
												{
													HX_STACK_LINE(30)
													Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(30)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(30)
										_z1 = ::Math_obj::asin(_Function_10_1::Block(this));
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(30)
				{
					HX_STACK_LINE(30)
					Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
					HX_STACK_LINE(30)
					Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
					HX_STACK_LINE(30)
					Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
					HX_STACK_LINE(30)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(30)
					_this->ignore_listeners = true;
					HX_STACK_LINE(30)
					{
						HX_STACK_LINE(30)
						_this->x = _x2;
						HX_STACK_LINE(30)
						if ((_this->_construct)){
							HX_STACK_LINE(30)
							_this->x;
						}
						else{
							HX_STACK_LINE(30)
							if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(30)
								_this->listen_x(_x2);
							}
							HX_STACK_LINE(30)
							_this->x;
						}
					}
					HX_STACK_LINE(30)
					{
						HX_STACK_LINE(30)
						_this->y = _y2;
						HX_STACK_LINE(30)
						if ((_this->_construct)){
							HX_STACK_LINE(30)
							_this->y;
						}
						else{
							HX_STACK_LINE(30)
							if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(30)
								_this->listen_y(_y2);
							}
							HX_STACK_LINE(30)
							_this->y;
						}
					}
					HX_STACK_LINE(30)
					{
						HX_STACK_LINE(30)
						_this->z = _z2;
						HX_STACK_LINE(30)
						if ((_this->_construct)){
							HX_STACK_LINE(30)
							_this->z;
						}
						else{
							HX_STACK_LINE(30)
							if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(30)
								_this->listen_z(_z2);
							}
							HX_STACK_LINE(30)
							_this->z;
						}
					}
					HX_STACK_LINE(30)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(30)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(30)
						_this->listen_x(_this->x);
					}
					HX_STACK_LINE(30)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(30)
						_this->listen_y(_this->y);
					}
					HX_STACK_LINE(30)
					if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(30)
						_this->listen_z(_this->z);
					}
					HX_STACK_LINE(30)
					_this;
				}
				HX_STACK_LINE(30)
				_this;
			}
			HX_STACK_LINE(30)
			if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(30)
				this->listen_y(this->y);
			}
			HX_STACK_LINE(30)
			this->y;
		}
	}
	HX_STACK_LINE(31)
	{
		HX_STACK_LINE(31)
		this->z = _z;
		HX_STACK_LINE(31)
		if ((this->_construct)){
			HX_STACK_LINE(31)
			this->z;
		}
		else{
			HX_STACK_LINE(31)
			if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
				HX_STACK_LINE(31)
				Dynamic();
			}
			else{
				HX_STACK_LINE(31)
				::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(31)
				int order = (int)0;		HX_STACK_VAR(order,"order");
				HX_STACK_LINE(31)
				Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
				HX_STACK_LINE(31)
				Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
				HX_STACK_LINE(31)
				Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
				HX_STACK_LINE(31)
				Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
				HX_STACK_LINE(31)
				Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
				HX_STACK_LINE(31)
				Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
				HX_STACK_LINE(31)
				Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
				HX_STACK_LINE(31)
				if (((order == (int)0))){
					HX_STACK_LINE(31)
					_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
					struct _Function_5_1{
						inline static Float Block( ::phoenix::Quaternion_obj *__this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",31,0x23671680)
							{
								HX_STACK_LINE(31)
								Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(31)
								return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(31)
					_y1 = ::Math_obj::asin(_Function_5_1::Block(this));
					HX_STACK_LINE(31)
					_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
				}
				else{
					HX_STACK_LINE(31)
					if (((order == (int)1))){
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",31,0x23671680)
								{
									HX_STACK_LINE(31)
									Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(31)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(31)
						_x1 = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(31)
						_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
						HX_STACK_LINE(31)
						_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
					}
					else{
						HX_STACK_LINE(31)
						if (((order == (int)2))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",31,0x23671680)
									{
										HX_STACK_LINE(31)
										Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(31)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(31)
							_x1 = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(31)
							_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(31)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(31)
							if (((order == (int)3))){
								HX_STACK_LINE(31)
								_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",31,0x23671680)
										{
											HX_STACK_LINE(31)
											Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(31)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(31)
								_y1 = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(31)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
							}
							else{
								HX_STACK_LINE(31)
								if (((order == (int)4))){
									HX_STACK_LINE(31)
									_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
									HX_STACK_LINE(31)
									_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",31,0x23671680)
											{
												HX_STACK_LINE(31)
												Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(31)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(31)
									_z1 = ::Math_obj::asin(_Function_9_1::Block(this));
								}
								else{
									HX_STACK_LINE(31)
									if (((order == (int)5))){
										HX_STACK_LINE(31)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(31)
										_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",31,0x23671680)
												{
													HX_STACK_LINE(31)
													Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(31)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(31)
										_z1 = ::Math_obj::asin(_Function_10_1::Block(this));
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(31)
				{
					HX_STACK_LINE(31)
					Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
					HX_STACK_LINE(31)
					Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
					HX_STACK_LINE(31)
					Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
					HX_STACK_LINE(31)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(31)
					_this->ignore_listeners = true;
					HX_STACK_LINE(31)
					{
						HX_STACK_LINE(31)
						_this->x = _x2;
						HX_STACK_LINE(31)
						if ((_this->_construct)){
							HX_STACK_LINE(31)
							_this->x;
						}
						else{
							HX_STACK_LINE(31)
							if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(31)
								_this->listen_x(_x2);
							}
							HX_STACK_LINE(31)
							_this->x;
						}
					}
					HX_STACK_LINE(31)
					{
						HX_STACK_LINE(31)
						_this->y = _y2;
						HX_STACK_LINE(31)
						if ((_this->_construct)){
							HX_STACK_LINE(31)
							_this->y;
						}
						else{
							HX_STACK_LINE(31)
							if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(31)
								_this->listen_y(_y2);
							}
							HX_STACK_LINE(31)
							_this->y;
						}
					}
					HX_STACK_LINE(31)
					{
						HX_STACK_LINE(31)
						_this->z = _z2;
						HX_STACK_LINE(31)
						if ((_this->_construct)){
							HX_STACK_LINE(31)
							_this->z;
						}
						else{
							HX_STACK_LINE(31)
							if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(31)
								_this->listen_z(_z2);
							}
							HX_STACK_LINE(31)
							_this->z;
						}
					}
					HX_STACK_LINE(31)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(31)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(31)
						_this->listen_x(_this->x);
					}
					HX_STACK_LINE(31)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(31)
						_this->listen_y(_this->y);
					}
					HX_STACK_LINE(31)
					if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(31)
						_this->listen_z(_this->z);
					}
					HX_STACK_LINE(31)
					_this;
				}
				HX_STACK_LINE(31)
				_this;
			}
			HX_STACK_LINE(31)
			if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(31)
				this->listen_z(this->z);
			}
			HX_STACK_LINE(31)
			this->z;
		}
	}
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		this->w = _w;
		HX_STACK_LINE(32)
		if ((this->_construct)){
			HX_STACK_LINE(32)
			this->w;
		}
		else{
			HX_STACK_LINE(32)
			if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
				HX_STACK_LINE(32)
				Dynamic();
			}
			else{
				HX_STACK_LINE(32)
				::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(32)
				int order = (int)0;		HX_STACK_VAR(order,"order");
				HX_STACK_LINE(32)
				Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
				HX_STACK_LINE(32)
				Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
				HX_STACK_LINE(32)
				Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
				HX_STACK_LINE(32)
				Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
				HX_STACK_LINE(32)
				Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
				HX_STACK_LINE(32)
				Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
				HX_STACK_LINE(32)
				Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
				HX_STACK_LINE(32)
				if (((order == (int)0))){
					HX_STACK_LINE(32)
					_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
					struct _Function_5_1{
						inline static Float Block( ::phoenix::Quaternion_obj *__this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",32,0x23671680)
							{
								HX_STACK_LINE(32)
								Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(32)
								return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(32)
					_y1 = ::Math_obj::asin(_Function_5_1::Block(this));
					HX_STACK_LINE(32)
					_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
				}
				else{
					HX_STACK_LINE(32)
					if (((order == (int)1))){
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",32,0x23671680)
								{
									HX_STACK_LINE(32)
									Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(32)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(32)
						_x1 = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(32)
						_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
						HX_STACK_LINE(32)
						_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
					}
					else{
						HX_STACK_LINE(32)
						if (((order == (int)2))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",32,0x23671680)
									{
										HX_STACK_LINE(32)
										Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(32)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(32)
							_x1 = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(32)
							_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(32)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(32)
							if (((order == (int)3))){
								HX_STACK_LINE(32)
								_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",32,0x23671680)
										{
											HX_STACK_LINE(32)
											Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(32)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(32)
								_y1 = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(32)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
							}
							else{
								HX_STACK_LINE(32)
								if (((order == (int)4))){
									HX_STACK_LINE(32)
									_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
									HX_STACK_LINE(32)
									_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",32,0x23671680)
											{
												HX_STACK_LINE(32)
												Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(32)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(32)
									_z1 = ::Math_obj::asin(_Function_9_1::Block(this));
								}
								else{
									HX_STACK_LINE(32)
									if (((order == (int)5))){
										HX_STACK_LINE(32)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(32)
										_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",32,0x23671680)
												{
													HX_STACK_LINE(32)
													Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(32)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(32)
										_z1 = ::Math_obj::asin(_Function_10_1::Block(this));
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(32)
				{
					HX_STACK_LINE(32)
					Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
					HX_STACK_LINE(32)
					Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
					HX_STACK_LINE(32)
					Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
					HX_STACK_LINE(32)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(32)
					_this->ignore_listeners = true;
					HX_STACK_LINE(32)
					{
						HX_STACK_LINE(32)
						_this->x = _x2;
						HX_STACK_LINE(32)
						if ((_this->_construct)){
							HX_STACK_LINE(32)
							_this->x;
						}
						else{
							HX_STACK_LINE(32)
							if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(32)
								_this->listen_x(_x2);
							}
							HX_STACK_LINE(32)
							_this->x;
						}
					}
					HX_STACK_LINE(32)
					{
						HX_STACK_LINE(32)
						_this->y = _y2;
						HX_STACK_LINE(32)
						if ((_this->_construct)){
							HX_STACK_LINE(32)
							_this->y;
						}
						else{
							HX_STACK_LINE(32)
							if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(32)
								_this->listen_y(_y2);
							}
							HX_STACK_LINE(32)
							_this->y;
						}
					}
					HX_STACK_LINE(32)
					{
						HX_STACK_LINE(32)
						_this->z = _z2;
						HX_STACK_LINE(32)
						if ((_this->_construct)){
							HX_STACK_LINE(32)
							_this->z;
						}
						else{
							HX_STACK_LINE(32)
							if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(32)
								_this->listen_z(_z2);
							}
							HX_STACK_LINE(32)
							_this->z;
						}
					}
					HX_STACK_LINE(32)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(32)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(32)
						_this->listen_x(_this->x);
					}
					HX_STACK_LINE(32)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(32)
						_this->listen_y(_this->y);
					}
					HX_STACK_LINE(32)
					if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(32)
						_this->listen_z(_this->z);
					}
					HX_STACK_LINE(32)
					_this;
				}
				HX_STACK_LINE(32)
				_this;
			}
			HX_STACK_LINE(32)
			if (((bool((this->listen_w_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(32)
				this->listen_w(this->w);
			}
			HX_STACK_LINE(32)
			this->w;
		}
	}
	HX_STACK_LINE(34)
	this->euler = ::phoenix::Vector_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(36)
	this->_construct = false;
}
;
	return null();
}

//Quaternion_obj::~Quaternion_obj() { }

Dynamic Quaternion_obj::__CreateEmpty() { return  new Quaternion_obj; }
hx::ObjectPtr< Quaternion_obj > Quaternion_obj::__new(hx::Null< Float >  __o__x,hx::Null< Float >  __o__y,hx::Null< Float >  __o__z,hx::Null< Float >  __o__w)
{  hx::ObjectPtr< Quaternion_obj > result = new Quaternion_obj();
	result->__construct(__o__x,__o__y,__o__z,__o__w);
	return result;}

Dynamic Quaternion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Quaternion_obj > result = new Quaternion_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::String Quaternion_obj::toString( ){
	HX_STACK_FRAME("phoenix.Quaternion","toString",0xe5131b7d,"phoenix.Quaternion.toString","phoenix/Quaternion.hx",42,0x23671680)
	HX_STACK_THIS(this)
	HX_STACK_LINE(42)
	return ((((((((HX_CSTRING("{ x:") + this->x) + HX_CSTRING(", y:")) + this->y) + HX_CSTRING(", z:")) + this->z) + HX_CSTRING(", w:")) + this->w) + HX_CSTRING(" }"));
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,toString,return )

::phoenix::Quaternion Quaternion_obj::set( Float _x,Float _y,Float _z,Float _w){
	HX_STACK_FRAME("phoenix.Quaternion","set",0x41d94271,"phoenix.Quaternion.set","phoenix/Quaternion.hx",46,0x23671680)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_x,"_x")
	HX_STACK_ARG(_y,"_y")
	HX_STACK_ARG(_z,"_z")
	HX_STACK_ARG(_w,"_w")
	HX_STACK_LINE(48)
	{
		HX_STACK_LINE(48)
		this->ignore_euler = true;
		HX_STACK_LINE(48)
		{
			HX_STACK_LINE(48)
			this->x = _x;
			HX_STACK_LINE(48)
			if ((this->_construct)){
				HX_STACK_LINE(48)
				this->x;
			}
			else{
				HX_STACK_LINE(48)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(48)
					Dynamic();
				}
				else{
					HX_STACK_LINE(48)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(48)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(48)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(48)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(48)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(48)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(48)
					Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(48)
					Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(48)
					Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(48)
					if (((order == (int)0))){
						HX_STACK_LINE(48)
						_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",48,0x23671680)
								{
									HX_STACK_LINE(48)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(48)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(48)
						_y1 = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(48)
						_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(48)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",48,0x23671680)
									{
										HX_STACK_LINE(48)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(48)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(48)
							_x1 = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(48)
							_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(48)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(48)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",48,0x23671680)
										{
											HX_STACK_LINE(48)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(48)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(48)
								_x1 = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(48)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(48)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(48)
								if (((order == (int)3))){
									HX_STACK_LINE(48)
									_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",48,0x23671680)
											{
												HX_STACK_LINE(48)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(48)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(48)
									_y1 = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(48)
									_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(48)
									if (((order == (int)4))){
										HX_STACK_LINE(48)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(48)
										_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",48,0x23671680)
												{
													HX_STACK_LINE(48)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(48)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(48)
										_z1 = ::Math_obj::asin(_Function_10_1::Block(this));
									}
									else{
										HX_STACK_LINE(48)
										if (((order == (int)5))){
											HX_STACK_LINE(48)
											_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(48)
											_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",48,0x23671680)
													{
														HX_STACK_LINE(48)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(48)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(48)
											_z1 = ::Math_obj::asin(_Function_11_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(48)
					{
						HX_STACK_LINE(48)
						Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
						HX_STACK_LINE(48)
						Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
						HX_STACK_LINE(48)
						Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
						HX_STACK_LINE(48)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(48)
						_this->ignore_listeners = true;
						HX_STACK_LINE(48)
						{
							HX_STACK_LINE(48)
							_this->x = _x2;
							HX_STACK_LINE(48)
							if ((_this->_construct)){
								HX_STACK_LINE(48)
								_this->x;
							}
							else{
								HX_STACK_LINE(48)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(48)
									_this->listen_x(_x2);
								}
								HX_STACK_LINE(48)
								_this->x;
							}
						}
						HX_STACK_LINE(48)
						{
							HX_STACK_LINE(48)
							_this->y = _y2;
							HX_STACK_LINE(48)
							if ((_this->_construct)){
								HX_STACK_LINE(48)
								_this->y;
							}
							else{
								HX_STACK_LINE(48)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(48)
									_this->listen_y(_y2);
								}
								HX_STACK_LINE(48)
								_this->y;
							}
						}
						HX_STACK_LINE(48)
						{
							HX_STACK_LINE(48)
							_this->z = _z2;
							HX_STACK_LINE(48)
							if ((_this->_construct)){
								HX_STACK_LINE(48)
								_this->z;
							}
							else{
								HX_STACK_LINE(48)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(48)
									_this->listen_z(_z2);
								}
								HX_STACK_LINE(48)
								_this->z;
							}
						}
						HX_STACK_LINE(48)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(48)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(48)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(48)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(48)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(48)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(48)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(48)
						_this;
					}
					HX_STACK_LINE(48)
					_this;
				}
				HX_STACK_LINE(48)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(48)
					this->listen_x(this->x);
				}
				HX_STACK_LINE(48)
				this->x;
			}
		}
		HX_STACK_LINE(48)
		{
			HX_STACK_LINE(48)
			this->y = _y;
			HX_STACK_LINE(48)
			if ((this->_construct)){
				HX_STACK_LINE(48)
				this->y;
			}
			else{
				HX_STACK_LINE(48)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(48)
					Dynamic();
				}
				else{
					HX_STACK_LINE(48)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(48)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(48)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(48)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(48)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(48)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(48)
					Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(48)
					Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(48)
					Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(48)
					if (((order == (int)0))){
						HX_STACK_LINE(48)
						_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",48,0x23671680)
								{
									HX_STACK_LINE(48)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(48)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(48)
						_y1 = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(48)
						_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(48)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",48,0x23671680)
									{
										HX_STACK_LINE(48)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(48)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(48)
							_x1 = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(48)
							_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(48)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(48)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",48,0x23671680)
										{
											HX_STACK_LINE(48)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(48)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(48)
								_x1 = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(48)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(48)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(48)
								if (((order == (int)3))){
									HX_STACK_LINE(48)
									_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",48,0x23671680)
											{
												HX_STACK_LINE(48)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(48)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(48)
									_y1 = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(48)
									_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(48)
									if (((order == (int)4))){
										HX_STACK_LINE(48)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(48)
										_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",48,0x23671680)
												{
													HX_STACK_LINE(48)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(48)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(48)
										_z1 = ::Math_obj::asin(_Function_10_1::Block(this));
									}
									else{
										HX_STACK_LINE(48)
										if (((order == (int)5))){
											HX_STACK_LINE(48)
											_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(48)
											_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",48,0x23671680)
													{
														HX_STACK_LINE(48)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(48)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(48)
											_z1 = ::Math_obj::asin(_Function_11_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(48)
					{
						HX_STACK_LINE(48)
						Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
						HX_STACK_LINE(48)
						Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
						HX_STACK_LINE(48)
						Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
						HX_STACK_LINE(48)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(48)
						_this->ignore_listeners = true;
						HX_STACK_LINE(48)
						{
							HX_STACK_LINE(48)
							_this->x = _x2;
							HX_STACK_LINE(48)
							if ((_this->_construct)){
								HX_STACK_LINE(48)
								_this->x;
							}
							else{
								HX_STACK_LINE(48)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(48)
									_this->listen_x(_x2);
								}
								HX_STACK_LINE(48)
								_this->x;
							}
						}
						HX_STACK_LINE(48)
						{
							HX_STACK_LINE(48)
							_this->y = _y2;
							HX_STACK_LINE(48)
							if ((_this->_construct)){
								HX_STACK_LINE(48)
								_this->y;
							}
							else{
								HX_STACK_LINE(48)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(48)
									_this->listen_y(_y2);
								}
								HX_STACK_LINE(48)
								_this->y;
							}
						}
						HX_STACK_LINE(48)
						{
							HX_STACK_LINE(48)
							_this->z = _z2;
							HX_STACK_LINE(48)
							if ((_this->_construct)){
								HX_STACK_LINE(48)
								_this->z;
							}
							else{
								HX_STACK_LINE(48)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(48)
									_this->listen_z(_z2);
								}
								HX_STACK_LINE(48)
								_this->z;
							}
						}
						HX_STACK_LINE(48)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(48)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(48)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(48)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(48)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(48)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(48)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(48)
						_this;
					}
					HX_STACK_LINE(48)
					_this;
				}
				HX_STACK_LINE(48)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(48)
					this->listen_y(this->y);
				}
				HX_STACK_LINE(48)
				this->y;
			}
		}
		HX_STACK_LINE(48)
		{
			HX_STACK_LINE(48)
			this->z = _z;
			HX_STACK_LINE(48)
			if ((this->_construct)){
				HX_STACK_LINE(48)
				this->z;
			}
			else{
				HX_STACK_LINE(48)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(48)
					Dynamic();
				}
				else{
					HX_STACK_LINE(48)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(48)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(48)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(48)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(48)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(48)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(48)
					Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(48)
					Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(48)
					Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(48)
					if (((order == (int)0))){
						HX_STACK_LINE(48)
						_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",48,0x23671680)
								{
									HX_STACK_LINE(48)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(48)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(48)
						_y1 = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(48)
						_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(48)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",48,0x23671680)
									{
										HX_STACK_LINE(48)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(48)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(48)
							_x1 = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(48)
							_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(48)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(48)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",48,0x23671680)
										{
											HX_STACK_LINE(48)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(48)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(48)
								_x1 = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(48)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(48)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(48)
								if (((order == (int)3))){
									HX_STACK_LINE(48)
									_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",48,0x23671680)
											{
												HX_STACK_LINE(48)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(48)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(48)
									_y1 = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(48)
									_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(48)
									if (((order == (int)4))){
										HX_STACK_LINE(48)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(48)
										_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",48,0x23671680)
												{
													HX_STACK_LINE(48)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(48)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(48)
										_z1 = ::Math_obj::asin(_Function_10_1::Block(this));
									}
									else{
										HX_STACK_LINE(48)
										if (((order == (int)5))){
											HX_STACK_LINE(48)
											_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(48)
											_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",48,0x23671680)
													{
														HX_STACK_LINE(48)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(48)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(48)
											_z1 = ::Math_obj::asin(_Function_11_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(48)
					{
						HX_STACK_LINE(48)
						Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
						HX_STACK_LINE(48)
						Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
						HX_STACK_LINE(48)
						Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
						HX_STACK_LINE(48)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(48)
						_this->ignore_listeners = true;
						HX_STACK_LINE(48)
						{
							HX_STACK_LINE(48)
							_this->x = _x2;
							HX_STACK_LINE(48)
							if ((_this->_construct)){
								HX_STACK_LINE(48)
								_this->x;
							}
							else{
								HX_STACK_LINE(48)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(48)
									_this->listen_x(_x2);
								}
								HX_STACK_LINE(48)
								_this->x;
							}
						}
						HX_STACK_LINE(48)
						{
							HX_STACK_LINE(48)
							_this->y = _y2;
							HX_STACK_LINE(48)
							if ((_this->_construct)){
								HX_STACK_LINE(48)
								_this->y;
							}
							else{
								HX_STACK_LINE(48)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(48)
									_this->listen_y(_y2);
								}
								HX_STACK_LINE(48)
								_this->y;
							}
						}
						HX_STACK_LINE(48)
						{
							HX_STACK_LINE(48)
							_this->z = _z2;
							HX_STACK_LINE(48)
							if ((_this->_construct)){
								HX_STACK_LINE(48)
								_this->z;
							}
							else{
								HX_STACK_LINE(48)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(48)
									_this->listen_z(_z2);
								}
								HX_STACK_LINE(48)
								_this->z;
							}
						}
						HX_STACK_LINE(48)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(48)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(48)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(48)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(48)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(48)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(48)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(48)
						_this;
					}
					HX_STACK_LINE(48)
					_this;
				}
				HX_STACK_LINE(48)
				if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(48)
					this->listen_z(this->z);
				}
				HX_STACK_LINE(48)
				this->z;
			}
		}
		HX_STACK_LINE(48)
		{
			HX_STACK_LINE(48)
			this->w = _w;
			HX_STACK_LINE(48)
			if ((this->_construct)){
				HX_STACK_LINE(48)
				this->w;
			}
			else{
				HX_STACK_LINE(48)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(48)
					Dynamic();
				}
				else{
					HX_STACK_LINE(48)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(48)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(48)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(48)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(48)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(48)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(48)
					Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(48)
					Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(48)
					Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(48)
					if (((order == (int)0))){
						HX_STACK_LINE(48)
						_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",48,0x23671680)
								{
									HX_STACK_LINE(48)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(48)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(48)
						_y1 = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(48)
						_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(48)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",48,0x23671680)
									{
										HX_STACK_LINE(48)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(48)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(48)
							_x1 = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(48)
							_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(48)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(48)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",48,0x23671680)
										{
											HX_STACK_LINE(48)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(48)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(48)
								_x1 = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(48)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(48)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(48)
								if (((order == (int)3))){
									HX_STACK_LINE(48)
									_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",48,0x23671680)
											{
												HX_STACK_LINE(48)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(48)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(48)
									_y1 = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(48)
									_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(48)
									if (((order == (int)4))){
										HX_STACK_LINE(48)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(48)
										_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",48,0x23671680)
												{
													HX_STACK_LINE(48)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(48)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(48)
										_z1 = ::Math_obj::asin(_Function_10_1::Block(this));
									}
									else{
										HX_STACK_LINE(48)
										if (((order == (int)5))){
											HX_STACK_LINE(48)
											_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(48)
											_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",48,0x23671680)
													{
														HX_STACK_LINE(48)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(48)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(48)
											_z1 = ::Math_obj::asin(_Function_11_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(48)
					{
						HX_STACK_LINE(48)
						Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
						HX_STACK_LINE(48)
						Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
						HX_STACK_LINE(48)
						Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
						HX_STACK_LINE(48)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(48)
						_this->ignore_listeners = true;
						HX_STACK_LINE(48)
						{
							HX_STACK_LINE(48)
							_this->x = _x2;
							HX_STACK_LINE(48)
							if ((_this->_construct)){
								HX_STACK_LINE(48)
								_this->x;
							}
							else{
								HX_STACK_LINE(48)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(48)
									_this->listen_x(_x2);
								}
								HX_STACK_LINE(48)
								_this->x;
							}
						}
						HX_STACK_LINE(48)
						{
							HX_STACK_LINE(48)
							_this->y = _y2;
							HX_STACK_LINE(48)
							if ((_this->_construct)){
								HX_STACK_LINE(48)
								_this->y;
							}
							else{
								HX_STACK_LINE(48)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(48)
									_this->listen_y(_y2);
								}
								HX_STACK_LINE(48)
								_this->y;
							}
						}
						HX_STACK_LINE(48)
						{
							HX_STACK_LINE(48)
							_this->z = _z2;
							HX_STACK_LINE(48)
							if ((_this->_construct)){
								HX_STACK_LINE(48)
								_this->z;
							}
							else{
								HX_STACK_LINE(48)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(48)
									_this->listen_z(_z2);
								}
								HX_STACK_LINE(48)
								_this->z;
							}
						}
						HX_STACK_LINE(48)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(48)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(48)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(48)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(48)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(48)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(48)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(48)
						_this;
					}
					HX_STACK_LINE(48)
					_this;
				}
				HX_STACK_LINE(48)
				if (((bool((this->listen_w_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(48)
					this->listen_w(this->w);
				}
				HX_STACK_LINE(48)
				this->w;
			}
		}
		HX_STACK_LINE(48)
		this->ignore_euler = false;
		HX_STACK_LINE(48)
		if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
			HX_STACK_LINE(48)
			Dynamic();
		}
		else{
			HX_STACK_LINE(48)
			::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(48)
			int order = (int)0;		HX_STACK_VAR(order,"order");
			HX_STACK_LINE(48)
			Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
			HX_STACK_LINE(48)
			Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
			HX_STACK_LINE(48)
			Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
			HX_STACK_LINE(48)
			Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
			HX_STACK_LINE(48)
			Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
			HX_STACK_LINE(48)
			Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
			HX_STACK_LINE(48)
			Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
			HX_STACK_LINE(48)
			if (((order == (int)0))){
				HX_STACK_LINE(48)
				_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
				struct _Function_4_1{
					inline static Float Block( ::phoenix::Quaternion_obj *__this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",48,0x23671680)
						{
							HX_STACK_LINE(48)
							Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(48)
							return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
						}
						return null();
					}
				};
				HX_STACK_LINE(48)
				_y1 = ::Math_obj::asin(_Function_4_1::Block(this));
				HX_STACK_LINE(48)
				_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
			}
			else{
				HX_STACK_LINE(48)
				if (((order == (int)1))){
					struct _Function_5_1{
						inline static Float Block( ::phoenix::Quaternion_obj *__this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",48,0x23671680)
							{
								HX_STACK_LINE(48)
								Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(48)
								return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(48)
					_x1 = ::Math_obj::asin(_Function_5_1::Block(this));
					HX_STACK_LINE(48)
					_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
					HX_STACK_LINE(48)
					_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
				}
				else{
					HX_STACK_LINE(48)
					if (((order == (int)2))){
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",48,0x23671680)
								{
									HX_STACK_LINE(48)
									Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(48)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(48)
						_x1 = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(48)
						_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
						HX_STACK_LINE(48)
						_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
					}
					else{
						HX_STACK_LINE(48)
						if (((order == (int)3))){
							HX_STACK_LINE(48)
							_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",48,0x23671680)
									{
										HX_STACK_LINE(48)
										Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(48)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(48)
							_y1 = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(48)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
						}
						else{
							HX_STACK_LINE(48)
							if (((order == (int)4))){
								HX_STACK_LINE(48)
								_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
								HX_STACK_LINE(48)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",48,0x23671680)
										{
											HX_STACK_LINE(48)
											Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(48)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(48)
								_z1 = ::Math_obj::asin(_Function_8_1::Block(this));
							}
							else{
								HX_STACK_LINE(48)
								if (((order == (int)5))){
									HX_STACK_LINE(48)
									_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
									HX_STACK_LINE(48)
									_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",48,0x23671680)
											{
												HX_STACK_LINE(48)
												Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(48)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(48)
									_z1 = ::Math_obj::asin(_Function_9_1::Block(this));
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(48)
			{
				HX_STACK_LINE(48)
				Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
				HX_STACK_LINE(48)
				Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
				HX_STACK_LINE(48)
				Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
				HX_STACK_LINE(48)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(48)
				_this->ignore_listeners = true;
				HX_STACK_LINE(48)
				{
					HX_STACK_LINE(48)
					_this->x = _x2;
					HX_STACK_LINE(48)
					if ((_this->_construct)){
						HX_STACK_LINE(48)
						_this->x;
					}
					else{
						HX_STACK_LINE(48)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(48)
							_this->listen_x(_x2);
						}
						HX_STACK_LINE(48)
						_this->x;
					}
				}
				HX_STACK_LINE(48)
				{
					HX_STACK_LINE(48)
					_this->y = _y2;
					HX_STACK_LINE(48)
					if ((_this->_construct)){
						HX_STACK_LINE(48)
						_this->y;
					}
					else{
						HX_STACK_LINE(48)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(48)
							_this->listen_y(_y2);
						}
						HX_STACK_LINE(48)
						_this->y;
					}
				}
				HX_STACK_LINE(48)
				{
					HX_STACK_LINE(48)
					_this->z = _z2;
					HX_STACK_LINE(48)
					if ((_this->_construct)){
						HX_STACK_LINE(48)
						_this->z;
					}
					else{
						HX_STACK_LINE(48)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(48)
							_this->listen_z(_z2);
						}
						HX_STACK_LINE(48)
						_this->z;
					}
				}
				HX_STACK_LINE(48)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(48)
				if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(48)
					_this->listen_x(_this->x);
				}
				HX_STACK_LINE(48)
				if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(48)
					_this->listen_y(_this->y);
				}
				HX_STACK_LINE(48)
				if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(48)
					_this->listen_z(_this->z);
				}
				HX_STACK_LINE(48)
				_this;
			}
			HX_STACK_LINE(48)
			_this;
		}
		HX_STACK_LINE(48)
		if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(48)
			this->listen_x(this->x);
		}
		HX_STACK_LINE(48)
		if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(48)
			this->listen_y(this->y);
		}
		HX_STACK_LINE(48)
		if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(48)
			this->listen_z(this->z);
		}
		HX_STACK_LINE(48)
		if (((bool((this->listen_w_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(48)
			this->listen_w(this->w);
		}
	}
	HX_STACK_LINE(50)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC4(Quaternion_obj,set,return )

::phoenix::Quaternion Quaternion_obj::copy( ::phoenix::Quaternion _quaternion){
	HX_STACK_FRAME("phoenix.Quaternion","copy",0x51b50a06,"phoenix.Quaternion.copy","phoenix/Quaternion.hx",55,0x23671680)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_quaternion,"_quaternion")
	HX_STACK_LINE(57)
	{
		HX_STACK_LINE(57)
		this->ignore_euler = true;
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			this->x = _quaternion->x;
			HX_STACK_LINE(57)
			if ((this->_construct)){
				HX_STACK_LINE(57)
				this->x;
			}
			else{
				HX_STACK_LINE(57)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(57)
					Dynamic();
				}
				else{
					HX_STACK_LINE(57)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(57)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(57)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(57)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(57)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(57)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(57)
					Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(57)
					Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(57)
					Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(57)
					if (((order == (int)0))){
						HX_STACK_LINE(57)
						_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",57,0x23671680)
								{
									HX_STACK_LINE(57)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(57)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(57)
						_y = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(57)
						_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(57)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",57,0x23671680)
									{
										HX_STACK_LINE(57)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(57)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(57)
							_x = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(57)
							_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(57)
							_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(57)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",57,0x23671680)
										{
											HX_STACK_LINE(57)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(57)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(57)
								_x = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(57)
								_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(57)
								_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(57)
								if (((order == (int)3))){
									HX_STACK_LINE(57)
									_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",57,0x23671680)
											{
												HX_STACK_LINE(57)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(57)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(57)
									_y = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(57)
									_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(57)
									if (((order == (int)4))){
										HX_STACK_LINE(57)
										_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(57)
										_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",57,0x23671680)
												{
													HX_STACK_LINE(57)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(57)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(57)
										_z = ::Math_obj::asin(_Function_10_1::Block(this));
									}
									else{
										HX_STACK_LINE(57)
										if (((order == (int)5))){
											HX_STACK_LINE(57)
											_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(57)
											_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",57,0x23671680)
													{
														HX_STACK_LINE(57)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(57)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(57)
											_z = ::Math_obj::asin(_Function_11_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(57)
					{
						HX_STACK_LINE(57)
						Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(57)
						Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(57)
						Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(57)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(57)
						_this->ignore_listeners = true;
						HX_STACK_LINE(57)
						{
							HX_STACK_LINE(57)
							_this->x = _x1;
							HX_STACK_LINE(57)
							if ((_this->_construct)){
								HX_STACK_LINE(57)
								_this->x;
							}
							else{
								HX_STACK_LINE(57)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(57)
									_this->listen_x(_x1);
								}
								HX_STACK_LINE(57)
								_this->x;
							}
						}
						HX_STACK_LINE(57)
						{
							HX_STACK_LINE(57)
							_this->y = _y1;
							HX_STACK_LINE(57)
							if ((_this->_construct)){
								HX_STACK_LINE(57)
								_this->y;
							}
							else{
								HX_STACK_LINE(57)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(57)
									_this->listen_y(_y1);
								}
								HX_STACK_LINE(57)
								_this->y;
							}
						}
						HX_STACK_LINE(57)
						{
							HX_STACK_LINE(57)
							_this->z = _z1;
							HX_STACK_LINE(57)
							if ((_this->_construct)){
								HX_STACK_LINE(57)
								_this->z;
							}
							else{
								HX_STACK_LINE(57)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(57)
									_this->listen_z(_z1);
								}
								HX_STACK_LINE(57)
								_this->z;
							}
						}
						HX_STACK_LINE(57)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(57)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(57)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(57)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(57)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(57)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(57)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(57)
						_this;
					}
					HX_STACK_LINE(57)
					_this;
				}
				HX_STACK_LINE(57)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(57)
					this->listen_x(this->x);
				}
				HX_STACK_LINE(57)
				this->x;
			}
		}
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			this->y = _quaternion->y;
			HX_STACK_LINE(57)
			if ((this->_construct)){
				HX_STACK_LINE(57)
				this->y;
			}
			else{
				HX_STACK_LINE(57)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(57)
					Dynamic();
				}
				else{
					HX_STACK_LINE(57)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(57)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(57)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(57)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(57)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(57)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(57)
					Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(57)
					Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(57)
					Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(57)
					if (((order == (int)0))){
						HX_STACK_LINE(57)
						_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",57,0x23671680)
								{
									HX_STACK_LINE(57)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(57)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(57)
						_y = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(57)
						_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(57)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",57,0x23671680)
									{
										HX_STACK_LINE(57)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(57)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(57)
							_x = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(57)
							_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(57)
							_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(57)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",57,0x23671680)
										{
											HX_STACK_LINE(57)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(57)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(57)
								_x = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(57)
								_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(57)
								_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(57)
								if (((order == (int)3))){
									HX_STACK_LINE(57)
									_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",57,0x23671680)
											{
												HX_STACK_LINE(57)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(57)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(57)
									_y = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(57)
									_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(57)
									if (((order == (int)4))){
										HX_STACK_LINE(57)
										_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(57)
										_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",57,0x23671680)
												{
													HX_STACK_LINE(57)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(57)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(57)
										_z = ::Math_obj::asin(_Function_10_1::Block(this));
									}
									else{
										HX_STACK_LINE(57)
										if (((order == (int)5))){
											HX_STACK_LINE(57)
											_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(57)
											_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",57,0x23671680)
													{
														HX_STACK_LINE(57)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(57)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(57)
											_z = ::Math_obj::asin(_Function_11_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(57)
					{
						HX_STACK_LINE(57)
						Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(57)
						Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(57)
						Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(57)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(57)
						_this->ignore_listeners = true;
						HX_STACK_LINE(57)
						{
							HX_STACK_LINE(57)
							_this->x = _x1;
							HX_STACK_LINE(57)
							if ((_this->_construct)){
								HX_STACK_LINE(57)
								_this->x;
							}
							else{
								HX_STACK_LINE(57)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(57)
									_this->listen_x(_x1);
								}
								HX_STACK_LINE(57)
								_this->x;
							}
						}
						HX_STACK_LINE(57)
						{
							HX_STACK_LINE(57)
							_this->y = _y1;
							HX_STACK_LINE(57)
							if ((_this->_construct)){
								HX_STACK_LINE(57)
								_this->y;
							}
							else{
								HX_STACK_LINE(57)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(57)
									_this->listen_y(_y1);
								}
								HX_STACK_LINE(57)
								_this->y;
							}
						}
						HX_STACK_LINE(57)
						{
							HX_STACK_LINE(57)
							_this->z = _z1;
							HX_STACK_LINE(57)
							if ((_this->_construct)){
								HX_STACK_LINE(57)
								_this->z;
							}
							else{
								HX_STACK_LINE(57)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(57)
									_this->listen_z(_z1);
								}
								HX_STACK_LINE(57)
								_this->z;
							}
						}
						HX_STACK_LINE(57)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(57)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(57)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(57)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(57)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(57)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(57)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(57)
						_this;
					}
					HX_STACK_LINE(57)
					_this;
				}
				HX_STACK_LINE(57)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(57)
					this->listen_y(this->y);
				}
				HX_STACK_LINE(57)
				this->y;
			}
		}
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			this->z = _quaternion->z;
			HX_STACK_LINE(57)
			if ((this->_construct)){
				HX_STACK_LINE(57)
				this->z;
			}
			else{
				HX_STACK_LINE(57)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(57)
					Dynamic();
				}
				else{
					HX_STACK_LINE(57)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(57)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(57)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(57)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(57)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(57)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(57)
					Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(57)
					Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(57)
					Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(57)
					if (((order == (int)0))){
						HX_STACK_LINE(57)
						_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",57,0x23671680)
								{
									HX_STACK_LINE(57)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(57)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(57)
						_y = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(57)
						_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(57)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",57,0x23671680)
									{
										HX_STACK_LINE(57)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(57)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(57)
							_x = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(57)
							_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(57)
							_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(57)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",57,0x23671680)
										{
											HX_STACK_LINE(57)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(57)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(57)
								_x = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(57)
								_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(57)
								_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(57)
								if (((order == (int)3))){
									HX_STACK_LINE(57)
									_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",57,0x23671680)
											{
												HX_STACK_LINE(57)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(57)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(57)
									_y = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(57)
									_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(57)
									if (((order == (int)4))){
										HX_STACK_LINE(57)
										_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(57)
										_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",57,0x23671680)
												{
													HX_STACK_LINE(57)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(57)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(57)
										_z = ::Math_obj::asin(_Function_10_1::Block(this));
									}
									else{
										HX_STACK_LINE(57)
										if (((order == (int)5))){
											HX_STACK_LINE(57)
											_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(57)
											_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",57,0x23671680)
													{
														HX_STACK_LINE(57)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(57)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(57)
											_z = ::Math_obj::asin(_Function_11_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(57)
					{
						HX_STACK_LINE(57)
						Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(57)
						Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(57)
						Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(57)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(57)
						_this->ignore_listeners = true;
						HX_STACK_LINE(57)
						{
							HX_STACK_LINE(57)
							_this->x = _x1;
							HX_STACK_LINE(57)
							if ((_this->_construct)){
								HX_STACK_LINE(57)
								_this->x;
							}
							else{
								HX_STACK_LINE(57)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(57)
									_this->listen_x(_x1);
								}
								HX_STACK_LINE(57)
								_this->x;
							}
						}
						HX_STACK_LINE(57)
						{
							HX_STACK_LINE(57)
							_this->y = _y1;
							HX_STACK_LINE(57)
							if ((_this->_construct)){
								HX_STACK_LINE(57)
								_this->y;
							}
							else{
								HX_STACK_LINE(57)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(57)
									_this->listen_y(_y1);
								}
								HX_STACK_LINE(57)
								_this->y;
							}
						}
						HX_STACK_LINE(57)
						{
							HX_STACK_LINE(57)
							_this->z = _z1;
							HX_STACK_LINE(57)
							if ((_this->_construct)){
								HX_STACK_LINE(57)
								_this->z;
							}
							else{
								HX_STACK_LINE(57)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(57)
									_this->listen_z(_z1);
								}
								HX_STACK_LINE(57)
								_this->z;
							}
						}
						HX_STACK_LINE(57)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(57)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(57)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(57)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(57)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(57)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(57)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(57)
						_this;
					}
					HX_STACK_LINE(57)
					_this;
				}
				HX_STACK_LINE(57)
				if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(57)
					this->listen_z(this->z);
				}
				HX_STACK_LINE(57)
				this->z;
			}
		}
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			this->w = _quaternion->w;
			HX_STACK_LINE(57)
			if ((this->_construct)){
				HX_STACK_LINE(57)
				this->w;
			}
			else{
				HX_STACK_LINE(57)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(57)
					Dynamic();
				}
				else{
					HX_STACK_LINE(57)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(57)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(57)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(57)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(57)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(57)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(57)
					Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(57)
					Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(57)
					Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(57)
					if (((order == (int)0))){
						HX_STACK_LINE(57)
						_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",57,0x23671680)
								{
									HX_STACK_LINE(57)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(57)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(57)
						_y = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(57)
						_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(57)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",57,0x23671680)
									{
										HX_STACK_LINE(57)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(57)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(57)
							_x = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(57)
							_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(57)
							_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(57)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",57,0x23671680)
										{
											HX_STACK_LINE(57)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(57)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(57)
								_x = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(57)
								_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(57)
								_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(57)
								if (((order == (int)3))){
									HX_STACK_LINE(57)
									_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",57,0x23671680)
											{
												HX_STACK_LINE(57)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(57)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(57)
									_y = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(57)
									_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(57)
									if (((order == (int)4))){
										HX_STACK_LINE(57)
										_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(57)
										_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",57,0x23671680)
												{
													HX_STACK_LINE(57)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(57)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(57)
										_z = ::Math_obj::asin(_Function_10_1::Block(this));
									}
									else{
										HX_STACK_LINE(57)
										if (((order == (int)5))){
											HX_STACK_LINE(57)
											_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(57)
											_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",57,0x23671680)
													{
														HX_STACK_LINE(57)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(57)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(57)
											_z = ::Math_obj::asin(_Function_11_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(57)
					{
						HX_STACK_LINE(57)
						Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(57)
						Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(57)
						Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(57)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(57)
						_this->ignore_listeners = true;
						HX_STACK_LINE(57)
						{
							HX_STACK_LINE(57)
							_this->x = _x1;
							HX_STACK_LINE(57)
							if ((_this->_construct)){
								HX_STACK_LINE(57)
								_this->x;
							}
							else{
								HX_STACK_LINE(57)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(57)
									_this->listen_x(_x1);
								}
								HX_STACK_LINE(57)
								_this->x;
							}
						}
						HX_STACK_LINE(57)
						{
							HX_STACK_LINE(57)
							_this->y = _y1;
							HX_STACK_LINE(57)
							if ((_this->_construct)){
								HX_STACK_LINE(57)
								_this->y;
							}
							else{
								HX_STACK_LINE(57)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(57)
									_this->listen_y(_y1);
								}
								HX_STACK_LINE(57)
								_this->y;
							}
						}
						HX_STACK_LINE(57)
						{
							HX_STACK_LINE(57)
							_this->z = _z1;
							HX_STACK_LINE(57)
							if ((_this->_construct)){
								HX_STACK_LINE(57)
								_this->z;
							}
							else{
								HX_STACK_LINE(57)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(57)
									_this->listen_z(_z1);
								}
								HX_STACK_LINE(57)
								_this->z;
							}
						}
						HX_STACK_LINE(57)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(57)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(57)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(57)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(57)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(57)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(57)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(57)
						_this;
					}
					HX_STACK_LINE(57)
					_this;
				}
				HX_STACK_LINE(57)
				if (((bool((this->listen_w_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(57)
					this->listen_w(this->w);
				}
				HX_STACK_LINE(57)
				this->w;
			}
		}
		HX_STACK_LINE(57)
		this->ignore_euler = false;
		HX_STACK_LINE(57)
		if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
			HX_STACK_LINE(57)
			Dynamic();
		}
		else{
			HX_STACK_LINE(57)
			::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(57)
			int order = (int)0;		HX_STACK_VAR(order,"order");
			HX_STACK_LINE(57)
			Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
			HX_STACK_LINE(57)
			Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
			HX_STACK_LINE(57)
			Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
			HX_STACK_LINE(57)
			Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
			HX_STACK_LINE(57)
			Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(57)
			Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(57)
			Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(57)
			if (((order == (int)0))){
				HX_STACK_LINE(57)
				_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
				struct _Function_4_1{
					inline static Float Block( ::phoenix::Quaternion_obj *__this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",57,0x23671680)
						{
							HX_STACK_LINE(57)
							Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(57)
							return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
						}
						return null();
					}
				};
				HX_STACK_LINE(57)
				_y = ::Math_obj::asin(_Function_4_1::Block(this));
				HX_STACK_LINE(57)
				_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
			}
			else{
				HX_STACK_LINE(57)
				if (((order == (int)1))){
					struct _Function_5_1{
						inline static Float Block( ::phoenix::Quaternion_obj *__this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",57,0x23671680)
							{
								HX_STACK_LINE(57)
								Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(57)
								return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(57)
					_x = ::Math_obj::asin(_Function_5_1::Block(this));
					HX_STACK_LINE(57)
					_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
					HX_STACK_LINE(57)
					_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
				}
				else{
					HX_STACK_LINE(57)
					if (((order == (int)2))){
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",57,0x23671680)
								{
									HX_STACK_LINE(57)
									Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(57)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(57)
						_x = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(57)
						_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
						HX_STACK_LINE(57)
						_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
					}
					else{
						HX_STACK_LINE(57)
						if (((order == (int)3))){
							HX_STACK_LINE(57)
							_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",57,0x23671680)
									{
										HX_STACK_LINE(57)
										Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(57)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(57)
							_y = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(57)
							_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
						}
						else{
							HX_STACK_LINE(57)
							if (((order == (int)4))){
								HX_STACK_LINE(57)
								_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
								HX_STACK_LINE(57)
								_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",57,0x23671680)
										{
											HX_STACK_LINE(57)
											Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(57)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(57)
								_z = ::Math_obj::asin(_Function_8_1::Block(this));
							}
							else{
								HX_STACK_LINE(57)
								if (((order == (int)5))){
									HX_STACK_LINE(57)
									_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
									HX_STACK_LINE(57)
									_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",57,0x23671680)
											{
												HX_STACK_LINE(57)
												Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(57)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(57)
									_z = ::Math_obj::asin(_Function_9_1::Block(this));
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(57)
			{
				HX_STACK_LINE(57)
				Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
				HX_STACK_LINE(57)
				Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
				HX_STACK_LINE(57)
				Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
				HX_STACK_LINE(57)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(57)
				_this->ignore_listeners = true;
				HX_STACK_LINE(57)
				{
					HX_STACK_LINE(57)
					_this->x = _x1;
					HX_STACK_LINE(57)
					if ((_this->_construct)){
						HX_STACK_LINE(57)
						_this->x;
					}
					else{
						HX_STACK_LINE(57)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(57)
							_this->listen_x(_x1);
						}
						HX_STACK_LINE(57)
						_this->x;
					}
				}
				HX_STACK_LINE(57)
				{
					HX_STACK_LINE(57)
					_this->y = _y1;
					HX_STACK_LINE(57)
					if ((_this->_construct)){
						HX_STACK_LINE(57)
						_this->y;
					}
					else{
						HX_STACK_LINE(57)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(57)
							_this->listen_y(_y1);
						}
						HX_STACK_LINE(57)
						_this->y;
					}
				}
				HX_STACK_LINE(57)
				{
					HX_STACK_LINE(57)
					_this->z = _z1;
					HX_STACK_LINE(57)
					if ((_this->_construct)){
						HX_STACK_LINE(57)
						_this->z;
					}
					else{
						HX_STACK_LINE(57)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(57)
							_this->listen_z(_z1);
						}
						HX_STACK_LINE(57)
						_this->z;
					}
				}
				HX_STACK_LINE(57)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(57)
				if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(57)
					_this->listen_x(_this->x);
				}
				HX_STACK_LINE(57)
				if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(57)
					_this->listen_y(_this->y);
				}
				HX_STACK_LINE(57)
				if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(57)
					_this->listen_z(_this->z);
				}
				HX_STACK_LINE(57)
				_this;
			}
			HX_STACK_LINE(57)
			_this;
		}
		HX_STACK_LINE(57)
		if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(57)
			this->listen_x(this->x);
		}
		HX_STACK_LINE(57)
		if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(57)
			this->listen_y(this->y);
		}
		HX_STACK_LINE(57)
		if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(57)
			this->listen_z(this->z);
		}
		HX_STACK_LINE(57)
		if (((bool((this->listen_w_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(57)
			this->listen_w(this->w);
		}
	}
	HX_STACK_LINE(62)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,copy,return )

Float Quaternion_obj::dot( ::phoenix::Quaternion _other){
	HX_STACK_FRAME("phoenix.Quaternion","dot",0x41cde958,"phoenix.Quaternion.dot","phoenix/Quaternion.hx",67,0x23671680)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_other,"_other")
	HX_STACK_LINE(67)
	return ((((this->x * _other->x) + (this->y * _other->y)) + (this->z * _other->z)) + (this->w * _other->w));
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,dot,return )

::phoenix::Quaternion Quaternion_obj::setFromEuler( ::phoenix::Vector _euler,hx::Null< int >  __o__order){
int _order = __o__order.Default(0);
	HX_STACK_FRAME("phoenix.Quaternion","setFromEuler",0x1a4a0aee,"phoenix.Quaternion.setFromEuler","phoenix/Quaternion.hx",71,0x23671680)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_euler,"_euler")
	HX_STACK_ARG(_order,"_order")
{
		HX_STACK_LINE(77)
		Float _x = this->x;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(78)
		Float _y = this->y;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(79)
		Float _z = this->z;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(80)
		Float _w = this->w;		HX_STACK_VAR(_w,"_w");
		HX_STACK_LINE(82)
		Float c1 = ::Math_obj::cos((Float(_euler->x) / Float((int)2)));		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(83)
		Float c2 = ::Math_obj::cos((Float(_euler->y) / Float((int)2)));		HX_STACK_VAR(c2,"c2");
		HX_STACK_LINE(84)
		Float c3 = ::Math_obj::cos((Float(_euler->z) / Float((int)2)));		HX_STACK_VAR(c3,"c3");
		HX_STACK_LINE(86)
		Float s1 = ::Math_obj::sin((Float(_euler->x) / Float((int)2)));		HX_STACK_VAR(s1,"s1");
		HX_STACK_LINE(87)
		Float s2 = ::Math_obj::sin((Float(_euler->y) / Float((int)2)));		HX_STACK_VAR(s2,"s2");
		HX_STACK_LINE(88)
		Float s3 = ::Math_obj::sin((Float(_euler->z) / Float((int)2)));		HX_STACK_VAR(s3,"s3");
		HX_STACK_LINE(90)
		if (((_order == (int)0))){
			HX_STACK_LINE(92)
			_x = (((s1 * c2) * c3) + ((c1 * s2) * s3));
			HX_STACK_LINE(93)
			_y = (((c1 * s2) * c3) - ((s1 * c2) * s3));
			HX_STACK_LINE(94)
			_z = (((c1 * c2) * s3) + ((s1 * s2) * c3));
			HX_STACK_LINE(95)
			_w = (((c1 * c2) * c3) - ((s1 * s2) * s3));
		}
		else{
			HX_STACK_LINE(97)
			if (((_order == (int)1))){
				HX_STACK_LINE(99)
				_x = (((s1 * c2) * c3) + ((c1 * s2) * s3));
				HX_STACK_LINE(100)
				_y = (((c1 * s2) * c3) - ((s1 * c2) * s3));
				HX_STACK_LINE(101)
				_z = (((c1 * c2) * s3) - ((s1 * s2) * c3));
				HX_STACK_LINE(102)
				_w = (((c1 * c2) * c3) + ((s1 * s2) * s3));
			}
			else{
				HX_STACK_LINE(104)
				if (((_order == (int)2))){
					HX_STACK_LINE(106)
					_x = (((s1 * c2) * c3) - ((c1 * s2) * s3));
					HX_STACK_LINE(107)
					_y = (((c1 * s2) * c3) + ((s1 * c2) * s3));
					HX_STACK_LINE(108)
					_z = (((c1 * c2) * s3) + ((s1 * s2) * c3));
					HX_STACK_LINE(109)
					_w = (((c1 * c2) * c3) - ((s1 * s2) * s3));
				}
				else{
					HX_STACK_LINE(111)
					if (((_order == (int)3))){
						HX_STACK_LINE(113)
						_x = (((s1 * c2) * c3) - ((c1 * s2) * s3));
						HX_STACK_LINE(114)
						_y = (((c1 * s2) * c3) + ((s1 * c2) * s3));
						HX_STACK_LINE(115)
						_z = (((c1 * c2) * s3) - ((s1 * s2) * c3));
						HX_STACK_LINE(116)
						_w = (((c1 * c2) * c3) + ((s1 * s2) * s3));
					}
					else{
						HX_STACK_LINE(118)
						if (((_order == (int)4))){
							HX_STACK_LINE(120)
							_x = (((s1 * c2) * c3) + ((c1 * s2) * s3));
							HX_STACK_LINE(121)
							_y = (((c1 * s2) * c3) + ((s1 * c2) * s3));
							HX_STACK_LINE(122)
							_z = (((c1 * c2) * s3) - ((s1 * s2) * c3));
							HX_STACK_LINE(123)
							_w = (((c1 * c2) * c3) - ((s1 * s2) * s3));
						}
						else{
							HX_STACK_LINE(125)
							if (((_order == (int)5))){
								HX_STACK_LINE(127)
								_x = (((s1 * c2) * c3) - ((c1 * s2) * s3));
								HX_STACK_LINE(128)
								_y = (((c1 * s2) * c3) - ((s1 * c2) * s3));
								HX_STACK_LINE(129)
								_z = (((c1 * c2) * s3) + ((s1 * s2) * c3));
								HX_STACK_LINE(130)
								_w = (((c1 * c2) * c3) + ((s1 * s2) * s3));
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			this->ignore_euler = true;
			HX_STACK_LINE(134)
			{
				HX_STACK_LINE(134)
				this->x = _x;
				HX_STACK_LINE(134)
				if ((this->_construct)){
					HX_STACK_LINE(134)
					this->x;
				}
				else{
					HX_STACK_LINE(134)
					if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
						HX_STACK_LINE(134)
						Dynamic();
					}
					else{
						HX_STACK_LINE(134)
						::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(134)
						int order = (int)0;		HX_STACK_VAR(order,"order");
						HX_STACK_LINE(134)
						Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
						HX_STACK_LINE(134)
						Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
						HX_STACK_LINE(134)
						Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
						HX_STACK_LINE(134)
						Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
						HX_STACK_LINE(134)
						Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(134)
						Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(134)
						Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(134)
						if (((order == (int)0))){
							HX_STACK_LINE(134)
							_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
							struct _Function_6_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",134,0x23671680)
									{
										HX_STACK_LINE(134)
										Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(134)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(134)
							_y1 = ::Math_obj::asin(_Function_6_1::Block(this));
							HX_STACK_LINE(134)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
						}
						else{
							HX_STACK_LINE(134)
							if (((order == (int)1))){
								struct _Function_7_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",134,0x23671680)
										{
											HX_STACK_LINE(134)
											Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(134)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(134)
								_x1 = ::Math_obj::asin(_Function_7_1::Block(this));
								HX_STACK_LINE(134)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(134)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(134)
								if (((order == (int)2))){
									struct _Function_8_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",134,0x23671680)
											{
												HX_STACK_LINE(134)
												Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(134)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(134)
									_x1 = ::Math_obj::asin(_Function_8_1::Block(this));
									HX_STACK_LINE(134)
									_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
									HX_STACK_LINE(134)
									_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
								}
								else{
									HX_STACK_LINE(134)
									if (((order == (int)3))){
										HX_STACK_LINE(134)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
										struct _Function_9_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",134,0x23671680)
												{
													HX_STACK_LINE(134)
													Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(134)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(134)
										_y1 = ::Math_obj::asin(_Function_9_1::Block(this));
										HX_STACK_LINE(134)
										_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
									}
									else{
										HX_STACK_LINE(134)
										if (((order == (int)4))){
											HX_STACK_LINE(134)
											_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(134)
											_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_10_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",134,0x23671680)
													{
														HX_STACK_LINE(134)
														Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(134)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(134)
											_z1 = ::Math_obj::asin(_Function_10_1::Block(this));
										}
										else{
											HX_STACK_LINE(134)
											if (((order == (int)5))){
												HX_STACK_LINE(134)
												_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
												HX_STACK_LINE(134)
												_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
												struct _Function_11_1{
													inline static Float Block( ::phoenix::Quaternion_obj *__this){
														HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",134,0x23671680)
														{
															HX_STACK_LINE(134)
															Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
															HX_STACK_LINE(134)
															return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
														}
														return null();
													}
												};
												HX_STACK_LINE(134)
												_z1 = ::Math_obj::asin(_Function_11_1::Block(this));
											}
										}
									}
								}
							}
						}
						HX_STACK_LINE(134)
						{
							HX_STACK_LINE(134)
							Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
							HX_STACK_LINE(134)
							Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
							HX_STACK_LINE(134)
							Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
							HX_STACK_LINE(134)
							bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
							HX_STACK_LINE(134)
							_this->ignore_listeners = true;
							HX_STACK_LINE(134)
							{
								HX_STACK_LINE(134)
								_this->x = _x2;
								HX_STACK_LINE(134)
								if ((_this->_construct)){
									HX_STACK_LINE(134)
									_this->x;
								}
								else{
									HX_STACK_LINE(134)
									if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(134)
										_this->listen_x(_x2);
									}
									HX_STACK_LINE(134)
									_this->x;
								}
							}
							HX_STACK_LINE(134)
							{
								HX_STACK_LINE(134)
								_this->y = _y2;
								HX_STACK_LINE(134)
								if ((_this->_construct)){
									HX_STACK_LINE(134)
									_this->y;
								}
								else{
									HX_STACK_LINE(134)
									if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(134)
										_this->listen_y(_y2);
									}
									HX_STACK_LINE(134)
									_this->y;
								}
							}
							HX_STACK_LINE(134)
							{
								HX_STACK_LINE(134)
								_this->z = _z2;
								HX_STACK_LINE(134)
								if ((_this->_construct)){
									HX_STACK_LINE(134)
									_this->z;
								}
								else{
									HX_STACK_LINE(134)
									if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(134)
										_this->listen_z(_z2);
									}
									HX_STACK_LINE(134)
									_this->z;
								}
							}
							HX_STACK_LINE(134)
							_this->ignore_listeners = prev;
							HX_STACK_LINE(134)
							if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(134)
								_this->listen_x(_this->x);
							}
							HX_STACK_LINE(134)
							if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(134)
								_this->listen_y(_this->y);
							}
							HX_STACK_LINE(134)
							if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(134)
								_this->listen_z(_this->z);
							}
							HX_STACK_LINE(134)
							_this;
						}
						HX_STACK_LINE(134)
						_this;
					}
					HX_STACK_LINE(134)
					if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(134)
						this->listen_x(this->x);
					}
					HX_STACK_LINE(134)
					this->x;
				}
			}
			HX_STACK_LINE(134)
			{
				HX_STACK_LINE(134)
				this->y = _y;
				HX_STACK_LINE(134)
				if ((this->_construct)){
					HX_STACK_LINE(134)
					this->y;
				}
				else{
					HX_STACK_LINE(134)
					if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
						HX_STACK_LINE(134)
						Dynamic();
					}
					else{
						HX_STACK_LINE(134)
						::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(134)
						int order = (int)0;		HX_STACK_VAR(order,"order");
						HX_STACK_LINE(134)
						Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
						HX_STACK_LINE(134)
						Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
						HX_STACK_LINE(134)
						Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
						HX_STACK_LINE(134)
						Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
						HX_STACK_LINE(134)
						Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(134)
						Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(134)
						Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(134)
						if (((order == (int)0))){
							HX_STACK_LINE(134)
							_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
							struct _Function_6_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",134,0x23671680)
									{
										HX_STACK_LINE(134)
										Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(134)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(134)
							_y1 = ::Math_obj::asin(_Function_6_1::Block(this));
							HX_STACK_LINE(134)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
						}
						else{
							HX_STACK_LINE(134)
							if (((order == (int)1))){
								struct _Function_7_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",134,0x23671680)
										{
											HX_STACK_LINE(134)
											Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(134)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(134)
								_x1 = ::Math_obj::asin(_Function_7_1::Block(this));
								HX_STACK_LINE(134)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(134)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(134)
								if (((order == (int)2))){
									struct _Function_8_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",134,0x23671680)
											{
												HX_STACK_LINE(134)
												Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(134)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(134)
									_x1 = ::Math_obj::asin(_Function_8_1::Block(this));
									HX_STACK_LINE(134)
									_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
									HX_STACK_LINE(134)
									_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
								}
								else{
									HX_STACK_LINE(134)
									if (((order == (int)3))){
										HX_STACK_LINE(134)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
										struct _Function_9_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",134,0x23671680)
												{
													HX_STACK_LINE(134)
													Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(134)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(134)
										_y1 = ::Math_obj::asin(_Function_9_1::Block(this));
										HX_STACK_LINE(134)
										_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
									}
									else{
										HX_STACK_LINE(134)
										if (((order == (int)4))){
											HX_STACK_LINE(134)
											_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(134)
											_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_10_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",134,0x23671680)
													{
														HX_STACK_LINE(134)
														Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(134)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(134)
											_z1 = ::Math_obj::asin(_Function_10_1::Block(this));
										}
										else{
											HX_STACK_LINE(134)
											if (((order == (int)5))){
												HX_STACK_LINE(134)
												_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
												HX_STACK_LINE(134)
												_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
												struct _Function_11_1{
													inline static Float Block( ::phoenix::Quaternion_obj *__this){
														HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",134,0x23671680)
														{
															HX_STACK_LINE(134)
															Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
															HX_STACK_LINE(134)
															return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
														}
														return null();
													}
												};
												HX_STACK_LINE(134)
												_z1 = ::Math_obj::asin(_Function_11_1::Block(this));
											}
										}
									}
								}
							}
						}
						HX_STACK_LINE(134)
						{
							HX_STACK_LINE(134)
							Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
							HX_STACK_LINE(134)
							Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
							HX_STACK_LINE(134)
							Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
							HX_STACK_LINE(134)
							bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
							HX_STACK_LINE(134)
							_this->ignore_listeners = true;
							HX_STACK_LINE(134)
							{
								HX_STACK_LINE(134)
								_this->x = _x2;
								HX_STACK_LINE(134)
								if ((_this->_construct)){
									HX_STACK_LINE(134)
									_this->x;
								}
								else{
									HX_STACK_LINE(134)
									if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(134)
										_this->listen_x(_x2);
									}
									HX_STACK_LINE(134)
									_this->x;
								}
							}
							HX_STACK_LINE(134)
							{
								HX_STACK_LINE(134)
								_this->y = _y2;
								HX_STACK_LINE(134)
								if ((_this->_construct)){
									HX_STACK_LINE(134)
									_this->y;
								}
								else{
									HX_STACK_LINE(134)
									if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(134)
										_this->listen_y(_y2);
									}
									HX_STACK_LINE(134)
									_this->y;
								}
							}
							HX_STACK_LINE(134)
							{
								HX_STACK_LINE(134)
								_this->z = _z2;
								HX_STACK_LINE(134)
								if ((_this->_construct)){
									HX_STACK_LINE(134)
									_this->z;
								}
								else{
									HX_STACK_LINE(134)
									if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(134)
										_this->listen_z(_z2);
									}
									HX_STACK_LINE(134)
									_this->z;
								}
							}
							HX_STACK_LINE(134)
							_this->ignore_listeners = prev;
							HX_STACK_LINE(134)
							if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(134)
								_this->listen_x(_this->x);
							}
							HX_STACK_LINE(134)
							if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(134)
								_this->listen_y(_this->y);
							}
							HX_STACK_LINE(134)
							if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(134)
								_this->listen_z(_this->z);
							}
							HX_STACK_LINE(134)
							_this;
						}
						HX_STACK_LINE(134)
						_this;
					}
					HX_STACK_LINE(134)
					if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(134)
						this->listen_y(this->y);
					}
					HX_STACK_LINE(134)
					this->y;
				}
			}
			HX_STACK_LINE(134)
			{
				HX_STACK_LINE(134)
				this->z = _z;
				HX_STACK_LINE(134)
				if ((this->_construct)){
					HX_STACK_LINE(134)
					this->z;
				}
				else{
					HX_STACK_LINE(134)
					if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
						HX_STACK_LINE(134)
						Dynamic();
					}
					else{
						HX_STACK_LINE(134)
						::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(134)
						int order = (int)0;		HX_STACK_VAR(order,"order");
						HX_STACK_LINE(134)
						Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
						HX_STACK_LINE(134)
						Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
						HX_STACK_LINE(134)
						Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
						HX_STACK_LINE(134)
						Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
						HX_STACK_LINE(134)
						Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(134)
						Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(134)
						Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(134)
						if (((order == (int)0))){
							HX_STACK_LINE(134)
							_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
							struct _Function_6_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",134,0x23671680)
									{
										HX_STACK_LINE(134)
										Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(134)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(134)
							_y1 = ::Math_obj::asin(_Function_6_1::Block(this));
							HX_STACK_LINE(134)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
						}
						else{
							HX_STACK_LINE(134)
							if (((order == (int)1))){
								struct _Function_7_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",134,0x23671680)
										{
											HX_STACK_LINE(134)
											Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(134)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(134)
								_x1 = ::Math_obj::asin(_Function_7_1::Block(this));
								HX_STACK_LINE(134)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(134)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(134)
								if (((order == (int)2))){
									struct _Function_8_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",134,0x23671680)
											{
												HX_STACK_LINE(134)
												Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(134)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(134)
									_x1 = ::Math_obj::asin(_Function_8_1::Block(this));
									HX_STACK_LINE(134)
									_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
									HX_STACK_LINE(134)
									_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
								}
								else{
									HX_STACK_LINE(134)
									if (((order == (int)3))){
										HX_STACK_LINE(134)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
										struct _Function_9_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",134,0x23671680)
												{
													HX_STACK_LINE(134)
													Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(134)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(134)
										_y1 = ::Math_obj::asin(_Function_9_1::Block(this));
										HX_STACK_LINE(134)
										_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
									}
									else{
										HX_STACK_LINE(134)
										if (((order == (int)4))){
											HX_STACK_LINE(134)
											_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(134)
											_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_10_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",134,0x23671680)
													{
														HX_STACK_LINE(134)
														Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(134)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(134)
											_z1 = ::Math_obj::asin(_Function_10_1::Block(this));
										}
										else{
											HX_STACK_LINE(134)
											if (((order == (int)5))){
												HX_STACK_LINE(134)
												_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
												HX_STACK_LINE(134)
												_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
												struct _Function_11_1{
													inline static Float Block( ::phoenix::Quaternion_obj *__this){
														HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",134,0x23671680)
														{
															HX_STACK_LINE(134)
															Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
															HX_STACK_LINE(134)
															return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
														}
														return null();
													}
												};
												HX_STACK_LINE(134)
												_z1 = ::Math_obj::asin(_Function_11_1::Block(this));
											}
										}
									}
								}
							}
						}
						HX_STACK_LINE(134)
						{
							HX_STACK_LINE(134)
							Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
							HX_STACK_LINE(134)
							Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
							HX_STACK_LINE(134)
							Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
							HX_STACK_LINE(134)
							bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
							HX_STACK_LINE(134)
							_this->ignore_listeners = true;
							HX_STACK_LINE(134)
							{
								HX_STACK_LINE(134)
								_this->x = _x2;
								HX_STACK_LINE(134)
								if ((_this->_construct)){
									HX_STACK_LINE(134)
									_this->x;
								}
								else{
									HX_STACK_LINE(134)
									if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(134)
										_this->listen_x(_x2);
									}
									HX_STACK_LINE(134)
									_this->x;
								}
							}
							HX_STACK_LINE(134)
							{
								HX_STACK_LINE(134)
								_this->y = _y2;
								HX_STACK_LINE(134)
								if ((_this->_construct)){
									HX_STACK_LINE(134)
									_this->y;
								}
								else{
									HX_STACK_LINE(134)
									if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(134)
										_this->listen_y(_y2);
									}
									HX_STACK_LINE(134)
									_this->y;
								}
							}
							HX_STACK_LINE(134)
							{
								HX_STACK_LINE(134)
								_this->z = _z2;
								HX_STACK_LINE(134)
								if ((_this->_construct)){
									HX_STACK_LINE(134)
									_this->z;
								}
								else{
									HX_STACK_LINE(134)
									if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(134)
										_this->listen_z(_z2);
									}
									HX_STACK_LINE(134)
									_this->z;
								}
							}
							HX_STACK_LINE(134)
							_this->ignore_listeners = prev;
							HX_STACK_LINE(134)
							if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(134)
								_this->listen_x(_this->x);
							}
							HX_STACK_LINE(134)
							if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(134)
								_this->listen_y(_this->y);
							}
							HX_STACK_LINE(134)
							if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(134)
								_this->listen_z(_this->z);
							}
							HX_STACK_LINE(134)
							_this;
						}
						HX_STACK_LINE(134)
						_this;
					}
					HX_STACK_LINE(134)
					if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(134)
						this->listen_z(this->z);
					}
					HX_STACK_LINE(134)
					this->z;
				}
			}
			HX_STACK_LINE(134)
			{
				HX_STACK_LINE(134)
				this->w = _w;
				HX_STACK_LINE(134)
				if ((this->_construct)){
					HX_STACK_LINE(134)
					this->w;
				}
				else{
					HX_STACK_LINE(134)
					if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
						HX_STACK_LINE(134)
						Dynamic();
					}
					else{
						HX_STACK_LINE(134)
						::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(134)
						int order = (int)0;		HX_STACK_VAR(order,"order");
						HX_STACK_LINE(134)
						Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
						HX_STACK_LINE(134)
						Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
						HX_STACK_LINE(134)
						Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
						HX_STACK_LINE(134)
						Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
						HX_STACK_LINE(134)
						Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(134)
						Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(134)
						Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(134)
						if (((order == (int)0))){
							HX_STACK_LINE(134)
							_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
							struct _Function_6_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",134,0x23671680)
									{
										HX_STACK_LINE(134)
										Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(134)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(134)
							_y1 = ::Math_obj::asin(_Function_6_1::Block(this));
							HX_STACK_LINE(134)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
						}
						else{
							HX_STACK_LINE(134)
							if (((order == (int)1))){
								struct _Function_7_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",134,0x23671680)
										{
											HX_STACK_LINE(134)
											Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(134)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(134)
								_x1 = ::Math_obj::asin(_Function_7_1::Block(this));
								HX_STACK_LINE(134)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(134)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(134)
								if (((order == (int)2))){
									struct _Function_8_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",134,0x23671680)
											{
												HX_STACK_LINE(134)
												Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(134)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(134)
									_x1 = ::Math_obj::asin(_Function_8_1::Block(this));
									HX_STACK_LINE(134)
									_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
									HX_STACK_LINE(134)
									_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
								}
								else{
									HX_STACK_LINE(134)
									if (((order == (int)3))){
										HX_STACK_LINE(134)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
										struct _Function_9_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",134,0x23671680)
												{
													HX_STACK_LINE(134)
													Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(134)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(134)
										_y1 = ::Math_obj::asin(_Function_9_1::Block(this));
										HX_STACK_LINE(134)
										_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
									}
									else{
										HX_STACK_LINE(134)
										if (((order == (int)4))){
											HX_STACK_LINE(134)
											_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(134)
											_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_10_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",134,0x23671680)
													{
														HX_STACK_LINE(134)
														Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(134)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(134)
											_z1 = ::Math_obj::asin(_Function_10_1::Block(this));
										}
										else{
											HX_STACK_LINE(134)
											if (((order == (int)5))){
												HX_STACK_LINE(134)
												_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
												HX_STACK_LINE(134)
												_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
												struct _Function_11_1{
													inline static Float Block( ::phoenix::Quaternion_obj *__this){
														HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",134,0x23671680)
														{
															HX_STACK_LINE(134)
															Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
															HX_STACK_LINE(134)
															return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
														}
														return null();
													}
												};
												HX_STACK_LINE(134)
												_z1 = ::Math_obj::asin(_Function_11_1::Block(this));
											}
										}
									}
								}
							}
						}
						HX_STACK_LINE(134)
						{
							HX_STACK_LINE(134)
							Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
							HX_STACK_LINE(134)
							Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
							HX_STACK_LINE(134)
							Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
							HX_STACK_LINE(134)
							bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
							HX_STACK_LINE(134)
							_this->ignore_listeners = true;
							HX_STACK_LINE(134)
							{
								HX_STACK_LINE(134)
								_this->x = _x2;
								HX_STACK_LINE(134)
								if ((_this->_construct)){
									HX_STACK_LINE(134)
									_this->x;
								}
								else{
									HX_STACK_LINE(134)
									if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(134)
										_this->listen_x(_x2);
									}
									HX_STACK_LINE(134)
									_this->x;
								}
							}
							HX_STACK_LINE(134)
							{
								HX_STACK_LINE(134)
								_this->y = _y2;
								HX_STACK_LINE(134)
								if ((_this->_construct)){
									HX_STACK_LINE(134)
									_this->y;
								}
								else{
									HX_STACK_LINE(134)
									if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(134)
										_this->listen_y(_y2);
									}
									HX_STACK_LINE(134)
									_this->y;
								}
							}
							HX_STACK_LINE(134)
							{
								HX_STACK_LINE(134)
								_this->z = _z2;
								HX_STACK_LINE(134)
								if ((_this->_construct)){
									HX_STACK_LINE(134)
									_this->z;
								}
								else{
									HX_STACK_LINE(134)
									if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(134)
										_this->listen_z(_z2);
									}
									HX_STACK_LINE(134)
									_this->z;
								}
							}
							HX_STACK_LINE(134)
							_this->ignore_listeners = prev;
							HX_STACK_LINE(134)
							if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(134)
								_this->listen_x(_this->x);
							}
							HX_STACK_LINE(134)
							if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(134)
								_this->listen_y(_this->y);
							}
							HX_STACK_LINE(134)
							if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(134)
								_this->listen_z(_this->z);
							}
							HX_STACK_LINE(134)
							_this;
						}
						HX_STACK_LINE(134)
						_this;
					}
					HX_STACK_LINE(134)
					if (((bool((this->listen_w_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(134)
						this->listen_w(this->w);
					}
					HX_STACK_LINE(134)
					this->w;
				}
			}
			HX_STACK_LINE(134)
			this->ignore_euler = false;
			HX_STACK_LINE(134)
			if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
				HX_STACK_LINE(134)
				Dynamic();
			}
			else{
				HX_STACK_LINE(134)
				::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(134)
				int order = (int)0;		HX_STACK_VAR(order,"order");
				HX_STACK_LINE(134)
				Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
				HX_STACK_LINE(134)
				Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
				HX_STACK_LINE(134)
				Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
				HX_STACK_LINE(134)
				Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
				HX_STACK_LINE(134)
				Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
				HX_STACK_LINE(134)
				Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
				HX_STACK_LINE(134)
				Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
				HX_STACK_LINE(134)
				if (((order == (int)0))){
					HX_STACK_LINE(134)
					_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
					struct _Function_4_1{
						inline static Float Block( ::phoenix::Quaternion_obj *__this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",134,0x23671680)
							{
								HX_STACK_LINE(134)
								Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(134)
								return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(134)
					_y1 = ::Math_obj::asin(_Function_4_1::Block(this));
					HX_STACK_LINE(134)
					_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
				}
				else{
					HX_STACK_LINE(134)
					if (((order == (int)1))){
						struct _Function_5_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",134,0x23671680)
								{
									HX_STACK_LINE(134)
									Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(134)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(134)
						_x1 = ::Math_obj::asin(_Function_5_1::Block(this));
						HX_STACK_LINE(134)
						_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
						HX_STACK_LINE(134)
						_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
					}
					else{
						HX_STACK_LINE(134)
						if (((order == (int)2))){
							struct _Function_6_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",134,0x23671680)
									{
										HX_STACK_LINE(134)
										Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(134)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(134)
							_x1 = ::Math_obj::asin(_Function_6_1::Block(this));
							HX_STACK_LINE(134)
							_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(134)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(134)
							if (((order == (int)3))){
								HX_STACK_LINE(134)
								_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
								struct _Function_7_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",134,0x23671680)
										{
											HX_STACK_LINE(134)
											Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(134)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(134)
								_y1 = ::Math_obj::asin(_Function_7_1::Block(this));
								HX_STACK_LINE(134)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
							}
							else{
								HX_STACK_LINE(134)
								if (((order == (int)4))){
									HX_STACK_LINE(134)
									_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
									HX_STACK_LINE(134)
									_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
									struct _Function_8_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",134,0x23671680)
											{
												HX_STACK_LINE(134)
												Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(134)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(134)
									_z1 = ::Math_obj::asin(_Function_8_1::Block(this));
								}
								else{
									HX_STACK_LINE(134)
									if (((order == (int)5))){
										HX_STACK_LINE(134)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(134)
										_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_9_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",134,0x23671680)
												{
													HX_STACK_LINE(134)
													Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(134)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(134)
										_z1 = ::Math_obj::asin(_Function_9_1::Block(this));
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(134)
				{
					HX_STACK_LINE(134)
					Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
					HX_STACK_LINE(134)
					Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
					HX_STACK_LINE(134)
					Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
					HX_STACK_LINE(134)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(134)
					_this->ignore_listeners = true;
					HX_STACK_LINE(134)
					{
						HX_STACK_LINE(134)
						_this->x = _x2;
						HX_STACK_LINE(134)
						if ((_this->_construct)){
							HX_STACK_LINE(134)
							_this->x;
						}
						else{
							HX_STACK_LINE(134)
							if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(134)
								_this->listen_x(_x2);
							}
							HX_STACK_LINE(134)
							_this->x;
						}
					}
					HX_STACK_LINE(134)
					{
						HX_STACK_LINE(134)
						_this->y = _y2;
						HX_STACK_LINE(134)
						if ((_this->_construct)){
							HX_STACK_LINE(134)
							_this->y;
						}
						else{
							HX_STACK_LINE(134)
							if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(134)
								_this->listen_y(_y2);
							}
							HX_STACK_LINE(134)
							_this->y;
						}
					}
					HX_STACK_LINE(134)
					{
						HX_STACK_LINE(134)
						_this->z = _z2;
						HX_STACK_LINE(134)
						if ((_this->_construct)){
							HX_STACK_LINE(134)
							_this->z;
						}
						else{
							HX_STACK_LINE(134)
							if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(134)
								_this->listen_z(_z2);
							}
							HX_STACK_LINE(134)
							_this->z;
						}
					}
					HX_STACK_LINE(134)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(134)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(134)
						_this->listen_x(_this->x);
					}
					HX_STACK_LINE(134)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(134)
						_this->listen_y(_this->y);
					}
					HX_STACK_LINE(134)
					if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(134)
						_this->listen_z(_this->z);
					}
					HX_STACK_LINE(134)
					_this;
				}
				HX_STACK_LINE(134)
				_this;
			}
			HX_STACK_LINE(134)
			if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(134)
				this->listen_x(this->x);
			}
			HX_STACK_LINE(134)
			if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(134)
				this->listen_y(this->y);
			}
			HX_STACK_LINE(134)
			if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(134)
				this->listen_z(this->z);
			}
			HX_STACK_LINE(134)
			if (((bool((this->listen_w_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(134)
				this->listen_w(this->w);
			}
		}
		HX_STACK_LINE(136)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,setFromEuler,return )

::phoenix::Quaternion Quaternion_obj::setFromAxisAngle( ::phoenix::Vector _axis,Float _angle){
	HX_STACK_FRAME("phoenix.Quaternion","setFromAxisAngle",0xa0e70777,"phoenix.Quaternion.setFromAxisAngle","phoenix/Quaternion.hx",141,0x23671680)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_axis,"_axis")
	HX_STACK_ARG(_angle,"_angle")
	HX_STACK_LINE(146)
	Float _halfAngle = (Float(_angle) / Float((int)2));		HX_STACK_VAR(_halfAngle,"_halfAngle");
	HX_STACK_LINE(147)
	Float _s = ::Math_obj::sin(_halfAngle);		HX_STACK_VAR(_s,"_s");
	HX_STACK_LINE(149)
	{
		HX_STACK_LINE(152)
		Float _w = ::Math_obj::cos(_halfAngle);		HX_STACK_VAR(_w,"_w");
		HX_STACK_LINE(149)
		this->ignore_euler = true;
		HX_STACK_LINE(149)
		{
			HX_STACK_LINE(149)
			this->x = (_axis->x * _s);
			HX_STACK_LINE(149)
			if ((this->_construct)){
				HX_STACK_LINE(149)
				this->x;
			}
			else{
				HX_STACK_LINE(149)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(149)
					Dynamic();
				}
				else{
					HX_STACK_LINE(149)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(149)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(149)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(149)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(149)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(149)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(149)
					Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(149)
					Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(149)
					Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(149)
					if (((order == (int)0))){
						HX_STACK_LINE(149)
						_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",149,0x23671680)
								{
									HX_STACK_LINE(149)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(149)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(149)
						_y = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(149)
						_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(149)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",149,0x23671680)
									{
										HX_STACK_LINE(149)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(149)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(149)
							_x = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(149)
							_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(149)
							_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(149)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",149,0x23671680)
										{
											HX_STACK_LINE(149)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(149)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(149)
								_x = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(149)
								_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(149)
								_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(149)
								if (((order == (int)3))){
									HX_STACK_LINE(149)
									_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",149,0x23671680)
											{
												HX_STACK_LINE(149)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(149)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(149)
									_y = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(149)
									_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(149)
									if (((order == (int)4))){
										HX_STACK_LINE(149)
										_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(149)
										_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",149,0x23671680)
												{
													HX_STACK_LINE(149)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(149)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(149)
										_z = ::Math_obj::asin(_Function_10_1::Block(this));
									}
									else{
										HX_STACK_LINE(149)
										if (((order == (int)5))){
											HX_STACK_LINE(149)
											_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(149)
											_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",149,0x23671680)
													{
														HX_STACK_LINE(149)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(149)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(149)
											_z = ::Math_obj::asin(_Function_11_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(149)
					{
						HX_STACK_LINE(149)
						Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(149)
						Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(149)
						Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(149)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(149)
						_this->ignore_listeners = true;
						HX_STACK_LINE(149)
						{
							HX_STACK_LINE(149)
							_this->x = _x1;
							HX_STACK_LINE(149)
							if ((_this->_construct)){
								HX_STACK_LINE(149)
								_this->x;
							}
							else{
								HX_STACK_LINE(149)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(149)
									_this->listen_x(_x1);
								}
								HX_STACK_LINE(149)
								_this->x;
							}
						}
						HX_STACK_LINE(149)
						{
							HX_STACK_LINE(149)
							_this->y = _y1;
							HX_STACK_LINE(149)
							if ((_this->_construct)){
								HX_STACK_LINE(149)
								_this->y;
							}
							else{
								HX_STACK_LINE(149)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(149)
									_this->listen_y(_y1);
								}
								HX_STACK_LINE(149)
								_this->y;
							}
						}
						HX_STACK_LINE(149)
						{
							HX_STACK_LINE(149)
							_this->z = _z1;
							HX_STACK_LINE(149)
							if ((_this->_construct)){
								HX_STACK_LINE(149)
								_this->z;
							}
							else{
								HX_STACK_LINE(149)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(149)
									_this->listen_z(_z1);
								}
								HX_STACK_LINE(149)
								_this->z;
							}
						}
						HX_STACK_LINE(149)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(149)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(149)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(149)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(149)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(149)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(149)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(149)
						_this;
					}
					HX_STACK_LINE(149)
					_this;
				}
				HX_STACK_LINE(149)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(149)
					this->listen_x(this->x);
				}
				HX_STACK_LINE(149)
				this->x;
			}
		}
		HX_STACK_LINE(149)
		{
			HX_STACK_LINE(149)
			this->y = (_axis->y * _s);
			HX_STACK_LINE(149)
			if ((this->_construct)){
				HX_STACK_LINE(149)
				this->y;
			}
			else{
				HX_STACK_LINE(149)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(149)
					Dynamic();
				}
				else{
					HX_STACK_LINE(149)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(149)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(149)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(149)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(149)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(149)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(149)
					Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(149)
					Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(149)
					Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(149)
					if (((order == (int)0))){
						HX_STACK_LINE(149)
						_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",149,0x23671680)
								{
									HX_STACK_LINE(149)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(149)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(149)
						_y = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(149)
						_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(149)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",149,0x23671680)
									{
										HX_STACK_LINE(149)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(149)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(149)
							_x = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(149)
							_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(149)
							_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(149)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",149,0x23671680)
										{
											HX_STACK_LINE(149)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(149)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(149)
								_x = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(149)
								_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(149)
								_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(149)
								if (((order == (int)3))){
									HX_STACK_LINE(149)
									_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",149,0x23671680)
											{
												HX_STACK_LINE(149)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(149)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(149)
									_y = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(149)
									_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(149)
									if (((order == (int)4))){
										HX_STACK_LINE(149)
										_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(149)
										_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",149,0x23671680)
												{
													HX_STACK_LINE(149)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(149)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(149)
										_z = ::Math_obj::asin(_Function_10_1::Block(this));
									}
									else{
										HX_STACK_LINE(149)
										if (((order == (int)5))){
											HX_STACK_LINE(149)
											_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(149)
											_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",149,0x23671680)
													{
														HX_STACK_LINE(149)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(149)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(149)
											_z = ::Math_obj::asin(_Function_11_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(149)
					{
						HX_STACK_LINE(149)
						Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(149)
						Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(149)
						Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(149)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(149)
						_this->ignore_listeners = true;
						HX_STACK_LINE(149)
						{
							HX_STACK_LINE(149)
							_this->x = _x1;
							HX_STACK_LINE(149)
							if ((_this->_construct)){
								HX_STACK_LINE(149)
								_this->x;
							}
							else{
								HX_STACK_LINE(149)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(149)
									_this->listen_x(_x1);
								}
								HX_STACK_LINE(149)
								_this->x;
							}
						}
						HX_STACK_LINE(149)
						{
							HX_STACK_LINE(149)
							_this->y = _y1;
							HX_STACK_LINE(149)
							if ((_this->_construct)){
								HX_STACK_LINE(149)
								_this->y;
							}
							else{
								HX_STACK_LINE(149)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(149)
									_this->listen_y(_y1);
								}
								HX_STACK_LINE(149)
								_this->y;
							}
						}
						HX_STACK_LINE(149)
						{
							HX_STACK_LINE(149)
							_this->z = _z1;
							HX_STACK_LINE(149)
							if ((_this->_construct)){
								HX_STACK_LINE(149)
								_this->z;
							}
							else{
								HX_STACK_LINE(149)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(149)
									_this->listen_z(_z1);
								}
								HX_STACK_LINE(149)
								_this->z;
							}
						}
						HX_STACK_LINE(149)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(149)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(149)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(149)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(149)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(149)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(149)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(149)
						_this;
					}
					HX_STACK_LINE(149)
					_this;
				}
				HX_STACK_LINE(149)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(149)
					this->listen_y(this->y);
				}
				HX_STACK_LINE(149)
				this->y;
			}
		}
		HX_STACK_LINE(149)
		{
			HX_STACK_LINE(149)
			this->z = (_axis->z * _s);
			HX_STACK_LINE(149)
			if ((this->_construct)){
				HX_STACK_LINE(149)
				this->z;
			}
			else{
				HX_STACK_LINE(149)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(149)
					Dynamic();
				}
				else{
					HX_STACK_LINE(149)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(149)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(149)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(149)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(149)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(149)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(149)
					Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(149)
					Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(149)
					Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(149)
					if (((order == (int)0))){
						HX_STACK_LINE(149)
						_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",149,0x23671680)
								{
									HX_STACK_LINE(149)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(149)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(149)
						_y = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(149)
						_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(149)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",149,0x23671680)
									{
										HX_STACK_LINE(149)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(149)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(149)
							_x = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(149)
							_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(149)
							_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(149)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",149,0x23671680)
										{
											HX_STACK_LINE(149)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(149)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(149)
								_x = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(149)
								_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(149)
								_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(149)
								if (((order == (int)3))){
									HX_STACK_LINE(149)
									_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",149,0x23671680)
											{
												HX_STACK_LINE(149)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(149)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(149)
									_y = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(149)
									_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(149)
									if (((order == (int)4))){
										HX_STACK_LINE(149)
										_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(149)
										_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",149,0x23671680)
												{
													HX_STACK_LINE(149)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(149)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(149)
										_z = ::Math_obj::asin(_Function_10_1::Block(this));
									}
									else{
										HX_STACK_LINE(149)
										if (((order == (int)5))){
											HX_STACK_LINE(149)
											_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(149)
											_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",149,0x23671680)
													{
														HX_STACK_LINE(149)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(149)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(149)
											_z = ::Math_obj::asin(_Function_11_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(149)
					{
						HX_STACK_LINE(149)
						Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(149)
						Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(149)
						Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(149)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(149)
						_this->ignore_listeners = true;
						HX_STACK_LINE(149)
						{
							HX_STACK_LINE(149)
							_this->x = _x1;
							HX_STACK_LINE(149)
							if ((_this->_construct)){
								HX_STACK_LINE(149)
								_this->x;
							}
							else{
								HX_STACK_LINE(149)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(149)
									_this->listen_x(_x1);
								}
								HX_STACK_LINE(149)
								_this->x;
							}
						}
						HX_STACK_LINE(149)
						{
							HX_STACK_LINE(149)
							_this->y = _y1;
							HX_STACK_LINE(149)
							if ((_this->_construct)){
								HX_STACK_LINE(149)
								_this->y;
							}
							else{
								HX_STACK_LINE(149)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(149)
									_this->listen_y(_y1);
								}
								HX_STACK_LINE(149)
								_this->y;
							}
						}
						HX_STACK_LINE(149)
						{
							HX_STACK_LINE(149)
							_this->z = _z1;
							HX_STACK_LINE(149)
							if ((_this->_construct)){
								HX_STACK_LINE(149)
								_this->z;
							}
							else{
								HX_STACK_LINE(149)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(149)
									_this->listen_z(_z1);
								}
								HX_STACK_LINE(149)
								_this->z;
							}
						}
						HX_STACK_LINE(149)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(149)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(149)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(149)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(149)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(149)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(149)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(149)
						_this;
					}
					HX_STACK_LINE(149)
					_this;
				}
				HX_STACK_LINE(149)
				if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(149)
					this->listen_z(this->z);
				}
				HX_STACK_LINE(149)
				this->z;
			}
		}
		HX_STACK_LINE(149)
		{
			HX_STACK_LINE(149)
			this->w = _w;
			HX_STACK_LINE(149)
			if ((this->_construct)){
				HX_STACK_LINE(149)
				this->w;
			}
			else{
				HX_STACK_LINE(149)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(149)
					Dynamic();
				}
				else{
					HX_STACK_LINE(149)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(149)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(149)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(149)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(149)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(149)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(149)
					Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(149)
					Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(149)
					Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(149)
					if (((order == (int)0))){
						HX_STACK_LINE(149)
						_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",149,0x23671680)
								{
									HX_STACK_LINE(149)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(149)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(149)
						_y = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(149)
						_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(149)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",149,0x23671680)
									{
										HX_STACK_LINE(149)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(149)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(149)
							_x = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(149)
							_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(149)
							_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(149)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",149,0x23671680)
										{
											HX_STACK_LINE(149)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(149)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(149)
								_x = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(149)
								_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(149)
								_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(149)
								if (((order == (int)3))){
									HX_STACK_LINE(149)
									_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",149,0x23671680)
											{
												HX_STACK_LINE(149)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(149)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(149)
									_y = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(149)
									_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(149)
									if (((order == (int)4))){
										HX_STACK_LINE(149)
										_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(149)
										_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",149,0x23671680)
												{
													HX_STACK_LINE(149)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(149)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(149)
										_z = ::Math_obj::asin(_Function_10_1::Block(this));
									}
									else{
										HX_STACK_LINE(149)
										if (((order == (int)5))){
											HX_STACK_LINE(149)
											_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(149)
											_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",149,0x23671680)
													{
														HX_STACK_LINE(149)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(149)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(149)
											_z = ::Math_obj::asin(_Function_11_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(149)
					{
						HX_STACK_LINE(149)
						Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(149)
						Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(149)
						Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(149)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(149)
						_this->ignore_listeners = true;
						HX_STACK_LINE(149)
						{
							HX_STACK_LINE(149)
							_this->x = _x1;
							HX_STACK_LINE(149)
							if ((_this->_construct)){
								HX_STACK_LINE(149)
								_this->x;
							}
							else{
								HX_STACK_LINE(149)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(149)
									_this->listen_x(_x1);
								}
								HX_STACK_LINE(149)
								_this->x;
							}
						}
						HX_STACK_LINE(149)
						{
							HX_STACK_LINE(149)
							_this->y = _y1;
							HX_STACK_LINE(149)
							if ((_this->_construct)){
								HX_STACK_LINE(149)
								_this->y;
							}
							else{
								HX_STACK_LINE(149)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(149)
									_this->listen_y(_y1);
								}
								HX_STACK_LINE(149)
								_this->y;
							}
						}
						HX_STACK_LINE(149)
						{
							HX_STACK_LINE(149)
							_this->z = _z1;
							HX_STACK_LINE(149)
							if ((_this->_construct)){
								HX_STACK_LINE(149)
								_this->z;
							}
							else{
								HX_STACK_LINE(149)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(149)
									_this->listen_z(_z1);
								}
								HX_STACK_LINE(149)
								_this->z;
							}
						}
						HX_STACK_LINE(149)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(149)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(149)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(149)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(149)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(149)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(149)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(149)
						_this;
					}
					HX_STACK_LINE(149)
					_this;
				}
				HX_STACK_LINE(149)
				if (((bool((this->listen_w_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(149)
					this->listen_w(this->w);
				}
				HX_STACK_LINE(149)
				this->w;
			}
		}
		HX_STACK_LINE(149)
		this->ignore_euler = false;
		HX_STACK_LINE(149)
		if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
			HX_STACK_LINE(149)
			Dynamic();
		}
		else{
			HX_STACK_LINE(149)
			::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(149)
			int order = (int)0;		HX_STACK_VAR(order,"order");
			HX_STACK_LINE(149)
			Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
			HX_STACK_LINE(149)
			Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
			HX_STACK_LINE(149)
			Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
			HX_STACK_LINE(149)
			Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
			HX_STACK_LINE(149)
			Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(149)
			Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(149)
			Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(149)
			if (((order == (int)0))){
				HX_STACK_LINE(149)
				_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
				struct _Function_4_1{
					inline static Float Block( ::phoenix::Quaternion_obj *__this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",149,0x23671680)
						{
							HX_STACK_LINE(149)
							Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(149)
							return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
						}
						return null();
					}
				};
				HX_STACK_LINE(149)
				_y = ::Math_obj::asin(_Function_4_1::Block(this));
				HX_STACK_LINE(149)
				_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
			}
			else{
				HX_STACK_LINE(149)
				if (((order == (int)1))){
					struct _Function_5_1{
						inline static Float Block( ::phoenix::Quaternion_obj *__this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",149,0x23671680)
							{
								HX_STACK_LINE(149)
								Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(149)
								return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(149)
					_x = ::Math_obj::asin(_Function_5_1::Block(this));
					HX_STACK_LINE(149)
					_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
					HX_STACK_LINE(149)
					_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
				}
				else{
					HX_STACK_LINE(149)
					if (((order == (int)2))){
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",149,0x23671680)
								{
									HX_STACK_LINE(149)
									Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(149)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(149)
						_x = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(149)
						_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
						HX_STACK_LINE(149)
						_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
					}
					else{
						HX_STACK_LINE(149)
						if (((order == (int)3))){
							HX_STACK_LINE(149)
							_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",149,0x23671680)
									{
										HX_STACK_LINE(149)
										Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(149)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(149)
							_y = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(149)
							_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
						}
						else{
							HX_STACK_LINE(149)
							if (((order == (int)4))){
								HX_STACK_LINE(149)
								_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
								HX_STACK_LINE(149)
								_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",149,0x23671680)
										{
											HX_STACK_LINE(149)
											Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(149)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(149)
								_z = ::Math_obj::asin(_Function_8_1::Block(this));
							}
							else{
								HX_STACK_LINE(149)
								if (((order == (int)5))){
									HX_STACK_LINE(149)
									_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
									HX_STACK_LINE(149)
									_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",149,0x23671680)
											{
												HX_STACK_LINE(149)
												Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(149)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(149)
									_z = ::Math_obj::asin(_Function_9_1::Block(this));
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(149)
			{
				HX_STACK_LINE(149)
				Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
				HX_STACK_LINE(149)
				Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
				HX_STACK_LINE(149)
				Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
				HX_STACK_LINE(149)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(149)
				_this->ignore_listeners = true;
				HX_STACK_LINE(149)
				{
					HX_STACK_LINE(149)
					_this->x = _x1;
					HX_STACK_LINE(149)
					if ((_this->_construct)){
						HX_STACK_LINE(149)
						_this->x;
					}
					else{
						HX_STACK_LINE(149)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(149)
							_this->listen_x(_x1);
						}
						HX_STACK_LINE(149)
						_this->x;
					}
				}
				HX_STACK_LINE(149)
				{
					HX_STACK_LINE(149)
					_this->y = _y1;
					HX_STACK_LINE(149)
					if ((_this->_construct)){
						HX_STACK_LINE(149)
						_this->y;
					}
					else{
						HX_STACK_LINE(149)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(149)
							_this->listen_y(_y1);
						}
						HX_STACK_LINE(149)
						_this->y;
					}
				}
				HX_STACK_LINE(149)
				{
					HX_STACK_LINE(149)
					_this->z = _z1;
					HX_STACK_LINE(149)
					if ((_this->_construct)){
						HX_STACK_LINE(149)
						_this->z;
					}
					else{
						HX_STACK_LINE(149)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(149)
							_this->listen_z(_z1);
						}
						HX_STACK_LINE(149)
						_this->z;
					}
				}
				HX_STACK_LINE(149)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(149)
				if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(149)
					_this->listen_x(_this->x);
				}
				HX_STACK_LINE(149)
				if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(149)
					_this->listen_y(_this->y);
				}
				HX_STACK_LINE(149)
				if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(149)
					_this->listen_z(_this->z);
				}
				HX_STACK_LINE(149)
				_this;
			}
			HX_STACK_LINE(149)
			_this;
		}
		HX_STACK_LINE(149)
		if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(149)
			this->listen_x(this->x);
		}
		HX_STACK_LINE(149)
		if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(149)
			this->listen_y(this->y);
		}
		HX_STACK_LINE(149)
		if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(149)
			this->listen_z(this->z);
		}
		HX_STACK_LINE(149)
		if (((bool((this->listen_w_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(149)
			this->listen_w(this->w);
		}
	}
	HX_STACK_LINE(154)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,setFromAxisAngle,return )

::phoenix::Quaternion Quaternion_obj::setFromRotationMatrix( ::phoenix::Matrix _m){
	HX_STACK_FRAME("phoenix.Quaternion","setFromRotationMatrix",0xe63a5ffa,"phoenix.Quaternion.setFromRotationMatrix","phoenix/Quaternion.hx",159,0x23671680)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_m,"_m")
	HX_STACK_LINE(164)
	Array< Float > te = _m->elements;		HX_STACK_VAR(te,"te");
	HX_STACK_LINE(166)
	Float m11 = te->__get((int)0);		HX_STACK_VAR(m11,"m11");
	HX_STACK_LINE(166)
	Float m12 = te->__get((int)4);		HX_STACK_VAR(m12,"m12");
	HX_STACK_LINE(166)
	Float m13 = te->__get((int)8);		HX_STACK_VAR(m13,"m13");
	HX_STACK_LINE(167)
	Float m21 = te->__get((int)1);		HX_STACK_VAR(m21,"m21");
	HX_STACK_LINE(167)
	Float m22 = te->__get((int)5);		HX_STACK_VAR(m22,"m22");
	HX_STACK_LINE(167)
	Float m23 = te->__get((int)9);		HX_STACK_VAR(m23,"m23");
	HX_STACK_LINE(168)
	Float m31 = te->__get((int)2);		HX_STACK_VAR(m31,"m31");
	HX_STACK_LINE(168)
	Float m32 = te->__get((int)6);		HX_STACK_VAR(m32,"m32");
	HX_STACK_LINE(168)
	Float m33 = te->__get((int)10);		HX_STACK_VAR(m33,"m33");
	HX_STACK_LINE(170)
	Float _x = this->x;		HX_STACK_VAR(_x,"_x");
	HX_STACK_LINE(171)
	Float _y = this->y;		HX_STACK_VAR(_y,"_y");
	HX_STACK_LINE(172)
	Float _z = this->z;		HX_STACK_VAR(_z,"_z");
	HX_STACK_LINE(173)
	Float _w = this->w;		HX_STACK_VAR(_w,"_w");
	HX_STACK_LINE(175)
	Float tr = ((m11 + m22) + m33);		HX_STACK_VAR(tr,"tr");
	HX_STACK_LINE(177)
	Float s;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(179)
	if (((tr > (int)0))){
		HX_STACK_LINE(181)
		s = (Float(0.5) / Float(::Math_obj::sqrt((tr + 1.0))));
		HX_STACK_LINE(183)
		_w = (Float(0.25) / Float(s));
		HX_STACK_LINE(184)
		_x = (((m32 - m23)) * s);
		HX_STACK_LINE(185)
		_y = (((m13 - m31)) * s);
		HX_STACK_LINE(186)
		_z = (((m21 - m12)) * s);
	}
	else{
		HX_STACK_LINE(188)
		if (((bool((m11 > m22)) && bool((m11 > m33))))){
			HX_STACK_LINE(190)
			s = (2.0 * ::Math_obj::sqrt((((1.0 + m11) - m22) - m33)));
			HX_STACK_LINE(192)
			_w = (Float(((m32 - m23))) / Float(s));
			HX_STACK_LINE(193)
			_x = (0.25 * s);
			HX_STACK_LINE(194)
			_y = (Float(((m12 + m21))) / Float(s));
			HX_STACK_LINE(195)
			_z = (Float(((m13 + m31))) / Float(s));
		}
		else{
			HX_STACK_LINE(197)
			if (((m22 > m33))){
				HX_STACK_LINE(199)
				s = (2.0 * ::Math_obj::sqrt((((1.0 + m22) - m11) - m33)));
				HX_STACK_LINE(201)
				_w = (Float(((m13 - m31))) / Float(s));
				HX_STACK_LINE(202)
				_x = (Float(((m12 + m21))) / Float(s));
				HX_STACK_LINE(203)
				_y = (0.25 * s);
				HX_STACK_LINE(204)
				_z = (Float(((m23 + m32))) / Float(s));
			}
			else{
				HX_STACK_LINE(208)
				s = (2.0 * ::Math_obj::sqrt((((1.0 + m33) - m11) - m22)));
				HX_STACK_LINE(210)
				_w = (Float(((m21 - m12))) / Float(s));
				HX_STACK_LINE(211)
				_x = (Float(((m13 + m31))) / Float(s));
				HX_STACK_LINE(212)
				_y = (Float(((m23 + m32))) / Float(s));
				HX_STACK_LINE(213)
				_z = (0.25 * s);
			}
		}
	}
	HX_STACK_LINE(217)
	{
		HX_STACK_LINE(217)
		this->ignore_euler = true;
		HX_STACK_LINE(217)
		{
			HX_STACK_LINE(217)
			this->x = _x;
			HX_STACK_LINE(217)
			if ((this->_construct)){
				HX_STACK_LINE(217)
				this->x;
			}
			else{
				HX_STACK_LINE(217)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(217)
					Dynamic();
				}
				else{
					HX_STACK_LINE(217)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(217)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(217)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(217)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(217)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(217)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(217)
					Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(217)
					Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(217)
					Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(217)
					if (((order == (int)0))){
						HX_STACK_LINE(217)
						_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",217,0x23671680)
								{
									HX_STACK_LINE(217)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(217)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(217)
						_y1 = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(217)
						_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(217)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",217,0x23671680)
									{
										HX_STACK_LINE(217)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(217)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(217)
							_x1 = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(217)
							_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(217)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(217)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",217,0x23671680)
										{
											HX_STACK_LINE(217)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(217)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(217)
								_x1 = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(217)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(217)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(217)
								if (((order == (int)3))){
									HX_STACK_LINE(217)
									_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",217,0x23671680)
											{
												HX_STACK_LINE(217)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(217)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(217)
									_y1 = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(217)
									_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(217)
									if (((order == (int)4))){
										HX_STACK_LINE(217)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(217)
										_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",217,0x23671680)
												{
													HX_STACK_LINE(217)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(217)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(217)
										_z1 = ::Math_obj::asin(_Function_10_1::Block(this));
									}
									else{
										HX_STACK_LINE(217)
										if (((order == (int)5))){
											HX_STACK_LINE(217)
											_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(217)
											_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",217,0x23671680)
													{
														HX_STACK_LINE(217)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(217)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(217)
											_z1 = ::Math_obj::asin(_Function_11_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(217)
					{
						HX_STACK_LINE(217)
						Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
						HX_STACK_LINE(217)
						Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
						HX_STACK_LINE(217)
						Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
						HX_STACK_LINE(217)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(217)
						_this->ignore_listeners = true;
						HX_STACK_LINE(217)
						{
							HX_STACK_LINE(217)
							_this->x = _x2;
							HX_STACK_LINE(217)
							if ((_this->_construct)){
								HX_STACK_LINE(217)
								_this->x;
							}
							else{
								HX_STACK_LINE(217)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(217)
									_this->listen_x(_x2);
								}
								HX_STACK_LINE(217)
								_this->x;
							}
						}
						HX_STACK_LINE(217)
						{
							HX_STACK_LINE(217)
							_this->y = _y2;
							HX_STACK_LINE(217)
							if ((_this->_construct)){
								HX_STACK_LINE(217)
								_this->y;
							}
							else{
								HX_STACK_LINE(217)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(217)
									_this->listen_y(_y2);
								}
								HX_STACK_LINE(217)
								_this->y;
							}
						}
						HX_STACK_LINE(217)
						{
							HX_STACK_LINE(217)
							_this->z = _z2;
							HX_STACK_LINE(217)
							if ((_this->_construct)){
								HX_STACK_LINE(217)
								_this->z;
							}
							else{
								HX_STACK_LINE(217)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(217)
									_this->listen_z(_z2);
								}
								HX_STACK_LINE(217)
								_this->z;
							}
						}
						HX_STACK_LINE(217)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(217)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(217)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(217)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(217)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(217)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(217)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(217)
						_this;
					}
					HX_STACK_LINE(217)
					_this;
				}
				HX_STACK_LINE(217)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(217)
					this->listen_x(this->x);
				}
				HX_STACK_LINE(217)
				this->x;
			}
		}
		HX_STACK_LINE(217)
		{
			HX_STACK_LINE(217)
			this->y = _y;
			HX_STACK_LINE(217)
			if ((this->_construct)){
				HX_STACK_LINE(217)
				this->y;
			}
			else{
				HX_STACK_LINE(217)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(217)
					Dynamic();
				}
				else{
					HX_STACK_LINE(217)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(217)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(217)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(217)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(217)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(217)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(217)
					Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(217)
					Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(217)
					Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(217)
					if (((order == (int)0))){
						HX_STACK_LINE(217)
						_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",217,0x23671680)
								{
									HX_STACK_LINE(217)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(217)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(217)
						_y1 = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(217)
						_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(217)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",217,0x23671680)
									{
										HX_STACK_LINE(217)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(217)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(217)
							_x1 = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(217)
							_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(217)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(217)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",217,0x23671680)
										{
											HX_STACK_LINE(217)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(217)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(217)
								_x1 = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(217)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(217)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(217)
								if (((order == (int)3))){
									HX_STACK_LINE(217)
									_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",217,0x23671680)
											{
												HX_STACK_LINE(217)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(217)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(217)
									_y1 = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(217)
									_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(217)
									if (((order == (int)4))){
										HX_STACK_LINE(217)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(217)
										_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",217,0x23671680)
												{
													HX_STACK_LINE(217)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(217)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(217)
										_z1 = ::Math_obj::asin(_Function_10_1::Block(this));
									}
									else{
										HX_STACK_LINE(217)
										if (((order == (int)5))){
											HX_STACK_LINE(217)
											_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(217)
											_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",217,0x23671680)
													{
														HX_STACK_LINE(217)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(217)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(217)
											_z1 = ::Math_obj::asin(_Function_11_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(217)
					{
						HX_STACK_LINE(217)
						Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
						HX_STACK_LINE(217)
						Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
						HX_STACK_LINE(217)
						Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
						HX_STACK_LINE(217)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(217)
						_this->ignore_listeners = true;
						HX_STACK_LINE(217)
						{
							HX_STACK_LINE(217)
							_this->x = _x2;
							HX_STACK_LINE(217)
							if ((_this->_construct)){
								HX_STACK_LINE(217)
								_this->x;
							}
							else{
								HX_STACK_LINE(217)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(217)
									_this->listen_x(_x2);
								}
								HX_STACK_LINE(217)
								_this->x;
							}
						}
						HX_STACK_LINE(217)
						{
							HX_STACK_LINE(217)
							_this->y = _y2;
							HX_STACK_LINE(217)
							if ((_this->_construct)){
								HX_STACK_LINE(217)
								_this->y;
							}
							else{
								HX_STACK_LINE(217)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(217)
									_this->listen_y(_y2);
								}
								HX_STACK_LINE(217)
								_this->y;
							}
						}
						HX_STACK_LINE(217)
						{
							HX_STACK_LINE(217)
							_this->z = _z2;
							HX_STACK_LINE(217)
							if ((_this->_construct)){
								HX_STACK_LINE(217)
								_this->z;
							}
							else{
								HX_STACK_LINE(217)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(217)
									_this->listen_z(_z2);
								}
								HX_STACK_LINE(217)
								_this->z;
							}
						}
						HX_STACK_LINE(217)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(217)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(217)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(217)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(217)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(217)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(217)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(217)
						_this;
					}
					HX_STACK_LINE(217)
					_this;
				}
				HX_STACK_LINE(217)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(217)
					this->listen_y(this->y);
				}
				HX_STACK_LINE(217)
				this->y;
			}
		}
		HX_STACK_LINE(217)
		{
			HX_STACK_LINE(217)
			this->z = _z;
			HX_STACK_LINE(217)
			if ((this->_construct)){
				HX_STACK_LINE(217)
				this->z;
			}
			else{
				HX_STACK_LINE(217)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(217)
					Dynamic();
				}
				else{
					HX_STACK_LINE(217)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(217)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(217)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(217)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(217)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(217)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(217)
					Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(217)
					Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(217)
					Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(217)
					if (((order == (int)0))){
						HX_STACK_LINE(217)
						_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",217,0x23671680)
								{
									HX_STACK_LINE(217)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(217)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(217)
						_y1 = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(217)
						_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(217)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",217,0x23671680)
									{
										HX_STACK_LINE(217)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(217)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(217)
							_x1 = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(217)
							_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(217)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(217)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",217,0x23671680)
										{
											HX_STACK_LINE(217)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(217)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(217)
								_x1 = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(217)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(217)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(217)
								if (((order == (int)3))){
									HX_STACK_LINE(217)
									_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",217,0x23671680)
											{
												HX_STACK_LINE(217)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(217)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(217)
									_y1 = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(217)
									_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(217)
									if (((order == (int)4))){
										HX_STACK_LINE(217)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(217)
										_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",217,0x23671680)
												{
													HX_STACK_LINE(217)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(217)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(217)
										_z1 = ::Math_obj::asin(_Function_10_1::Block(this));
									}
									else{
										HX_STACK_LINE(217)
										if (((order == (int)5))){
											HX_STACK_LINE(217)
											_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(217)
											_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",217,0x23671680)
													{
														HX_STACK_LINE(217)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(217)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(217)
											_z1 = ::Math_obj::asin(_Function_11_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(217)
					{
						HX_STACK_LINE(217)
						Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
						HX_STACK_LINE(217)
						Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
						HX_STACK_LINE(217)
						Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
						HX_STACK_LINE(217)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(217)
						_this->ignore_listeners = true;
						HX_STACK_LINE(217)
						{
							HX_STACK_LINE(217)
							_this->x = _x2;
							HX_STACK_LINE(217)
							if ((_this->_construct)){
								HX_STACK_LINE(217)
								_this->x;
							}
							else{
								HX_STACK_LINE(217)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(217)
									_this->listen_x(_x2);
								}
								HX_STACK_LINE(217)
								_this->x;
							}
						}
						HX_STACK_LINE(217)
						{
							HX_STACK_LINE(217)
							_this->y = _y2;
							HX_STACK_LINE(217)
							if ((_this->_construct)){
								HX_STACK_LINE(217)
								_this->y;
							}
							else{
								HX_STACK_LINE(217)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(217)
									_this->listen_y(_y2);
								}
								HX_STACK_LINE(217)
								_this->y;
							}
						}
						HX_STACK_LINE(217)
						{
							HX_STACK_LINE(217)
							_this->z = _z2;
							HX_STACK_LINE(217)
							if ((_this->_construct)){
								HX_STACK_LINE(217)
								_this->z;
							}
							else{
								HX_STACK_LINE(217)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(217)
									_this->listen_z(_z2);
								}
								HX_STACK_LINE(217)
								_this->z;
							}
						}
						HX_STACK_LINE(217)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(217)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(217)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(217)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(217)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(217)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(217)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(217)
						_this;
					}
					HX_STACK_LINE(217)
					_this;
				}
				HX_STACK_LINE(217)
				if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(217)
					this->listen_z(this->z);
				}
				HX_STACK_LINE(217)
				this->z;
			}
		}
		HX_STACK_LINE(217)
		{
			HX_STACK_LINE(217)
			this->w = _w;
			HX_STACK_LINE(217)
			if ((this->_construct)){
				HX_STACK_LINE(217)
				this->w;
			}
			else{
				HX_STACK_LINE(217)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(217)
					Dynamic();
				}
				else{
					HX_STACK_LINE(217)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(217)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(217)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(217)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(217)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(217)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(217)
					Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(217)
					Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(217)
					Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(217)
					if (((order == (int)0))){
						HX_STACK_LINE(217)
						_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",217,0x23671680)
								{
									HX_STACK_LINE(217)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(217)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(217)
						_y1 = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(217)
						_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(217)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",217,0x23671680)
									{
										HX_STACK_LINE(217)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(217)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(217)
							_x1 = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(217)
							_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(217)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(217)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",217,0x23671680)
										{
											HX_STACK_LINE(217)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(217)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(217)
								_x1 = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(217)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(217)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(217)
								if (((order == (int)3))){
									HX_STACK_LINE(217)
									_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",217,0x23671680)
											{
												HX_STACK_LINE(217)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(217)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(217)
									_y1 = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(217)
									_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(217)
									if (((order == (int)4))){
										HX_STACK_LINE(217)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(217)
										_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",217,0x23671680)
												{
													HX_STACK_LINE(217)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(217)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(217)
										_z1 = ::Math_obj::asin(_Function_10_1::Block(this));
									}
									else{
										HX_STACK_LINE(217)
										if (((order == (int)5))){
											HX_STACK_LINE(217)
											_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(217)
											_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",217,0x23671680)
													{
														HX_STACK_LINE(217)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(217)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(217)
											_z1 = ::Math_obj::asin(_Function_11_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(217)
					{
						HX_STACK_LINE(217)
						Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
						HX_STACK_LINE(217)
						Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
						HX_STACK_LINE(217)
						Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
						HX_STACK_LINE(217)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(217)
						_this->ignore_listeners = true;
						HX_STACK_LINE(217)
						{
							HX_STACK_LINE(217)
							_this->x = _x2;
							HX_STACK_LINE(217)
							if ((_this->_construct)){
								HX_STACK_LINE(217)
								_this->x;
							}
							else{
								HX_STACK_LINE(217)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(217)
									_this->listen_x(_x2);
								}
								HX_STACK_LINE(217)
								_this->x;
							}
						}
						HX_STACK_LINE(217)
						{
							HX_STACK_LINE(217)
							_this->y = _y2;
							HX_STACK_LINE(217)
							if ((_this->_construct)){
								HX_STACK_LINE(217)
								_this->y;
							}
							else{
								HX_STACK_LINE(217)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(217)
									_this->listen_y(_y2);
								}
								HX_STACK_LINE(217)
								_this->y;
							}
						}
						HX_STACK_LINE(217)
						{
							HX_STACK_LINE(217)
							_this->z = _z2;
							HX_STACK_LINE(217)
							if ((_this->_construct)){
								HX_STACK_LINE(217)
								_this->z;
							}
							else{
								HX_STACK_LINE(217)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(217)
									_this->listen_z(_z2);
								}
								HX_STACK_LINE(217)
								_this->z;
							}
						}
						HX_STACK_LINE(217)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(217)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(217)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(217)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(217)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(217)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(217)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(217)
						_this;
					}
					HX_STACK_LINE(217)
					_this;
				}
				HX_STACK_LINE(217)
				if (((bool((this->listen_w_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(217)
					this->listen_w(this->w);
				}
				HX_STACK_LINE(217)
				this->w;
			}
		}
		HX_STACK_LINE(217)
		this->ignore_euler = false;
		HX_STACK_LINE(217)
		if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
			HX_STACK_LINE(217)
			Dynamic();
		}
		else{
			HX_STACK_LINE(217)
			::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(217)
			int order = (int)0;		HX_STACK_VAR(order,"order");
			HX_STACK_LINE(217)
			Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
			HX_STACK_LINE(217)
			Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
			HX_STACK_LINE(217)
			Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
			HX_STACK_LINE(217)
			Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
			HX_STACK_LINE(217)
			Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
			HX_STACK_LINE(217)
			Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
			HX_STACK_LINE(217)
			Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
			HX_STACK_LINE(217)
			if (((order == (int)0))){
				HX_STACK_LINE(217)
				_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
				struct _Function_4_1{
					inline static Float Block( ::phoenix::Quaternion_obj *__this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",217,0x23671680)
						{
							HX_STACK_LINE(217)
							Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(217)
							return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
						}
						return null();
					}
				};
				HX_STACK_LINE(217)
				_y1 = ::Math_obj::asin(_Function_4_1::Block(this));
				HX_STACK_LINE(217)
				_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
			}
			else{
				HX_STACK_LINE(217)
				if (((order == (int)1))){
					struct _Function_5_1{
						inline static Float Block( ::phoenix::Quaternion_obj *__this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",217,0x23671680)
							{
								HX_STACK_LINE(217)
								Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(217)
								return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(217)
					_x1 = ::Math_obj::asin(_Function_5_1::Block(this));
					HX_STACK_LINE(217)
					_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
					HX_STACK_LINE(217)
					_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
				}
				else{
					HX_STACK_LINE(217)
					if (((order == (int)2))){
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",217,0x23671680)
								{
									HX_STACK_LINE(217)
									Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(217)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(217)
						_x1 = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(217)
						_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
						HX_STACK_LINE(217)
						_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
					}
					else{
						HX_STACK_LINE(217)
						if (((order == (int)3))){
							HX_STACK_LINE(217)
							_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",217,0x23671680)
									{
										HX_STACK_LINE(217)
										Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(217)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(217)
							_y1 = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(217)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
						}
						else{
							HX_STACK_LINE(217)
							if (((order == (int)4))){
								HX_STACK_LINE(217)
								_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
								HX_STACK_LINE(217)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",217,0x23671680)
										{
											HX_STACK_LINE(217)
											Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(217)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(217)
								_z1 = ::Math_obj::asin(_Function_8_1::Block(this));
							}
							else{
								HX_STACK_LINE(217)
								if (((order == (int)5))){
									HX_STACK_LINE(217)
									_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
									HX_STACK_LINE(217)
									_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",217,0x23671680)
											{
												HX_STACK_LINE(217)
												Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(217)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(217)
									_z1 = ::Math_obj::asin(_Function_9_1::Block(this));
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(217)
			{
				HX_STACK_LINE(217)
				Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
				HX_STACK_LINE(217)
				Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
				HX_STACK_LINE(217)
				Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
				HX_STACK_LINE(217)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(217)
				_this->ignore_listeners = true;
				HX_STACK_LINE(217)
				{
					HX_STACK_LINE(217)
					_this->x = _x2;
					HX_STACK_LINE(217)
					if ((_this->_construct)){
						HX_STACK_LINE(217)
						_this->x;
					}
					else{
						HX_STACK_LINE(217)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(217)
							_this->listen_x(_x2);
						}
						HX_STACK_LINE(217)
						_this->x;
					}
				}
				HX_STACK_LINE(217)
				{
					HX_STACK_LINE(217)
					_this->y = _y2;
					HX_STACK_LINE(217)
					if ((_this->_construct)){
						HX_STACK_LINE(217)
						_this->y;
					}
					else{
						HX_STACK_LINE(217)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(217)
							_this->listen_y(_y2);
						}
						HX_STACK_LINE(217)
						_this->y;
					}
				}
				HX_STACK_LINE(217)
				{
					HX_STACK_LINE(217)
					_this->z = _z2;
					HX_STACK_LINE(217)
					if ((_this->_construct)){
						HX_STACK_LINE(217)
						_this->z;
					}
					else{
						HX_STACK_LINE(217)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(217)
							_this->listen_z(_z2);
						}
						HX_STACK_LINE(217)
						_this->z;
					}
				}
				HX_STACK_LINE(217)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(217)
				if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(217)
					_this->listen_x(_this->x);
				}
				HX_STACK_LINE(217)
				if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(217)
					_this->listen_y(_this->y);
				}
				HX_STACK_LINE(217)
				if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(217)
					_this->listen_z(_this->z);
				}
				HX_STACK_LINE(217)
				_this;
			}
			HX_STACK_LINE(217)
			_this;
		}
		HX_STACK_LINE(217)
		if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(217)
			this->listen_x(this->x);
		}
		HX_STACK_LINE(217)
		if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(217)
			this->listen_y(this->y);
		}
		HX_STACK_LINE(217)
		if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(217)
			this->listen_z(this->z);
		}
		HX_STACK_LINE(217)
		if (((bool((this->listen_w_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(217)
			this->listen_w(this->w);
		}
	}
	HX_STACK_LINE(219)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,setFromRotationMatrix,return )

::phoenix::Quaternion Quaternion_obj::inverse( ){
	HX_STACK_FRAME("phoenix.Quaternion","inverse",0x883005ff,"phoenix.Quaternion.inverse","phoenix/Quaternion.hx",226,0x23671680)
	HX_STACK_THIS(this)
	HX_STACK_LINE(226)
	return this->conjugate()->normalize();
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,inverse,return )

::phoenix::Quaternion Quaternion_obj::conjugate( ){
	HX_STACK_FRAME("phoenix.Quaternion","conjugate",0xa5a66227,"phoenix.Quaternion.conjugate","phoenix/Quaternion.hx",231,0x23671680)
	HX_STACK_THIS(this)
	HX_STACK_LINE(233)
	{
		HX_STACK_LINE(233)
		this->ignore_euler = true;
		HX_STACK_LINE(233)
		{
			HX_STACK_LINE(233)
			this->x = (this->x * (int)-1);
			HX_STACK_LINE(233)
			if ((this->_construct)){
				HX_STACK_LINE(233)
				this->x;
			}
			else{
				HX_STACK_LINE(233)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(233)
					Dynamic();
				}
				else{
					HX_STACK_LINE(233)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(233)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(233)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(233)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(233)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(233)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(233)
					Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(233)
					Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(233)
					Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(233)
					if (((order == (int)0))){
						HX_STACK_LINE(233)
						_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",233,0x23671680)
								{
									HX_STACK_LINE(233)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(233)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(233)
						_y = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(233)
						_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(233)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",233,0x23671680)
									{
										HX_STACK_LINE(233)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(233)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(233)
							_x = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(233)
							_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(233)
							_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(233)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",233,0x23671680)
										{
											HX_STACK_LINE(233)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(233)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(233)
								_x = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(233)
								_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(233)
								_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(233)
								if (((order == (int)3))){
									HX_STACK_LINE(233)
									_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",233,0x23671680)
											{
												HX_STACK_LINE(233)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(233)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(233)
									_y = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(233)
									_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(233)
									if (((order == (int)4))){
										HX_STACK_LINE(233)
										_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(233)
										_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",233,0x23671680)
												{
													HX_STACK_LINE(233)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(233)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(233)
										_z = ::Math_obj::asin(_Function_10_1::Block(this));
									}
									else{
										HX_STACK_LINE(233)
										if (((order == (int)5))){
											HX_STACK_LINE(233)
											_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(233)
											_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",233,0x23671680)
													{
														HX_STACK_LINE(233)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(233)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(233)
											_z = ::Math_obj::asin(_Function_11_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(233)
					{
						HX_STACK_LINE(233)
						Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(233)
						Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(233)
						Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(233)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(233)
						_this->ignore_listeners = true;
						HX_STACK_LINE(233)
						{
							HX_STACK_LINE(233)
							_this->x = _x1;
							HX_STACK_LINE(233)
							if ((_this->_construct)){
								HX_STACK_LINE(233)
								_this->x;
							}
							else{
								HX_STACK_LINE(233)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(233)
									_this->listen_x(_x1);
								}
								HX_STACK_LINE(233)
								_this->x;
							}
						}
						HX_STACK_LINE(233)
						{
							HX_STACK_LINE(233)
							_this->y = _y1;
							HX_STACK_LINE(233)
							if ((_this->_construct)){
								HX_STACK_LINE(233)
								_this->y;
							}
							else{
								HX_STACK_LINE(233)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(233)
									_this->listen_y(_y1);
								}
								HX_STACK_LINE(233)
								_this->y;
							}
						}
						HX_STACK_LINE(233)
						{
							HX_STACK_LINE(233)
							_this->z = _z1;
							HX_STACK_LINE(233)
							if ((_this->_construct)){
								HX_STACK_LINE(233)
								_this->z;
							}
							else{
								HX_STACK_LINE(233)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(233)
									_this->listen_z(_z1);
								}
								HX_STACK_LINE(233)
								_this->z;
							}
						}
						HX_STACK_LINE(233)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(233)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(233)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(233)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(233)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(233)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(233)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(233)
						_this;
					}
					HX_STACK_LINE(233)
					_this;
				}
				HX_STACK_LINE(233)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(233)
					this->listen_x(this->x);
				}
				HX_STACK_LINE(233)
				this->x;
			}
		}
		HX_STACK_LINE(233)
		{
			HX_STACK_LINE(233)
			this->y = (this->y * (int)-1);
			HX_STACK_LINE(233)
			if ((this->_construct)){
				HX_STACK_LINE(233)
				this->y;
			}
			else{
				HX_STACK_LINE(233)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(233)
					Dynamic();
				}
				else{
					HX_STACK_LINE(233)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(233)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(233)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(233)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(233)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(233)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(233)
					Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(233)
					Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(233)
					Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(233)
					if (((order == (int)0))){
						HX_STACK_LINE(233)
						_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",233,0x23671680)
								{
									HX_STACK_LINE(233)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(233)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(233)
						_y = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(233)
						_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(233)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",233,0x23671680)
									{
										HX_STACK_LINE(233)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(233)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(233)
							_x = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(233)
							_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(233)
							_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(233)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",233,0x23671680)
										{
											HX_STACK_LINE(233)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(233)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(233)
								_x = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(233)
								_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(233)
								_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(233)
								if (((order == (int)3))){
									HX_STACK_LINE(233)
									_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",233,0x23671680)
											{
												HX_STACK_LINE(233)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(233)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(233)
									_y = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(233)
									_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(233)
									if (((order == (int)4))){
										HX_STACK_LINE(233)
										_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(233)
										_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",233,0x23671680)
												{
													HX_STACK_LINE(233)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(233)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(233)
										_z = ::Math_obj::asin(_Function_10_1::Block(this));
									}
									else{
										HX_STACK_LINE(233)
										if (((order == (int)5))){
											HX_STACK_LINE(233)
											_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(233)
											_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",233,0x23671680)
													{
														HX_STACK_LINE(233)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(233)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(233)
											_z = ::Math_obj::asin(_Function_11_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(233)
					{
						HX_STACK_LINE(233)
						Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(233)
						Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(233)
						Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(233)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(233)
						_this->ignore_listeners = true;
						HX_STACK_LINE(233)
						{
							HX_STACK_LINE(233)
							_this->x = _x1;
							HX_STACK_LINE(233)
							if ((_this->_construct)){
								HX_STACK_LINE(233)
								_this->x;
							}
							else{
								HX_STACK_LINE(233)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(233)
									_this->listen_x(_x1);
								}
								HX_STACK_LINE(233)
								_this->x;
							}
						}
						HX_STACK_LINE(233)
						{
							HX_STACK_LINE(233)
							_this->y = _y1;
							HX_STACK_LINE(233)
							if ((_this->_construct)){
								HX_STACK_LINE(233)
								_this->y;
							}
							else{
								HX_STACK_LINE(233)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(233)
									_this->listen_y(_y1);
								}
								HX_STACK_LINE(233)
								_this->y;
							}
						}
						HX_STACK_LINE(233)
						{
							HX_STACK_LINE(233)
							_this->z = _z1;
							HX_STACK_LINE(233)
							if ((_this->_construct)){
								HX_STACK_LINE(233)
								_this->z;
							}
							else{
								HX_STACK_LINE(233)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(233)
									_this->listen_z(_z1);
								}
								HX_STACK_LINE(233)
								_this->z;
							}
						}
						HX_STACK_LINE(233)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(233)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(233)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(233)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(233)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(233)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(233)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(233)
						_this;
					}
					HX_STACK_LINE(233)
					_this;
				}
				HX_STACK_LINE(233)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(233)
					this->listen_y(this->y);
				}
				HX_STACK_LINE(233)
				this->y;
			}
		}
		HX_STACK_LINE(233)
		{
			HX_STACK_LINE(233)
			this->z = (this->z * (int)-1);
			HX_STACK_LINE(233)
			if ((this->_construct)){
				HX_STACK_LINE(233)
				this->z;
			}
			else{
				HX_STACK_LINE(233)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(233)
					Dynamic();
				}
				else{
					HX_STACK_LINE(233)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(233)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(233)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(233)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(233)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(233)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(233)
					Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(233)
					Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(233)
					Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(233)
					if (((order == (int)0))){
						HX_STACK_LINE(233)
						_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",233,0x23671680)
								{
									HX_STACK_LINE(233)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(233)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(233)
						_y = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(233)
						_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(233)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",233,0x23671680)
									{
										HX_STACK_LINE(233)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(233)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(233)
							_x = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(233)
							_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(233)
							_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(233)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",233,0x23671680)
										{
											HX_STACK_LINE(233)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(233)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(233)
								_x = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(233)
								_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(233)
								_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(233)
								if (((order == (int)3))){
									HX_STACK_LINE(233)
									_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",233,0x23671680)
											{
												HX_STACK_LINE(233)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(233)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(233)
									_y = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(233)
									_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(233)
									if (((order == (int)4))){
										HX_STACK_LINE(233)
										_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(233)
										_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",233,0x23671680)
												{
													HX_STACK_LINE(233)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(233)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(233)
										_z = ::Math_obj::asin(_Function_10_1::Block(this));
									}
									else{
										HX_STACK_LINE(233)
										if (((order == (int)5))){
											HX_STACK_LINE(233)
											_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(233)
											_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",233,0x23671680)
													{
														HX_STACK_LINE(233)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(233)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(233)
											_z = ::Math_obj::asin(_Function_11_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(233)
					{
						HX_STACK_LINE(233)
						Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(233)
						Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(233)
						Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(233)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(233)
						_this->ignore_listeners = true;
						HX_STACK_LINE(233)
						{
							HX_STACK_LINE(233)
							_this->x = _x1;
							HX_STACK_LINE(233)
							if ((_this->_construct)){
								HX_STACK_LINE(233)
								_this->x;
							}
							else{
								HX_STACK_LINE(233)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(233)
									_this->listen_x(_x1);
								}
								HX_STACK_LINE(233)
								_this->x;
							}
						}
						HX_STACK_LINE(233)
						{
							HX_STACK_LINE(233)
							_this->y = _y1;
							HX_STACK_LINE(233)
							if ((_this->_construct)){
								HX_STACK_LINE(233)
								_this->y;
							}
							else{
								HX_STACK_LINE(233)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(233)
									_this->listen_y(_y1);
								}
								HX_STACK_LINE(233)
								_this->y;
							}
						}
						HX_STACK_LINE(233)
						{
							HX_STACK_LINE(233)
							_this->z = _z1;
							HX_STACK_LINE(233)
							if ((_this->_construct)){
								HX_STACK_LINE(233)
								_this->z;
							}
							else{
								HX_STACK_LINE(233)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(233)
									_this->listen_z(_z1);
								}
								HX_STACK_LINE(233)
								_this->z;
							}
						}
						HX_STACK_LINE(233)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(233)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(233)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(233)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(233)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(233)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(233)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(233)
						_this;
					}
					HX_STACK_LINE(233)
					_this;
				}
				HX_STACK_LINE(233)
				if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(233)
					this->listen_z(this->z);
				}
				HX_STACK_LINE(233)
				this->z;
			}
		}
		HX_STACK_LINE(233)
		this->ignore_euler = false;
		HX_STACK_LINE(233)
		if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
			HX_STACK_LINE(233)
			Dynamic();
		}
		else{
			HX_STACK_LINE(233)
			::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(233)
			int order = (int)0;		HX_STACK_VAR(order,"order");
			HX_STACK_LINE(233)
			Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
			HX_STACK_LINE(233)
			Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
			HX_STACK_LINE(233)
			Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
			HX_STACK_LINE(233)
			Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
			HX_STACK_LINE(233)
			Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(233)
			Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(233)
			Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(233)
			if (((order == (int)0))){
				HX_STACK_LINE(233)
				_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
				struct _Function_4_1{
					inline static Float Block( ::phoenix::Quaternion_obj *__this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",233,0x23671680)
						{
							HX_STACK_LINE(233)
							Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(233)
							return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
						}
						return null();
					}
				};
				HX_STACK_LINE(233)
				_y = ::Math_obj::asin(_Function_4_1::Block(this));
				HX_STACK_LINE(233)
				_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
			}
			else{
				HX_STACK_LINE(233)
				if (((order == (int)1))){
					struct _Function_5_1{
						inline static Float Block( ::phoenix::Quaternion_obj *__this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",233,0x23671680)
							{
								HX_STACK_LINE(233)
								Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(233)
								return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(233)
					_x = ::Math_obj::asin(_Function_5_1::Block(this));
					HX_STACK_LINE(233)
					_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
					HX_STACK_LINE(233)
					_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
				}
				else{
					HX_STACK_LINE(233)
					if (((order == (int)2))){
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",233,0x23671680)
								{
									HX_STACK_LINE(233)
									Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(233)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(233)
						_x = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(233)
						_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
						HX_STACK_LINE(233)
						_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
					}
					else{
						HX_STACK_LINE(233)
						if (((order == (int)3))){
							HX_STACK_LINE(233)
							_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",233,0x23671680)
									{
										HX_STACK_LINE(233)
										Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(233)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(233)
							_y = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(233)
							_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
						}
						else{
							HX_STACK_LINE(233)
							if (((order == (int)4))){
								HX_STACK_LINE(233)
								_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
								HX_STACK_LINE(233)
								_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",233,0x23671680)
										{
											HX_STACK_LINE(233)
											Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(233)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(233)
								_z = ::Math_obj::asin(_Function_8_1::Block(this));
							}
							else{
								HX_STACK_LINE(233)
								if (((order == (int)5))){
									HX_STACK_LINE(233)
									_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
									HX_STACK_LINE(233)
									_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",233,0x23671680)
											{
												HX_STACK_LINE(233)
												Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(233)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(233)
									_z = ::Math_obj::asin(_Function_9_1::Block(this));
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(233)
			{
				HX_STACK_LINE(233)
				Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
				HX_STACK_LINE(233)
				Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
				HX_STACK_LINE(233)
				Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
				HX_STACK_LINE(233)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(233)
				_this->ignore_listeners = true;
				HX_STACK_LINE(233)
				{
					HX_STACK_LINE(233)
					_this->x = _x1;
					HX_STACK_LINE(233)
					if ((_this->_construct)){
						HX_STACK_LINE(233)
						_this->x;
					}
					else{
						HX_STACK_LINE(233)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(233)
							_this->listen_x(_x1);
						}
						HX_STACK_LINE(233)
						_this->x;
					}
				}
				HX_STACK_LINE(233)
				{
					HX_STACK_LINE(233)
					_this->y = _y1;
					HX_STACK_LINE(233)
					if ((_this->_construct)){
						HX_STACK_LINE(233)
						_this->y;
					}
					else{
						HX_STACK_LINE(233)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(233)
							_this->listen_y(_y1);
						}
						HX_STACK_LINE(233)
						_this->y;
					}
				}
				HX_STACK_LINE(233)
				{
					HX_STACK_LINE(233)
					_this->z = _z1;
					HX_STACK_LINE(233)
					if ((_this->_construct)){
						HX_STACK_LINE(233)
						_this->z;
					}
					else{
						HX_STACK_LINE(233)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(233)
							_this->listen_z(_z1);
						}
						HX_STACK_LINE(233)
						_this->z;
					}
				}
				HX_STACK_LINE(233)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(233)
				if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(233)
					_this->listen_x(_this->x);
				}
				HX_STACK_LINE(233)
				if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(233)
					_this->listen_y(_this->y);
				}
				HX_STACK_LINE(233)
				if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(233)
					_this->listen_z(_this->z);
				}
				HX_STACK_LINE(233)
				_this;
			}
			HX_STACK_LINE(233)
			_this;
		}
		HX_STACK_LINE(233)
		if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(233)
			this->listen_x(this->x);
		}
		HX_STACK_LINE(233)
		if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(233)
			this->listen_y(this->y);
		}
		HX_STACK_LINE(233)
		if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(233)
			this->listen_z(this->z);
		}
	}
	HX_STACK_LINE(235)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,conjugate,return )

Float Quaternion_obj::lengthSq( ){
	HX_STACK_FRAME("phoenix.Quaternion","lengthSq",0xcc67adf5,"phoenix.Quaternion.lengthSq","phoenix/Quaternion.hx",242,0x23671680)
	HX_STACK_THIS(this)
	HX_STACK_LINE(242)
	return ((((this->x * this->x) + (this->y * this->y)) + (this->z * this->z)) + (this->w * this->w));
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,lengthSq,return )

Float Quaternion_obj::length( ){
	HX_STACK_FRAME("phoenix.Quaternion","length",0xc664d977,"phoenix.Quaternion.length","phoenix/Quaternion.hx",249,0x23671680)
	HX_STACK_THIS(this)
	HX_STACK_LINE(249)
	return ::Math_obj::sqrt(((((this->x * this->x) + (this->y * this->y)) + (this->z * this->z)) + (this->w * this->w)));
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,length,return )

::phoenix::Quaternion Quaternion_obj::normalize( ){
	HX_STACK_FRAME("phoenix.Quaternion","normalize",0x0ebe639c,"phoenix.Quaternion.normalize","phoenix/Quaternion.hx",254,0x23671680)
	HX_STACK_THIS(this)
	HX_STACK_LINE(256)
	Float l = this->length();		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(258)
	if (((l == (int)0))){
		HX_STACK_LINE(260)
		this->ignore_euler = true;
		HX_STACK_LINE(260)
		{
			HX_STACK_LINE(260)
			this->x = (int)0;
			HX_STACK_LINE(260)
			if ((this->_construct)){
				HX_STACK_LINE(260)
				this->x;
			}
			else{
				HX_STACK_LINE(260)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(260)
					Dynamic();
				}
				else{
					HX_STACK_LINE(260)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(260)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(260)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(260)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(260)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(260)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(260)
					Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(260)
					Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(260)
					Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(260)
					if (((order == (int)0))){
						HX_STACK_LINE(260)
						_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",260,0x23671680)
								{
									HX_STACK_LINE(260)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(260)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(260)
						_y = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(260)
						_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(260)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",260,0x23671680)
									{
										HX_STACK_LINE(260)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(260)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(260)
							_x = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(260)
							_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(260)
							_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(260)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",260,0x23671680)
										{
											HX_STACK_LINE(260)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(260)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(260)
								_x = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(260)
								_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(260)
								_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(260)
								if (((order == (int)3))){
									HX_STACK_LINE(260)
									_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",260,0x23671680)
											{
												HX_STACK_LINE(260)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(260)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(260)
									_y = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(260)
									_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(260)
									if (((order == (int)4))){
										HX_STACK_LINE(260)
										_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(260)
										_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",260,0x23671680)
												{
													HX_STACK_LINE(260)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(260)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(260)
										_z = ::Math_obj::asin(_Function_10_1::Block(this));
									}
									else{
										HX_STACK_LINE(260)
										if (((order == (int)5))){
											HX_STACK_LINE(260)
											_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(260)
											_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",260,0x23671680)
													{
														HX_STACK_LINE(260)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(260)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(260)
											_z = ::Math_obj::asin(_Function_11_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(260)
					{
						HX_STACK_LINE(260)
						Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(260)
						Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(260)
						Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(260)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(260)
						_this->ignore_listeners = true;
						HX_STACK_LINE(260)
						{
							HX_STACK_LINE(260)
							_this->x = _x1;
							HX_STACK_LINE(260)
							if ((_this->_construct)){
								HX_STACK_LINE(260)
								_this->x;
							}
							else{
								HX_STACK_LINE(260)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(260)
									_this->listen_x(_x1);
								}
								HX_STACK_LINE(260)
								_this->x;
							}
						}
						HX_STACK_LINE(260)
						{
							HX_STACK_LINE(260)
							_this->y = _y1;
							HX_STACK_LINE(260)
							if ((_this->_construct)){
								HX_STACK_LINE(260)
								_this->y;
							}
							else{
								HX_STACK_LINE(260)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(260)
									_this->listen_y(_y1);
								}
								HX_STACK_LINE(260)
								_this->y;
							}
						}
						HX_STACK_LINE(260)
						{
							HX_STACK_LINE(260)
							_this->z = _z1;
							HX_STACK_LINE(260)
							if ((_this->_construct)){
								HX_STACK_LINE(260)
								_this->z;
							}
							else{
								HX_STACK_LINE(260)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(260)
									_this->listen_z(_z1);
								}
								HX_STACK_LINE(260)
								_this->z;
							}
						}
						HX_STACK_LINE(260)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(260)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(260)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(260)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(260)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(260)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(260)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(260)
						_this;
					}
					HX_STACK_LINE(260)
					_this;
				}
				HX_STACK_LINE(260)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(260)
					this->listen_x(this->x);
				}
				HX_STACK_LINE(260)
				this->x;
			}
		}
		HX_STACK_LINE(260)
		{
			HX_STACK_LINE(260)
			this->y = (int)0;
			HX_STACK_LINE(260)
			if ((this->_construct)){
				HX_STACK_LINE(260)
				this->y;
			}
			else{
				HX_STACK_LINE(260)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(260)
					Dynamic();
				}
				else{
					HX_STACK_LINE(260)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(260)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(260)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(260)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(260)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(260)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(260)
					Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(260)
					Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(260)
					Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(260)
					if (((order == (int)0))){
						HX_STACK_LINE(260)
						_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",260,0x23671680)
								{
									HX_STACK_LINE(260)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(260)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(260)
						_y = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(260)
						_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(260)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",260,0x23671680)
									{
										HX_STACK_LINE(260)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(260)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(260)
							_x = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(260)
							_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(260)
							_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(260)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",260,0x23671680)
										{
											HX_STACK_LINE(260)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(260)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(260)
								_x = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(260)
								_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(260)
								_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(260)
								if (((order == (int)3))){
									HX_STACK_LINE(260)
									_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",260,0x23671680)
											{
												HX_STACK_LINE(260)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(260)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(260)
									_y = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(260)
									_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(260)
									if (((order == (int)4))){
										HX_STACK_LINE(260)
										_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(260)
										_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",260,0x23671680)
												{
													HX_STACK_LINE(260)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(260)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(260)
										_z = ::Math_obj::asin(_Function_10_1::Block(this));
									}
									else{
										HX_STACK_LINE(260)
										if (((order == (int)5))){
											HX_STACK_LINE(260)
											_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(260)
											_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",260,0x23671680)
													{
														HX_STACK_LINE(260)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(260)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(260)
											_z = ::Math_obj::asin(_Function_11_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(260)
					{
						HX_STACK_LINE(260)
						Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(260)
						Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(260)
						Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(260)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(260)
						_this->ignore_listeners = true;
						HX_STACK_LINE(260)
						{
							HX_STACK_LINE(260)
							_this->x = _x1;
							HX_STACK_LINE(260)
							if ((_this->_construct)){
								HX_STACK_LINE(260)
								_this->x;
							}
							else{
								HX_STACK_LINE(260)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(260)
									_this->listen_x(_x1);
								}
								HX_STACK_LINE(260)
								_this->x;
							}
						}
						HX_STACK_LINE(260)
						{
							HX_STACK_LINE(260)
							_this->y = _y1;
							HX_STACK_LINE(260)
							if ((_this->_construct)){
								HX_STACK_LINE(260)
								_this->y;
							}
							else{
								HX_STACK_LINE(260)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(260)
									_this->listen_y(_y1);
								}
								HX_STACK_LINE(260)
								_this->y;
							}
						}
						HX_STACK_LINE(260)
						{
							HX_STACK_LINE(260)
							_this->z = _z1;
							HX_STACK_LINE(260)
							if ((_this->_construct)){
								HX_STACK_LINE(260)
								_this->z;
							}
							else{
								HX_STACK_LINE(260)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(260)
									_this->listen_z(_z1);
								}
								HX_STACK_LINE(260)
								_this->z;
							}
						}
						HX_STACK_LINE(260)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(260)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(260)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(260)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(260)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(260)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(260)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(260)
						_this;
					}
					HX_STACK_LINE(260)
					_this;
				}
				HX_STACK_LINE(260)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(260)
					this->listen_y(this->y);
				}
				HX_STACK_LINE(260)
				this->y;
			}
		}
		HX_STACK_LINE(260)
		{
			HX_STACK_LINE(260)
			this->z = (int)0;
			HX_STACK_LINE(260)
			if ((this->_construct)){
				HX_STACK_LINE(260)
				this->z;
			}
			else{
				HX_STACK_LINE(260)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(260)
					Dynamic();
				}
				else{
					HX_STACK_LINE(260)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(260)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(260)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(260)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(260)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(260)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(260)
					Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(260)
					Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(260)
					Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(260)
					if (((order == (int)0))){
						HX_STACK_LINE(260)
						_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",260,0x23671680)
								{
									HX_STACK_LINE(260)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(260)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(260)
						_y = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(260)
						_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(260)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",260,0x23671680)
									{
										HX_STACK_LINE(260)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(260)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(260)
							_x = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(260)
							_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(260)
							_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(260)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",260,0x23671680)
										{
											HX_STACK_LINE(260)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(260)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(260)
								_x = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(260)
								_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(260)
								_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(260)
								if (((order == (int)3))){
									HX_STACK_LINE(260)
									_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",260,0x23671680)
											{
												HX_STACK_LINE(260)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(260)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(260)
									_y = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(260)
									_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(260)
									if (((order == (int)4))){
										HX_STACK_LINE(260)
										_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(260)
										_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",260,0x23671680)
												{
													HX_STACK_LINE(260)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(260)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(260)
										_z = ::Math_obj::asin(_Function_10_1::Block(this));
									}
									else{
										HX_STACK_LINE(260)
										if (((order == (int)5))){
											HX_STACK_LINE(260)
											_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(260)
											_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",260,0x23671680)
													{
														HX_STACK_LINE(260)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(260)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(260)
											_z = ::Math_obj::asin(_Function_11_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(260)
					{
						HX_STACK_LINE(260)
						Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(260)
						Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(260)
						Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(260)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(260)
						_this->ignore_listeners = true;
						HX_STACK_LINE(260)
						{
							HX_STACK_LINE(260)
							_this->x = _x1;
							HX_STACK_LINE(260)
							if ((_this->_construct)){
								HX_STACK_LINE(260)
								_this->x;
							}
							else{
								HX_STACK_LINE(260)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(260)
									_this->listen_x(_x1);
								}
								HX_STACK_LINE(260)
								_this->x;
							}
						}
						HX_STACK_LINE(260)
						{
							HX_STACK_LINE(260)
							_this->y = _y1;
							HX_STACK_LINE(260)
							if ((_this->_construct)){
								HX_STACK_LINE(260)
								_this->y;
							}
							else{
								HX_STACK_LINE(260)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(260)
									_this->listen_y(_y1);
								}
								HX_STACK_LINE(260)
								_this->y;
							}
						}
						HX_STACK_LINE(260)
						{
							HX_STACK_LINE(260)
							_this->z = _z1;
							HX_STACK_LINE(260)
							if ((_this->_construct)){
								HX_STACK_LINE(260)
								_this->z;
							}
							else{
								HX_STACK_LINE(260)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(260)
									_this->listen_z(_z1);
								}
								HX_STACK_LINE(260)
								_this->z;
							}
						}
						HX_STACK_LINE(260)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(260)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(260)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(260)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(260)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(260)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(260)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(260)
						_this;
					}
					HX_STACK_LINE(260)
					_this;
				}
				HX_STACK_LINE(260)
				if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(260)
					this->listen_z(this->z);
				}
				HX_STACK_LINE(260)
				this->z;
			}
		}
		HX_STACK_LINE(260)
		{
			HX_STACK_LINE(260)
			this->w = (int)1;
			HX_STACK_LINE(260)
			if ((this->_construct)){
				HX_STACK_LINE(260)
				this->w;
			}
			else{
				HX_STACK_LINE(260)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(260)
					Dynamic();
				}
				else{
					HX_STACK_LINE(260)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(260)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(260)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(260)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(260)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(260)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(260)
					Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(260)
					Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(260)
					Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(260)
					if (((order == (int)0))){
						HX_STACK_LINE(260)
						_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",260,0x23671680)
								{
									HX_STACK_LINE(260)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(260)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(260)
						_y = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(260)
						_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(260)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",260,0x23671680)
									{
										HX_STACK_LINE(260)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(260)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(260)
							_x = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(260)
							_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(260)
							_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(260)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",260,0x23671680)
										{
											HX_STACK_LINE(260)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(260)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(260)
								_x = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(260)
								_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(260)
								_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(260)
								if (((order == (int)3))){
									HX_STACK_LINE(260)
									_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",260,0x23671680)
											{
												HX_STACK_LINE(260)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(260)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(260)
									_y = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(260)
									_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(260)
									if (((order == (int)4))){
										HX_STACK_LINE(260)
										_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(260)
										_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",260,0x23671680)
												{
													HX_STACK_LINE(260)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(260)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(260)
										_z = ::Math_obj::asin(_Function_10_1::Block(this));
									}
									else{
										HX_STACK_LINE(260)
										if (((order == (int)5))){
											HX_STACK_LINE(260)
											_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(260)
											_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",260,0x23671680)
													{
														HX_STACK_LINE(260)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(260)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(260)
											_z = ::Math_obj::asin(_Function_11_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(260)
					{
						HX_STACK_LINE(260)
						Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(260)
						Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(260)
						Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(260)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(260)
						_this->ignore_listeners = true;
						HX_STACK_LINE(260)
						{
							HX_STACK_LINE(260)
							_this->x = _x1;
							HX_STACK_LINE(260)
							if ((_this->_construct)){
								HX_STACK_LINE(260)
								_this->x;
							}
							else{
								HX_STACK_LINE(260)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(260)
									_this->listen_x(_x1);
								}
								HX_STACK_LINE(260)
								_this->x;
							}
						}
						HX_STACK_LINE(260)
						{
							HX_STACK_LINE(260)
							_this->y = _y1;
							HX_STACK_LINE(260)
							if ((_this->_construct)){
								HX_STACK_LINE(260)
								_this->y;
							}
							else{
								HX_STACK_LINE(260)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(260)
									_this->listen_y(_y1);
								}
								HX_STACK_LINE(260)
								_this->y;
							}
						}
						HX_STACK_LINE(260)
						{
							HX_STACK_LINE(260)
							_this->z = _z1;
							HX_STACK_LINE(260)
							if ((_this->_construct)){
								HX_STACK_LINE(260)
								_this->z;
							}
							else{
								HX_STACK_LINE(260)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(260)
									_this->listen_z(_z1);
								}
								HX_STACK_LINE(260)
								_this->z;
							}
						}
						HX_STACK_LINE(260)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(260)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(260)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(260)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(260)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(260)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(260)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(260)
						_this;
					}
					HX_STACK_LINE(260)
					_this;
				}
				HX_STACK_LINE(260)
				if (((bool((this->listen_w_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(260)
					this->listen_w(this->w);
				}
				HX_STACK_LINE(260)
				this->w;
			}
		}
		HX_STACK_LINE(260)
		this->ignore_euler = false;
		HX_STACK_LINE(260)
		if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
			HX_STACK_LINE(260)
			Dynamic();
		}
		else{
			HX_STACK_LINE(260)
			::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(260)
			int order = (int)0;		HX_STACK_VAR(order,"order");
			HX_STACK_LINE(260)
			Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
			HX_STACK_LINE(260)
			Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
			HX_STACK_LINE(260)
			Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
			HX_STACK_LINE(260)
			Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
			HX_STACK_LINE(260)
			Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(260)
			Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(260)
			Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(260)
			if (((order == (int)0))){
				HX_STACK_LINE(260)
				_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
				struct _Function_4_1{
					inline static Float Block( ::phoenix::Quaternion_obj *__this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",260,0x23671680)
						{
							HX_STACK_LINE(260)
							Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(260)
							return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
						}
						return null();
					}
				};
				HX_STACK_LINE(260)
				_y = ::Math_obj::asin(_Function_4_1::Block(this));
				HX_STACK_LINE(260)
				_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
			}
			else{
				HX_STACK_LINE(260)
				if (((order == (int)1))){
					struct _Function_5_1{
						inline static Float Block( ::phoenix::Quaternion_obj *__this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",260,0x23671680)
							{
								HX_STACK_LINE(260)
								Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(260)
								return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(260)
					_x = ::Math_obj::asin(_Function_5_1::Block(this));
					HX_STACK_LINE(260)
					_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
					HX_STACK_LINE(260)
					_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
				}
				else{
					HX_STACK_LINE(260)
					if (((order == (int)2))){
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",260,0x23671680)
								{
									HX_STACK_LINE(260)
									Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(260)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(260)
						_x = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(260)
						_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
						HX_STACK_LINE(260)
						_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
					}
					else{
						HX_STACK_LINE(260)
						if (((order == (int)3))){
							HX_STACK_LINE(260)
							_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",260,0x23671680)
									{
										HX_STACK_LINE(260)
										Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(260)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(260)
							_y = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(260)
							_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
						}
						else{
							HX_STACK_LINE(260)
							if (((order == (int)4))){
								HX_STACK_LINE(260)
								_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
								HX_STACK_LINE(260)
								_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",260,0x23671680)
										{
											HX_STACK_LINE(260)
											Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(260)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(260)
								_z = ::Math_obj::asin(_Function_8_1::Block(this));
							}
							else{
								HX_STACK_LINE(260)
								if (((order == (int)5))){
									HX_STACK_LINE(260)
									_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
									HX_STACK_LINE(260)
									_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",260,0x23671680)
											{
												HX_STACK_LINE(260)
												Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(260)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(260)
									_z = ::Math_obj::asin(_Function_9_1::Block(this));
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(260)
			{
				HX_STACK_LINE(260)
				Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
				HX_STACK_LINE(260)
				Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
				HX_STACK_LINE(260)
				Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
				HX_STACK_LINE(260)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(260)
				_this->ignore_listeners = true;
				HX_STACK_LINE(260)
				{
					HX_STACK_LINE(260)
					_this->x = _x1;
					HX_STACK_LINE(260)
					if ((_this->_construct)){
						HX_STACK_LINE(260)
						_this->x;
					}
					else{
						HX_STACK_LINE(260)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(260)
							_this->listen_x(_x1);
						}
						HX_STACK_LINE(260)
						_this->x;
					}
				}
				HX_STACK_LINE(260)
				{
					HX_STACK_LINE(260)
					_this->y = _y1;
					HX_STACK_LINE(260)
					if ((_this->_construct)){
						HX_STACK_LINE(260)
						_this->y;
					}
					else{
						HX_STACK_LINE(260)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(260)
							_this->listen_y(_y1);
						}
						HX_STACK_LINE(260)
						_this->y;
					}
				}
				HX_STACK_LINE(260)
				{
					HX_STACK_LINE(260)
					_this->z = _z1;
					HX_STACK_LINE(260)
					if ((_this->_construct)){
						HX_STACK_LINE(260)
						_this->z;
					}
					else{
						HX_STACK_LINE(260)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(260)
							_this->listen_z(_z1);
						}
						HX_STACK_LINE(260)
						_this->z;
					}
				}
				HX_STACK_LINE(260)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(260)
				if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(260)
					_this->listen_x(_this->x);
				}
				HX_STACK_LINE(260)
				if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(260)
					_this->listen_y(_this->y);
				}
				HX_STACK_LINE(260)
				if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(260)
					_this->listen_z(_this->z);
				}
				HX_STACK_LINE(260)
				_this;
			}
			HX_STACK_LINE(260)
			_this;
		}
		HX_STACK_LINE(260)
		if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(260)
			this->listen_x(this->x);
		}
		HX_STACK_LINE(260)
		if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(260)
			this->listen_y(this->y);
		}
		HX_STACK_LINE(260)
		if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(260)
			this->listen_z(this->z);
		}
		HX_STACK_LINE(260)
		if (((bool((this->listen_w_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(260)
			this->listen_w(this->w);
		}
	}
	else{
		HX_STACK_LINE(264)
		l = (Float((int)1) / Float(l));
		HX_STACK_LINE(266)
		{
			HX_STACK_LINE(266)
			this->ignore_euler = true;
			HX_STACK_LINE(266)
			{
				HX_STACK_LINE(266)
				this->x = (this->x * l);
				HX_STACK_LINE(266)
				if ((this->_construct)){
					HX_STACK_LINE(266)
					this->x;
				}
				else{
					HX_STACK_LINE(266)
					if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
						HX_STACK_LINE(266)
						Dynamic();
					}
					else{
						HX_STACK_LINE(266)
						::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(266)
						int order = (int)0;		HX_STACK_VAR(order,"order");
						HX_STACK_LINE(266)
						Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
						HX_STACK_LINE(266)
						Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
						HX_STACK_LINE(266)
						Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
						HX_STACK_LINE(266)
						Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
						HX_STACK_LINE(266)
						Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
						HX_STACK_LINE(266)
						Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(266)
						Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
						HX_STACK_LINE(266)
						if (((order == (int)0))){
							HX_STACK_LINE(266)
							_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",266,0x23671680)
									{
										HX_STACK_LINE(266)
										Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(266)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(266)
							_y = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(266)
							_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
						}
						else{
							HX_STACK_LINE(266)
							if (((order == (int)1))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",266,0x23671680)
										{
											HX_STACK_LINE(266)
											Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(266)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(266)
								_x = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(266)
								_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(266)
								_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(266)
								if (((order == (int)2))){
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",266,0x23671680)
											{
												HX_STACK_LINE(266)
												Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(266)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(266)
									_x = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(266)
									_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
									HX_STACK_LINE(266)
									_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
								}
								else{
									HX_STACK_LINE(266)
									if (((order == (int)3))){
										HX_STACK_LINE(266)
										_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",266,0x23671680)
												{
													HX_STACK_LINE(266)
													Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(266)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(266)
										_y = ::Math_obj::asin(_Function_10_1::Block(this));
										HX_STACK_LINE(266)
										_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
									}
									else{
										HX_STACK_LINE(266)
										if (((order == (int)4))){
											HX_STACK_LINE(266)
											_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(266)
											_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",266,0x23671680)
													{
														HX_STACK_LINE(266)
														Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(266)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(266)
											_z = ::Math_obj::asin(_Function_11_1::Block(this));
										}
										else{
											HX_STACK_LINE(266)
											if (((order == (int)5))){
												HX_STACK_LINE(266)
												_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
												HX_STACK_LINE(266)
												_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
												struct _Function_12_1{
													inline static Float Block( ::phoenix::Quaternion_obj *__this){
														HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",266,0x23671680)
														{
															HX_STACK_LINE(266)
															Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
															HX_STACK_LINE(266)
															return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
														}
														return null();
													}
												};
												HX_STACK_LINE(266)
												_z = ::Math_obj::asin(_Function_12_1::Block(this));
											}
										}
									}
								}
							}
						}
						HX_STACK_LINE(266)
						{
							HX_STACK_LINE(266)
							Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
							HX_STACK_LINE(266)
							Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
							HX_STACK_LINE(266)
							Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
							HX_STACK_LINE(266)
							bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
							HX_STACK_LINE(266)
							_this->ignore_listeners = true;
							HX_STACK_LINE(266)
							{
								HX_STACK_LINE(266)
								_this->x = _x1;
								HX_STACK_LINE(266)
								if ((_this->_construct)){
									HX_STACK_LINE(266)
									_this->x;
								}
								else{
									HX_STACK_LINE(266)
									if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(266)
										_this->listen_x(_x1);
									}
									HX_STACK_LINE(266)
									_this->x;
								}
							}
							HX_STACK_LINE(266)
							{
								HX_STACK_LINE(266)
								_this->y = _y1;
								HX_STACK_LINE(266)
								if ((_this->_construct)){
									HX_STACK_LINE(266)
									_this->y;
								}
								else{
									HX_STACK_LINE(266)
									if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(266)
										_this->listen_y(_y1);
									}
									HX_STACK_LINE(266)
									_this->y;
								}
							}
							HX_STACK_LINE(266)
							{
								HX_STACK_LINE(266)
								_this->z = _z1;
								HX_STACK_LINE(266)
								if ((_this->_construct)){
									HX_STACK_LINE(266)
									_this->z;
								}
								else{
									HX_STACK_LINE(266)
									if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(266)
										_this->listen_z(_z1);
									}
									HX_STACK_LINE(266)
									_this->z;
								}
							}
							HX_STACK_LINE(266)
							_this->ignore_listeners = prev;
							HX_STACK_LINE(266)
							if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(266)
								_this->listen_x(_this->x);
							}
							HX_STACK_LINE(266)
							if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(266)
								_this->listen_y(_this->y);
							}
							HX_STACK_LINE(266)
							if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(266)
								_this->listen_z(_this->z);
							}
							HX_STACK_LINE(266)
							_this;
						}
						HX_STACK_LINE(266)
						_this;
					}
					HX_STACK_LINE(266)
					if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(266)
						this->listen_x(this->x);
					}
					HX_STACK_LINE(266)
					this->x;
				}
			}
			HX_STACK_LINE(266)
			{
				HX_STACK_LINE(266)
				this->y = (this->y * l);
				HX_STACK_LINE(266)
				if ((this->_construct)){
					HX_STACK_LINE(266)
					this->y;
				}
				else{
					HX_STACK_LINE(266)
					if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
						HX_STACK_LINE(266)
						Dynamic();
					}
					else{
						HX_STACK_LINE(266)
						::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(266)
						int order = (int)0;		HX_STACK_VAR(order,"order");
						HX_STACK_LINE(266)
						Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
						HX_STACK_LINE(266)
						Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
						HX_STACK_LINE(266)
						Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
						HX_STACK_LINE(266)
						Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
						HX_STACK_LINE(266)
						Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
						HX_STACK_LINE(266)
						Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(266)
						Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
						HX_STACK_LINE(266)
						if (((order == (int)0))){
							HX_STACK_LINE(266)
							_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",266,0x23671680)
									{
										HX_STACK_LINE(266)
										Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(266)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(266)
							_y = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(266)
							_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
						}
						else{
							HX_STACK_LINE(266)
							if (((order == (int)1))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",266,0x23671680)
										{
											HX_STACK_LINE(266)
											Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(266)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(266)
								_x = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(266)
								_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(266)
								_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(266)
								if (((order == (int)2))){
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",266,0x23671680)
											{
												HX_STACK_LINE(266)
												Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(266)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(266)
									_x = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(266)
									_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
									HX_STACK_LINE(266)
									_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
								}
								else{
									HX_STACK_LINE(266)
									if (((order == (int)3))){
										HX_STACK_LINE(266)
										_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",266,0x23671680)
												{
													HX_STACK_LINE(266)
													Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(266)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(266)
										_y = ::Math_obj::asin(_Function_10_1::Block(this));
										HX_STACK_LINE(266)
										_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
									}
									else{
										HX_STACK_LINE(266)
										if (((order == (int)4))){
											HX_STACK_LINE(266)
											_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(266)
											_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",266,0x23671680)
													{
														HX_STACK_LINE(266)
														Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(266)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(266)
											_z = ::Math_obj::asin(_Function_11_1::Block(this));
										}
										else{
											HX_STACK_LINE(266)
											if (((order == (int)5))){
												HX_STACK_LINE(266)
												_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
												HX_STACK_LINE(266)
												_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
												struct _Function_12_1{
													inline static Float Block( ::phoenix::Quaternion_obj *__this){
														HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",266,0x23671680)
														{
															HX_STACK_LINE(266)
															Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
															HX_STACK_LINE(266)
															return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
														}
														return null();
													}
												};
												HX_STACK_LINE(266)
												_z = ::Math_obj::asin(_Function_12_1::Block(this));
											}
										}
									}
								}
							}
						}
						HX_STACK_LINE(266)
						{
							HX_STACK_LINE(266)
							Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
							HX_STACK_LINE(266)
							Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
							HX_STACK_LINE(266)
							Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
							HX_STACK_LINE(266)
							bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
							HX_STACK_LINE(266)
							_this->ignore_listeners = true;
							HX_STACK_LINE(266)
							{
								HX_STACK_LINE(266)
								_this->x = _x1;
								HX_STACK_LINE(266)
								if ((_this->_construct)){
									HX_STACK_LINE(266)
									_this->x;
								}
								else{
									HX_STACK_LINE(266)
									if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(266)
										_this->listen_x(_x1);
									}
									HX_STACK_LINE(266)
									_this->x;
								}
							}
							HX_STACK_LINE(266)
							{
								HX_STACK_LINE(266)
								_this->y = _y1;
								HX_STACK_LINE(266)
								if ((_this->_construct)){
									HX_STACK_LINE(266)
									_this->y;
								}
								else{
									HX_STACK_LINE(266)
									if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(266)
										_this->listen_y(_y1);
									}
									HX_STACK_LINE(266)
									_this->y;
								}
							}
							HX_STACK_LINE(266)
							{
								HX_STACK_LINE(266)
								_this->z = _z1;
								HX_STACK_LINE(266)
								if ((_this->_construct)){
									HX_STACK_LINE(266)
									_this->z;
								}
								else{
									HX_STACK_LINE(266)
									if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(266)
										_this->listen_z(_z1);
									}
									HX_STACK_LINE(266)
									_this->z;
								}
							}
							HX_STACK_LINE(266)
							_this->ignore_listeners = prev;
							HX_STACK_LINE(266)
							if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(266)
								_this->listen_x(_this->x);
							}
							HX_STACK_LINE(266)
							if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(266)
								_this->listen_y(_this->y);
							}
							HX_STACK_LINE(266)
							if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(266)
								_this->listen_z(_this->z);
							}
							HX_STACK_LINE(266)
							_this;
						}
						HX_STACK_LINE(266)
						_this;
					}
					HX_STACK_LINE(266)
					if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(266)
						this->listen_y(this->y);
					}
					HX_STACK_LINE(266)
					this->y;
				}
			}
			HX_STACK_LINE(266)
			{
				HX_STACK_LINE(266)
				this->z = (this->z * l);
				HX_STACK_LINE(266)
				if ((this->_construct)){
					HX_STACK_LINE(266)
					this->z;
				}
				else{
					HX_STACK_LINE(266)
					if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
						HX_STACK_LINE(266)
						Dynamic();
					}
					else{
						HX_STACK_LINE(266)
						::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(266)
						int order = (int)0;		HX_STACK_VAR(order,"order");
						HX_STACK_LINE(266)
						Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
						HX_STACK_LINE(266)
						Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
						HX_STACK_LINE(266)
						Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
						HX_STACK_LINE(266)
						Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
						HX_STACK_LINE(266)
						Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
						HX_STACK_LINE(266)
						Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(266)
						Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
						HX_STACK_LINE(266)
						if (((order == (int)0))){
							HX_STACK_LINE(266)
							_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",266,0x23671680)
									{
										HX_STACK_LINE(266)
										Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(266)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(266)
							_y = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(266)
							_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
						}
						else{
							HX_STACK_LINE(266)
							if (((order == (int)1))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",266,0x23671680)
										{
											HX_STACK_LINE(266)
											Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(266)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(266)
								_x = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(266)
								_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(266)
								_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(266)
								if (((order == (int)2))){
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",266,0x23671680)
											{
												HX_STACK_LINE(266)
												Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(266)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(266)
									_x = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(266)
									_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
									HX_STACK_LINE(266)
									_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
								}
								else{
									HX_STACK_LINE(266)
									if (((order == (int)3))){
										HX_STACK_LINE(266)
										_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",266,0x23671680)
												{
													HX_STACK_LINE(266)
													Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(266)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(266)
										_y = ::Math_obj::asin(_Function_10_1::Block(this));
										HX_STACK_LINE(266)
										_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
									}
									else{
										HX_STACK_LINE(266)
										if (((order == (int)4))){
											HX_STACK_LINE(266)
											_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(266)
											_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",266,0x23671680)
													{
														HX_STACK_LINE(266)
														Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(266)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(266)
											_z = ::Math_obj::asin(_Function_11_1::Block(this));
										}
										else{
											HX_STACK_LINE(266)
											if (((order == (int)5))){
												HX_STACK_LINE(266)
												_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
												HX_STACK_LINE(266)
												_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
												struct _Function_12_1{
													inline static Float Block( ::phoenix::Quaternion_obj *__this){
														HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",266,0x23671680)
														{
															HX_STACK_LINE(266)
															Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
															HX_STACK_LINE(266)
															return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
														}
														return null();
													}
												};
												HX_STACK_LINE(266)
												_z = ::Math_obj::asin(_Function_12_1::Block(this));
											}
										}
									}
								}
							}
						}
						HX_STACK_LINE(266)
						{
							HX_STACK_LINE(266)
							Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
							HX_STACK_LINE(266)
							Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
							HX_STACK_LINE(266)
							Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
							HX_STACK_LINE(266)
							bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
							HX_STACK_LINE(266)
							_this->ignore_listeners = true;
							HX_STACK_LINE(266)
							{
								HX_STACK_LINE(266)
								_this->x = _x1;
								HX_STACK_LINE(266)
								if ((_this->_construct)){
									HX_STACK_LINE(266)
									_this->x;
								}
								else{
									HX_STACK_LINE(266)
									if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(266)
										_this->listen_x(_x1);
									}
									HX_STACK_LINE(266)
									_this->x;
								}
							}
							HX_STACK_LINE(266)
							{
								HX_STACK_LINE(266)
								_this->y = _y1;
								HX_STACK_LINE(266)
								if ((_this->_construct)){
									HX_STACK_LINE(266)
									_this->y;
								}
								else{
									HX_STACK_LINE(266)
									if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(266)
										_this->listen_y(_y1);
									}
									HX_STACK_LINE(266)
									_this->y;
								}
							}
							HX_STACK_LINE(266)
							{
								HX_STACK_LINE(266)
								_this->z = _z1;
								HX_STACK_LINE(266)
								if ((_this->_construct)){
									HX_STACK_LINE(266)
									_this->z;
								}
								else{
									HX_STACK_LINE(266)
									if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(266)
										_this->listen_z(_z1);
									}
									HX_STACK_LINE(266)
									_this->z;
								}
							}
							HX_STACK_LINE(266)
							_this->ignore_listeners = prev;
							HX_STACK_LINE(266)
							if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(266)
								_this->listen_x(_this->x);
							}
							HX_STACK_LINE(266)
							if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(266)
								_this->listen_y(_this->y);
							}
							HX_STACK_LINE(266)
							if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(266)
								_this->listen_z(_this->z);
							}
							HX_STACK_LINE(266)
							_this;
						}
						HX_STACK_LINE(266)
						_this;
					}
					HX_STACK_LINE(266)
					if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(266)
						this->listen_z(this->z);
					}
					HX_STACK_LINE(266)
					this->z;
				}
			}
			HX_STACK_LINE(266)
			{
				HX_STACK_LINE(266)
				this->w = (this->w * l);
				HX_STACK_LINE(266)
				if ((this->_construct)){
					HX_STACK_LINE(266)
					this->w;
				}
				else{
					HX_STACK_LINE(266)
					if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
						HX_STACK_LINE(266)
						Dynamic();
					}
					else{
						HX_STACK_LINE(266)
						::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(266)
						int order = (int)0;		HX_STACK_VAR(order,"order");
						HX_STACK_LINE(266)
						Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
						HX_STACK_LINE(266)
						Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
						HX_STACK_LINE(266)
						Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
						HX_STACK_LINE(266)
						Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
						HX_STACK_LINE(266)
						Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
						HX_STACK_LINE(266)
						Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
						HX_STACK_LINE(266)
						Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
						HX_STACK_LINE(266)
						if (((order == (int)0))){
							HX_STACK_LINE(266)
							_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",266,0x23671680)
									{
										HX_STACK_LINE(266)
										Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(266)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(266)
							_y = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(266)
							_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
						}
						else{
							HX_STACK_LINE(266)
							if (((order == (int)1))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",266,0x23671680)
										{
											HX_STACK_LINE(266)
											Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(266)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(266)
								_x = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(266)
								_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(266)
								_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(266)
								if (((order == (int)2))){
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",266,0x23671680)
											{
												HX_STACK_LINE(266)
												Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(266)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(266)
									_x = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(266)
									_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
									HX_STACK_LINE(266)
									_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
								}
								else{
									HX_STACK_LINE(266)
									if (((order == (int)3))){
										HX_STACK_LINE(266)
										_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",266,0x23671680)
												{
													HX_STACK_LINE(266)
													Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(266)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(266)
										_y = ::Math_obj::asin(_Function_10_1::Block(this));
										HX_STACK_LINE(266)
										_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
									}
									else{
										HX_STACK_LINE(266)
										if (((order == (int)4))){
											HX_STACK_LINE(266)
											_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(266)
											_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",266,0x23671680)
													{
														HX_STACK_LINE(266)
														Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(266)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(266)
											_z = ::Math_obj::asin(_Function_11_1::Block(this));
										}
										else{
											HX_STACK_LINE(266)
											if (((order == (int)5))){
												HX_STACK_LINE(266)
												_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
												HX_STACK_LINE(266)
												_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
												struct _Function_12_1{
													inline static Float Block( ::phoenix::Quaternion_obj *__this){
														HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",266,0x23671680)
														{
															HX_STACK_LINE(266)
															Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
															HX_STACK_LINE(266)
															return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
														}
														return null();
													}
												};
												HX_STACK_LINE(266)
												_z = ::Math_obj::asin(_Function_12_1::Block(this));
											}
										}
									}
								}
							}
						}
						HX_STACK_LINE(266)
						{
							HX_STACK_LINE(266)
							Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
							HX_STACK_LINE(266)
							Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
							HX_STACK_LINE(266)
							Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
							HX_STACK_LINE(266)
							bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
							HX_STACK_LINE(266)
							_this->ignore_listeners = true;
							HX_STACK_LINE(266)
							{
								HX_STACK_LINE(266)
								_this->x = _x1;
								HX_STACK_LINE(266)
								if ((_this->_construct)){
									HX_STACK_LINE(266)
									_this->x;
								}
								else{
									HX_STACK_LINE(266)
									if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(266)
										_this->listen_x(_x1);
									}
									HX_STACK_LINE(266)
									_this->x;
								}
							}
							HX_STACK_LINE(266)
							{
								HX_STACK_LINE(266)
								_this->y = _y1;
								HX_STACK_LINE(266)
								if ((_this->_construct)){
									HX_STACK_LINE(266)
									_this->y;
								}
								else{
									HX_STACK_LINE(266)
									if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(266)
										_this->listen_y(_y1);
									}
									HX_STACK_LINE(266)
									_this->y;
								}
							}
							HX_STACK_LINE(266)
							{
								HX_STACK_LINE(266)
								_this->z = _z1;
								HX_STACK_LINE(266)
								if ((_this->_construct)){
									HX_STACK_LINE(266)
									_this->z;
								}
								else{
									HX_STACK_LINE(266)
									if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(266)
										_this->listen_z(_z1);
									}
									HX_STACK_LINE(266)
									_this->z;
								}
							}
							HX_STACK_LINE(266)
							_this->ignore_listeners = prev;
							HX_STACK_LINE(266)
							if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(266)
								_this->listen_x(_this->x);
							}
							HX_STACK_LINE(266)
							if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(266)
								_this->listen_y(_this->y);
							}
							HX_STACK_LINE(266)
							if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(266)
								_this->listen_z(_this->z);
							}
							HX_STACK_LINE(266)
							_this;
						}
						HX_STACK_LINE(266)
						_this;
					}
					HX_STACK_LINE(266)
					if (((bool((this->listen_w_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(266)
						this->listen_w(this->w);
					}
					HX_STACK_LINE(266)
					this->w;
				}
			}
			HX_STACK_LINE(266)
			this->ignore_euler = false;
			HX_STACK_LINE(266)
			if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
				HX_STACK_LINE(266)
				Dynamic();
			}
			else{
				HX_STACK_LINE(266)
				::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(266)
				int order = (int)0;		HX_STACK_VAR(order,"order");
				HX_STACK_LINE(266)
				Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
				HX_STACK_LINE(266)
				Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
				HX_STACK_LINE(266)
				Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
				HX_STACK_LINE(266)
				Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
				HX_STACK_LINE(266)
				Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(266)
				Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(266)
				Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(266)
				if (((order == (int)0))){
					HX_STACK_LINE(266)
					_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
					struct _Function_5_1{
						inline static Float Block( ::phoenix::Quaternion_obj *__this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",266,0x23671680)
							{
								HX_STACK_LINE(266)
								Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(266)
								return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(266)
					_y = ::Math_obj::asin(_Function_5_1::Block(this));
					HX_STACK_LINE(266)
					_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
				}
				else{
					HX_STACK_LINE(266)
					if (((order == (int)1))){
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",266,0x23671680)
								{
									HX_STACK_LINE(266)
									Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(266)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(266)
						_x = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(266)
						_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
						HX_STACK_LINE(266)
						_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
					}
					else{
						HX_STACK_LINE(266)
						if (((order == (int)2))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",266,0x23671680)
									{
										HX_STACK_LINE(266)
										Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(266)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(266)
							_x = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(266)
							_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(266)
							_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(266)
							if (((order == (int)3))){
								HX_STACK_LINE(266)
								_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",266,0x23671680)
										{
											HX_STACK_LINE(266)
											Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(266)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(266)
								_y = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(266)
								_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
							}
							else{
								HX_STACK_LINE(266)
								if (((order == (int)4))){
									HX_STACK_LINE(266)
									_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
									HX_STACK_LINE(266)
									_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",266,0x23671680)
											{
												HX_STACK_LINE(266)
												Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(266)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(266)
									_z = ::Math_obj::asin(_Function_9_1::Block(this));
								}
								else{
									HX_STACK_LINE(266)
									if (((order == (int)5))){
										HX_STACK_LINE(266)
										_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(266)
										_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",266,0x23671680)
												{
													HX_STACK_LINE(266)
													Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(266)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(266)
										_z = ::Math_obj::asin(_Function_10_1::Block(this));
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(266)
				{
					HX_STACK_LINE(266)
					Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(266)
					Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(266)
					Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(266)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(266)
					_this->ignore_listeners = true;
					HX_STACK_LINE(266)
					{
						HX_STACK_LINE(266)
						_this->x = _x1;
						HX_STACK_LINE(266)
						if ((_this->_construct)){
							HX_STACK_LINE(266)
							_this->x;
						}
						else{
							HX_STACK_LINE(266)
							if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(266)
								_this->listen_x(_x1);
							}
							HX_STACK_LINE(266)
							_this->x;
						}
					}
					HX_STACK_LINE(266)
					{
						HX_STACK_LINE(266)
						_this->y = _y1;
						HX_STACK_LINE(266)
						if ((_this->_construct)){
							HX_STACK_LINE(266)
							_this->y;
						}
						else{
							HX_STACK_LINE(266)
							if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(266)
								_this->listen_y(_y1);
							}
							HX_STACK_LINE(266)
							_this->y;
						}
					}
					HX_STACK_LINE(266)
					{
						HX_STACK_LINE(266)
						_this->z = _z1;
						HX_STACK_LINE(266)
						if ((_this->_construct)){
							HX_STACK_LINE(266)
							_this->z;
						}
						else{
							HX_STACK_LINE(266)
							if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(266)
								_this->listen_z(_z1);
							}
							HX_STACK_LINE(266)
							_this->z;
						}
					}
					HX_STACK_LINE(266)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(266)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(266)
						_this->listen_x(_this->x);
					}
					HX_STACK_LINE(266)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(266)
						_this->listen_y(_this->y);
					}
					HX_STACK_LINE(266)
					if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(266)
						_this->listen_z(_this->z);
					}
					HX_STACK_LINE(266)
					_this;
				}
				HX_STACK_LINE(266)
				_this;
			}
			HX_STACK_LINE(266)
			if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(266)
				this->listen_x(this->x);
			}
			HX_STACK_LINE(266)
			if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(266)
				this->listen_y(this->y);
			}
			HX_STACK_LINE(266)
			if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(266)
				this->listen_z(this->z);
			}
			HX_STACK_LINE(266)
			if (((bool((this->listen_w_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(266)
				this->listen_w(this->w);
			}
		}
	}
	HX_STACK_LINE(270)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,normalize,return )

::phoenix::Quaternion Quaternion_obj::multiply( ::phoenix::Quaternion _quaternion){
	HX_STACK_FRAME("phoenix.Quaternion","multiply",0x47312cf5,"phoenix.Quaternion.multiply","phoenix/Quaternion.hx",288,0x23671680)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_quaternion,"_quaternion")
	HX_STACK_LINE(288)
	return this->multiplyQuaternions(hx::ObjectPtr<OBJ_>(this),_quaternion);
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,multiply,return )

::phoenix::Quaternion Quaternion_obj::add( ::phoenix::Quaternion _quaternion){
	HX_STACK_FRAME("phoenix.Quaternion","add",0x41cb98f0,"phoenix.Quaternion.add","phoenix/Quaternion.hx",294,0x23671680)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_quaternion,"_quaternion")
	HX_STACK_LINE(294)
	return this->addQuaternions(hx::ObjectPtr<OBJ_>(this),_quaternion);
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,add,return )

::phoenix::Quaternion Quaternion_obj::addQuaternions( ::phoenix::Quaternion _a,::phoenix::Quaternion _b){
	HX_STACK_FRAME("phoenix.Quaternion","addQuaternions",0xb1d63285,"phoenix.Quaternion.addQuaternions","phoenix/Quaternion.hx",298,0x23671680)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_a,"_a")
	HX_STACK_ARG(_b,"_b")
	HX_STACK_LINE(300)
	{
		HX_STACK_LINE(300)
		this->x = (_a->x + _b->x);
		HX_STACK_LINE(300)
		if ((this->_construct)){
			HX_STACK_LINE(300)
			this->x;
		}
		else{
			HX_STACK_LINE(300)
			if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
				HX_STACK_LINE(300)
				Dynamic();
			}
			else{
				HX_STACK_LINE(300)
				::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(300)
				int order = (int)0;		HX_STACK_VAR(order,"order");
				HX_STACK_LINE(300)
				Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
				HX_STACK_LINE(300)
				Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
				HX_STACK_LINE(300)
				Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
				HX_STACK_LINE(300)
				Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
				HX_STACK_LINE(300)
				Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(300)
				Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(300)
				Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(300)
				if (((order == (int)0))){
					HX_STACK_LINE(300)
					_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
					struct _Function_5_1{
						inline static Float Block( ::phoenix::Quaternion_obj *__this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",300,0x23671680)
							{
								HX_STACK_LINE(300)
								Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(300)
								return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(300)
					_y = ::Math_obj::asin(_Function_5_1::Block(this));
					HX_STACK_LINE(300)
					_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
				}
				else{
					HX_STACK_LINE(300)
					if (((order == (int)1))){
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",300,0x23671680)
								{
									HX_STACK_LINE(300)
									Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(300)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(300)
						_x = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(300)
						_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
						HX_STACK_LINE(300)
						_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
					}
					else{
						HX_STACK_LINE(300)
						if (((order == (int)2))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",300,0x23671680)
									{
										HX_STACK_LINE(300)
										Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(300)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(300)
							_x = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(300)
							_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(300)
							_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(300)
							if (((order == (int)3))){
								HX_STACK_LINE(300)
								_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",300,0x23671680)
										{
											HX_STACK_LINE(300)
											Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(300)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(300)
								_y = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(300)
								_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
							}
							else{
								HX_STACK_LINE(300)
								if (((order == (int)4))){
									HX_STACK_LINE(300)
									_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
									HX_STACK_LINE(300)
									_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",300,0x23671680)
											{
												HX_STACK_LINE(300)
												Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(300)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(300)
									_z = ::Math_obj::asin(_Function_9_1::Block(this));
								}
								else{
									HX_STACK_LINE(300)
									if (((order == (int)5))){
										HX_STACK_LINE(300)
										_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(300)
										_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",300,0x23671680)
												{
													HX_STACK_LINE(300)
													Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(300)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(300)
										_z = ::Math_obj::asin(_Function_10_1::Block(this));
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(300)
				{
					HX_STACK_LINE(300)
					Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(300)
					Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(300)
					Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(300)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(300)
					_this->ignore_listeners = true;
					HX_STACK_LINE(300)
					{
						HX_STACK_LINE(300)
						_this->x = _x1;
						HX_STACK_LINE(300)
						if ((_this->_construct)){
							HX_STACK_LINE(300)
							_this->x;
						}
						else{
							HX_STACK_LINE(300)
							if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(300)
								_this->listen_x(_x1);
							}
							HX_STACK_LINE(300)
							_this->x;
						}
					}
					HX_STACK_LINE(300)
					{
						HX_STACK_LINE(300)
						_this->y = _y1;
						HX_STACK_LINE(300)
						if ((_this->_construct)){
							HX_STACK_LINE(300)
							_this->y;
						}
						else{
							HX_STACK_LINE(300)
							if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(300)
								_this->listen_y(_y1);
							}
							HX_STACK_LINE(300)
							_this->y;
						}
					}
					HX_STACK_LINE(300)
					{
						HX_STACK_LINE(300)
						_this->z = _z1;
						HX_STACK_LINE(300)
						if ((_this->_construct)){
							HX_STACK_LINE(300)
							_this->z;
						}
						else{
							HX_STACK_LINE(300)
							if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(300)
								_this->listen_z(_z1);
							}
							HX_STACK_LINE(300)
							_this->z;
						}
					}
					HX_STACK_LINE(300)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(300)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(300)
						_this->listen_x(_this->x);
					}
					HX_STACK_LINE(300)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(300)
						_this->listen_y(_this->y);
					}
					HX_STACK_LINE(300)
					if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(300)
						_this->listen_z(_this->z);
					}
					HX_STACK_LINE(300)
					_this;
				}
				HX_STACK_LINE(300)
				_this;
			}
			HX_STACK_LINE(300)
			if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(300)
				this->listen_x(this->x);
			}
			HX_STACK_LINE(300)
			this->x;
		}
	}
	HX_STACK_LINE(301)
	{
		HX_STACK_LINE(301)
		this->y = (_a->y + _b->y);
		HX_STACK_LINE(301)
		if ((this->_construct)){
			HX_STACK_LINE(301)
			this->y;
		}
		else{
			HX_STACK_LINE(301)
			if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
				HX_STACK_LINE(301)
				Dynamic();
			}
			else{
				HX_STACK_LINE(301)
				::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(301)
				int order = (int)0;		HX_STACK_VAR(order,"order");
				HX_STACK_LINE(301)
				Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
				HX_STACK_LINE(301)
				Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
				HX_STACK_LINE(301)
				Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
				HX_STACK_LINE(301)
				Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
				HX_STACK_LINE(301)
				Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(301)
				Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(301)
				Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(301)
				if (((order == (int)0))){
					HX_STACK_LINE(301)
					_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
					struct _Function_5_1{
						inline static Float Block( ::phoenix::Quaternion_obj *__this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",301,0x23671680)
							{
								HX_STACK_LINE(301)
								Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(301)
								return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(301)
					_y = ::Math_obj::asin(_Function_5_1::Block(this));
					HX_STACK_LINE(301)
					_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
				}
				else{
					HX_STACK_LINE(301)
					if (((order == (int)1))){
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",301,0x23671680)
								{
									HX_STACK_LINE(301)
									Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(301)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(301)
						_x = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(301)
						_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
						HX_STACK_LINE(301)
						_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
					}
					else{
						HX_STACK_LINE(301)
						if (((order == (int)2))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",301,0x23671680)
									{
										HX_STACK_LINE(301)
										Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(301)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(301)
							_x = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(301)
							_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(301)
							_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(301)
							if (((order == (int)3))){
								HX_STACK_LINE(301)
								_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",301,0x23671680)
										{
											HX_STACK_LINE(301)
											Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(301)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(301)
								_y = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(301)
								_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
							}
							else{
								HX_STACK_LINE(301)
								if (((order == (int)4))){
									HX_STACK_LINE(301)
									_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
									HX_STACK_LINE(301)
									_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",301,0x23671680)
											{
												HX_STACK_LINE(301)
												Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(301)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(301)
									_z = ::Math_obj::asin(_Function_9_1::Block(this));
								}
								else{
									HX_STACK_LINE(301)
									if (((order == (int)5))){
										HX_STACK_LINE(301)
										_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(301)
										_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",301,0x23671680)
												{
													HX_STACK_LINE(301)
													Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(301)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(301)
										_z = ::Math_obj::asin(_Function_10_1::Block(this));
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(301)
				{
					HX_STACK_LINE(301)
					Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(301)
					Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(301)
					Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(301)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(301)
					_this->ignore_listeners = true;
					HX_STACK_LINE(301)
					{
						HX_STACK_LINE(301)
						_this->x = _x1;
						HX_STACK_LINE(301)
						if ((_this->_construct)){
							HX_STACK_LINE(301)
							_this->x;
						}
						else{
							HX_STACK_LINE(301)
							if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(301)
								_this->listen_x(_x1);
							}
							HX_STACK_LINE(301)
							_this->x;
						}
					}
					HX_STACK_LINE(301)
					{
						HX_STACK_LINE(301)
						_this->y = _y1;
						HX_STACK_LINE(301)
						if ((_this->_construct)){
							HX_STACK_LINE(301)
							_this->y;
						}
						else{
							HX_STACK_LINE(301)
							if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(301)
								_this->listen_y(_y1);
							}
							HX_STACK_LINE(301)
							_this->y;
						}
					}
					HX_STACK_LINE(301)
					{
						HX_STACK_LINE(301)
						_this->z = _z1;
						HX_STACK_LINE(301)
						if ((_this->_construct)){
							HX_STACK_LINE(301)
							_this->z;
						}
						else{
							HX_STACK_LINE(301)
							if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(301)
								_this->listen_z(_z1);
							}
							HX_STACK_LINE(301)
							_this->z;
						}
					}
					HX_STACK_LINE(301)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(301)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(301)
						_this->listen_x(_this->x);
					}
					HX_STACK_LINE(301)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(301)
						_this->listen_y(_this->y);
					}
					HX_STACK_LINE(301)
					if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(301)
						_this->listen_z(_this->z);
					}
					HX_STACK_LINE(301)
					_this;
				}
				HX_STACK_LINE(301)
				_this;
			}
			HX_STACK_LINE(301)
			if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(301)
				this->listen_y(this->y);
			}
			HX_STACK_LINE(301)
			this->y;
		}
	}
	HX_STACK_LINE(302)
	{
		HX_STACK_LINE(302)
		this->z = (_a->z + _b->z);
		HX_STACK_LINE(302)
		if ((this->_construct)){
			HX_STACK_LINE(302)
			this->z;
		}
		else{
			HX_STACK_LINE(302)
			if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
				HX_STACK_LINE(302)
				Dynamic();
			}
			else{
				HX_STACK_LINE(302)
				::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(302)
				int order = (int)0;		HX_STACK_VAR(order,"order");
				HX_STACK_LINE(302)
				Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
				HX_STACK_LINE(302)
				Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
				HX_STACK_LINE(302)
				Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
				HX_STACK_LINE(302)
				Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
				HX_STACK_LINE(302)
				Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(302)
				Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(302)
				Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(302)
				if (((order == (int)0))){
					HX_STACK_LINE(302)
					_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
					struct _Function_5_1{
						inline static Float Block( ::phoenix::Quaternion_obj *__this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",302,0x23671680)
							{
								HX_STACK_LINE(302)
								Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(302)
								return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(302)
					_y = ::Math_obj::asin(_Function_5_1::Block(this));
					HX_STACK_LINE(302)
					_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
				}
				else{
					HX_STACK_LINE(302)
					if (((order == (int)1))){
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",302,0x23671680)
								{
									HX_STACK_LINE(302)
									Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(302)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(302)
						_x = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(302)
						_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
						HX_STACK_LINE(302)
						_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
					}
					else{
						HX_STACK_LINE(302)
						if (((order == (int)2))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",302,0x23671680)
									{
										HX_STACK_LINE(302)
										Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(302)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(302)
							_x = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(302)
							_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(302)
							_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(302)
							if (((order == (int)3))){
								HX_STACK_LINE(302)
								_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",302,0x23671680)
										{
											HX_STACK_LINE(302)
											Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(302)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(302)
								_y = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(302)
								_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
							}
							else{
								HX_STACK_LINE(302)
								if (((order == (int)4))){
									HX_STACK_LINE(302)
									_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
									HX_STACK_LINE(302)
									_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",302,0x23671680)
											{
												HX_STACK_LINE(302)
												Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(302)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(302)
									_z = ::Math_obj::asin(_Function_9_1::Block(this));
								}
								else{
									HX_STACK_LINE(302)
									if (((order == (int)5))){
										HX_STACK_LINE(302)
										_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(302)
										_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",302,0x23671680)
												{
													HX_STACK_LINE(302)
													Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(302)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(302)
										_z = ::Math_obj::asin(_Function_10_1::Block(this));
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(302)
				{
					HX_STACK_LINE(302)
					Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(302)
					Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(302)
					Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(302)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(302)
					_this->ignore_listeners = true;
					HX_STACK_LINE(302)
					{
						HX_STACK_LINE(302)
						_this->x = _x1;
						HX_STACK_LINE(302)
						if ((_this->_construct)){
							HX_STACK_LINE(302)
							_this->x;
						}
						else{
							HX_STACK_LINE(302)
							if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(302)
								_this->listen_x(_x1);
							}
							HX_STACK_LINE(302)
							_this->x;
						}
					}
					HX_STACK_LINE(302)
					{
						HX_STACK_LINE(302)
						_this->y = _y1;
						HX_STACK_LINE(302)
						if ((_this->_construct)){
							HX_STACK_LINE(302)
							_this->y;
						}
						else{
							HX_STACK_LINE(302)
							if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(302)
								_this->listen_y(_y1);
							}
							HX_STACK_LINE(302)
							_this->y;
						}
					}
					HX_STACK_LINE(302)
					{
						HX_STACK_LINE(302)
						_this->z = _z1;
						HX_STACK_LINE(302)
						if ((_this->_construct)){
							HX_STACK_LINE(302)
							_this->z;
						}
						else{
							HX_STACK_LINE(302)
							if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(302)
								_this->listen_z(_z1);
							}
							HX_STACK_LINE(302)
							_this->z;
						}
					}
					HX_STACK_LINE(302)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(302)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(302)
						_this->listen_x(_this->x);
					}
					HX_STACK_LINE(302)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(302)
						_this->listen_y(_this->y);
					}
					HX_STACK_LINE(302)
					if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(302)
						_this->listen_z(_this->z);
					}
					HX_STACK_LINE(302)
					_this;
				}
				HX_STACK_LINE(302)
				_this;
			}
			HX_STACK_LINE(302)
			if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(302)
				this->listen_z(this->z);
			}
			HX_STACK_LINE(302)
			this->z;
		}
	}
	HX_STACK_LINE(303)
	{
		HX_STACK_LINE(303)
		this->w = (_a->w + _b->w);
		HX_STACK_LINE(303)
		if ((this->_construct)){
			HX_STACK_LINE(303)
			this->w;
		}
		else{
			HX_STACK_LINE(303)
			if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
				HX_STACK_LINE(303)
				Dynamic();
			}
			else{
				HX_STACK_LINE(303)
				::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(303)
				int order = (int)0;		HX_STACK_VAR(order,"order");
				HX_STACK_LINE(303)
				Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
				HX_STACK_LINE(303)
				Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
				HX_STACK_LINE(303)
				Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
				HX_STACK_LINE(303)
				Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
				HX_STACK_LINE(303)
				Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
				HX_STACK_LINE(303)
				Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
				HX_STACK_LINE(303)
				Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
				HX_STACK_LINE(303)
				if (((order == (int)0))){
					HX_STACK_LINE(303)
					_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
					struct _Function_5_1{
						inline static Float Block( ::phoenix::Quaternion_obj *__this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",303,0x23671680)
							{
								HX_STACK_LINE(303)
								Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(303)
								return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(303)
					_y = ::Math_obj::asin(_Function_5_1::Block(this));
					HX_STACK_LINE(303)
					_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
				}
				else{
					HX_STACK_LINE(303)
					if (((order == (int)1))){
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",303,0x23671680)
								{
									HX_STACK_LINE(303)
									Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(303)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(303)
						_x = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(303)
						_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
						HX_STACK_LINE(303)
						_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
					}
					else{
						HX_STACK_LINE(303)
						if (((order == (int)2))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",303,0x23671680)
									{
										HX_STACK_LINE(303)
										Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(303)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(303)
							_x = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(303)
							_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(303)
							_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(303)
							if (((order == (int)3))){
								HX_STACK_LINE(303)
								_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",303,0x23671680)
										{
											HX_STACK_LINE(303)
											Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(303)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(303)
								_y = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(303)
								_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
							}
							else{
								HX_STACK_LINE(303)
								if (((order == (int)4))){
									HX_STACK_LINE(303)
									_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
									HX_STACK_LINE(303)
									_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",303,0x23671680)
											{
												HX_STACK_LINE(303)
												Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(303)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(303)
									_z = ::Math_obj::asin(_Function_9_1::Block(this));
								}
								else{
									HX_STACK_LINE(303)
									if (((order == (int)5))){
										HX_STACK_LINE(303)
										_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(303)
										_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",303,0x23671680)
												{
													HX_STACK_LINE(303)
													Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(303)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(303)
										_z = ::Math_obj::asin(_Function_10_1::Block(this));
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(303)
				{
					HX_STACK_LINE(303)
					Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(303)
					Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(303)
					Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(303)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(303)
					_this->ignore_listeners = true;
					HX_STACK_LINE(303)
					{
						HX_STACK_LINE(303)
						_this->x = _x1;
						HX_STACK_LINE(303)
						if ((_this->_construct)){
							HX_STACK_LINE(303)
							_this->x;
						}
						else{
							HX_STACK_LINE(303)
							if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(303)
								_this->listen_x(_x1);
							}
							HX_STACK_LINE(303)
							_this->x;
						}
					}
					HX_STACK_LINE(303)
					{
						HX_STACK_LINE(303)
						_this->y = _y1;
						HX_STACK_LINE(303)
						if ((_this->_construct)){
							HX_STACK_LINE(303)
							_this->y;
						}
						else{
							HX_STACK_LINE(303)
							if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(303)
								_this->listen_y(_y1);
							}
							HX_STACK_LINE(303)
							_this->y;
						}
					}
					HX_STACK_LINE(303)
					{
						HX_STACK_LINE(303)
						_this->z = _z1;
						HX_STACK_LINE(303)
						if ((_this->_construct)){
							HX_STACK_LINE(303)
							_this->z;
						}
						else{
							HX_STACK_LINE(303)
							if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(303)
								_this->listen_z(_z1);
							}
							HX_STACK_LINE(303)
							_this->z;
						}
					}
					HX_STACK_LINE(303)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(303)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(303)
						_this->listen_x(_this->x);
					}
					HX_STACK_LINE(303)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(303)
						_this->listen_y(_this->y);
					}
					HX_STACK_LINE(303)
					if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(303)
						_this->listen_z(_this->z);
					}
					HX_STACK_LINE(303)
					_this;
				}
				HX_STACK_LINE(303)
				_this;
			}
			HX_STACK_LINE(303)
			if (((bool((this->listen_w_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(303)
				this->listen_w(this->w);
			}
			HX_STACK_LINE(303)
			this->w;
		}
	}
	HX_STACK_LINE(305)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,addQuaternions,return )

::phoenix::Quaternion Quaternion_obj::multiplyScalar( Float _scalar){
	HX_STACK_FRAME("phoenix.Quaternion","multiplyScalar",0x2f1f2e01,"phoenix.Quaternion.multiplyScalar","phoenix/Quaternion.hx",309,0x23671680)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_scalar,"_scalar")
	HX_STACK_LINE(311)
	{
		HX_STACK_LINE(311)
		::phoenix::Quaternion _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(311)
		{
			HX_STACK_LINE(311)
			_g->x = (_g->x * _scalar);
			HX_STACK_LINE(311)
			if ((_g->_construct)){
				HX_STACK_LINE(311)
				_g->x;
			}
			else{
				HX_STACK_LINE(311)
				if (((bool((bool((_g->euler == null())) || bool(_g->ignore_euler))) || bool(_g->_construct)))){
					HX_STACK_LINE(311)
					Dynamic();
				}
				else{
					HX_STACK_LINE(311)
					::phoenix::Vector _this = _g->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(311)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(311)
					Float sqx = (_g->x * _g->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(311)
					Float sqy = (_g->y * _g->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(311)
					Float sqz = (_g->z * _g->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(311)
					Float sqw = (_g->w * _g->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(311)
					Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(311)
					Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(311)
					Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(311)
					if (((order == (int)0))){
						HX_STACK_LINE(311)
						_x = ::Math_obj::atan2(((int)2 * (((_g->x * _g->w) - (_g->y * _g->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion &_g){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",311,0x23671680)
								{
									HX_STACK_LINE(311)
									Float value = ((int)2 * (((_g->x * _g->z) + (_g->y * _g->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(311)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(311)
						_y = ::Math_obj::asin(_Function_6_1::Block(_g));
						HX_STACK_LINE(311)
						_z = ::Math_obj::atan2(((int)2 * (((_g->z * _g->w) - (_g->x * _g->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(311)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion &_g){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",311,0x23671680)
									{
										HX_STACK_LINE(311)
										Float value = ((int)2 * (((_g->x * _g->w) - (_g->y * _g->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(311)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(311)
							_x = ::Math_obj::asin(_Function_7_1::Block(_g));
							HX_STACK_LINE(311)
							_y = ::Math_obj::atan2(((int)2 * (((_g->x * _g->z) + (_g->y * _g->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(311)
							_z = ::Math_obj::atan2(((int)2 * (((_g->x * _g->y) + (_g->z * _g->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(311)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion &_g){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",311,0x23671680)
										{
											HX_STACK_LINE(311)
											Float value = ((int)2 * (((_g->x * _g->w) + (_g->y * _g->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(311)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(311)
								_x = ::Math_obj::asin(_Function_8_1::Block(_g));
								HX_STACK_LINE(311)
								_y = ::Math_obj::atan2(((int)2 * (((_g->y * _g->w) - (_g->z * _g->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(311)
								_z = ::Math_obj::atan2(((int)2 * (((_g->z * _g->w) - (_g->x * _g->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(311)
								if (((order == (int)3))){
									HX_STACK_LINE(311)
									_x = ::Math_obj::atan2(((int)2 * (((_g->x * _g->w) + (_g->z * _g->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion &_g){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",311,0x23671680)
											{
												HX_STACK_LINE(311)
												Float value = ((int)2 * (((_g->y * _g->w) - (_g->x * _g->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(311)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(311)
									_y = ::Math_obj::asin(_Function_9_1::Block(_g));
									HX_STACK_LINE(311)
									_z = ::Math_obj::atan2(((int)2 * (((_g->x * _g->y) + (_g->z * _g->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(311)
									if (((order == (int)4))){
										HX_STACK_LINE(311)
										_x = ::Math_obj::atan2(((int)2 * (((_g->x * _g->w) - (_g->z * _g->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(311)
										_y = ::Math_obj::atan2(((int)2 * (((_g->y * _g->w) - (_g->x * _g->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion &_g){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",311,0x23671680)
												{
													HX_STACK_LINE(311)
													Float value = ((int)2 * (((_g->x * _g->y) + (_g->z * _g->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(311)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(311)
										_z = ::Math_obj::asin(_Function_10_1::Block(_g));
									}
									else{
										HX_STACK_LINE(311)
										if (((order == (int)5))){
											HX_STACK_LINE(311)
											_x = ::Math_obj::atan2(((int)2 * (((_g->x * _g->w) + (_g->y * _g->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(311)
											_y = ::Math_obj::atan2(((int)2 * (((_g->x * _g->z) + (_g->y * _g->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion &_g){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",311,0x23671680)
													{
														HX_STACK_LINE(311)
														Float value = ((int)2 * (((_g->z * _g->w) - (_g->x * _g->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(311)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(311)
											_z = ::Math_obj::asin(_Function_11_1::Block(_g));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(311)
					{
						HX_STACK_LINE(311)
						Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(311)
						Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(311)
						Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(311)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(311)
						_this->ignore_listeners = true;
						HX_STACK_LINE(311)
						{
							HX_STACK_LINE(311)
							_this->x = _x1;
							HX_STACK_LINE(311)
							if ((_this->_construct)){
								HX_STACK_LINE(311)
								_this->x;
							}
							else{
								HX_STACK_LINE(311)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(311)
									_this->listen_x(_x1);
								}
								HX_STACK_LINE(311)
								_this->x;
							}
						}
						HX_STACK_LINE(311)
						{
							HX_STACK_LINE(311)
							_this->y = _y1;
							HX_STACK_LINE(311)
							if ((_this->_construct)){
								HX_STACK_LINE(311)
								_this->y;
							}
							else{
								HX_STACK_LINE(311)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(311)
									_this->listen_y(_y1);
								}
								HX_STACK_LINE(311)
								_this->y;
							}
						}
						HX_STACK_LINE(311)
						{
							HX_STACK_LINE(311)
							_this->z = _z1;
							HX_STACK_LINE(311)
							if ((_this->_construct)){
								HX_STACK_LINE(311)
								_this->z;
							}
							else{
								HX_STACK_LINE(311)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(311)
									_this->listen_z(_z1);
								}
								HX_STACK_LINE(311)
								_this->z;
							}
						}
						HX_STACK_LINE(311)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(311)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(311)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(311)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(311)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(311)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(311)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(311)
						_this;
					}
					HX_STACK_LINE(311)
					_this;
				}
				HX_STACK_LINE(311)
				if (((bool((_g->listen_x != null())) && bool(!(_g->ignore_listeners))))){
					HX_STACK_LINE(311)
					_g->listen_x(_g->x);
				}
				HX_STACK_LINE(311)
				_g->x;
			}
		}
	}
	HX_STACK_LINE(312)
	{
		HX_STACK_LINE(312)
		::phoenix::Quaternion _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(312)
		{
			HX_STACK_LINE(312)
			_g->y = (_g->y * _scalar);
			HX_STACK_LINE(312)
			if ((_g->_construct)){
				HX_STACK_LINE(312)
				_g->y;
			}
			else{
				HX_STACK_LINE(312)
				if (((bool((bool((_g->euler == null())) || bool(_g->ignore_euler))) || bool(_g->_construct)))){
					HX_STACK_LINE(312)
					Dynamic();
				}
				else{
					HX_STACK_LINE(312)
					::phoenix::Vector _this = _g->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(312)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(312)
					Float sqx = (_g->x * _g->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(312)
					Float sqy = (_g->y * _g->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(312)
					Float sqz = (_g->z * _g->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(312)
					Float sqw = (_g->w * _g->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(312)
					Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(312)
					Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(312)
					Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(312)
					if (((order == (int)0))){
						HX_STACK_LINE(312)
						_x = ::Math_obj::atan2(((int)2 * (((_g->x * _g->w) - (_g->y * _g->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion &_g){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",312,0x23671680)
								{
									HX_STACK_LINE(312)
									Float value = ((int)2 * (((_g->x * _g->z) + (_g->y * _g->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(312)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(312)
						_y = ::Math_obj::asin(_Function_6_1::Block(_g));
						HX_STACK_LINE(312)
						_z = ::Math_obj::atan2(((int)2 * (((_g->z * _g->w) - (_g->x * _g->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(312)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion &_g){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",312,0x23671680)
									{
										HX_STACK_LINE(312)
										Float value = ((int)2 * (((_g->x * _g->w) - (_g->y * _g->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(312)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(312)
							_x = ::Math_obj::asin(_Function_7_1::Block(_g));
							HX_STACK_LINE(312)
							_y = ::Math_obj::atan2(((int)2 * (((_g->x * _g->z) + (_g->y * _g->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(312)
							_z = ::Math_obj::atan2(((int)2 * (((_g->x * _g->y) + (_g->z * _g->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(312)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion &_g){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",312,0x23671680)
										{
											HX_STACK_LINE(312)
											Float value = ((int)2 * (((_g->x * _g->w) + (_g->y * _g->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(312)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(312)
								_x = ::Math_obj::asin(_Function_8_1::Block(_g));
								HX_STACK_LINE(312)
								_y = ::Math_obj::atan2(((int)2 * (((_g->y * _g->w) - (_g->z * _g->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(312)
								_z = ::Math_obj::atan2(((int)2 * (((_g->z * _g->w) - (_g->x * _g->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(312)
								if (((order == (int)3))){
									HX_STACK_LINE(312)
									_x = ::Math_obj::atan2(((int)2 * (((_g->x * _g->w) + (_g->z * _g->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion &_g){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",312,0x23671680)
											{
												HX_STACK_LINE(312)
												Float value = ((int)2 * (((_g->y * _g->w) - (_g->x * _g->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(312)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(312)
									_y = ::Math_obj::asin(_Function_9_1::Block(_g));
									HX_STACK_LINE(312)
									_z = ::Math_obj::atan2(((int)2 * (((_g->x * _g->y) + (_g->z * _g->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(312)
									if (((order == (int)4))){
										HX_STACK_LINE(312)
										_x = ::Math_obj::atan2(((int)2 * (((_g->x * _g->w) - (_g->z * _g->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(312)
										_y = ::Math_obj::atan2(((int)2 * (((_g->y * _g->w) - (_g->x * _g->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion &_g){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",312,0x23671680)
												{
													HX_STACK_LINE(312)
													Float value = ((int)2 * (((_g->x * _g->y) + (_g->z * _g->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(312)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(312)
										_z = ::Math_obj::asin(_Function_10_1::Block(_g));
									}
									else{
										HX_STACK_LINE(312)
										if (((order == (int)5))){
											HX_STACK_LINE(312)
											_x = ::Math_obj::atan2(((int)2 * (((_g->x * _g->w) + (_g->y * _g->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(312)
											_y = ::Math_obj::atan2(((int)2 * (((_g->x * _g->z) + (_g->y * _g->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion &_g){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",312,0x23671680)
													{
														HX_STACK_LINE(312)
														Float value = ((int)2 * (((_g->z * _g->w) - (_g->x * _g->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(312)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(312)
											_z = ::Math_obj::asin(_Function_11_1::Block(_g));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(312)
					{
						HX_STACK_LINE(312)
						Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(312)
						Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(312)
						Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(312)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(312)
						_this->ignore_listeners = true;
						HX_STACK_LINE(312)
						{
							HX_STACK_LINE(312)
							_this->x = _x1;
							HX_STACK_LINE(312)
							if ((_this->_construct)){
								HX_STACK_LINE(312)
								_this->x;
							}
							else{
								HX_STACK_LINE(312)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(312)
									_this->listen_x(_x1);
								}
								HX_STACK_LINE(312)
								_this->x;
							}
						}
						HX_STACK_LINE(312)
						{
							HX_STACK_LINE(312)
							_this->y = _y1;
							HX_STACK_LINE(312)
							if ((_this->_construct)){
								HX_STACK_LINE(312)
								_this->y;
							}
							else{
								HX_STACK_LINE(312)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(312)
									_this->listen_y(_y1);
								}
								HX_STACK_LINE(312)
								_this->y;
							}
						}
						HX_STACK_LINE(312)
						{
							HX_STACK_LINE(312)
							_this->z = _z1;
							HX_STACK_LINE(312)
							if ((_this->_construct)){
								HX_STACK_LINE(312)
								_this->z;
							}
							else{
								HX_STACK_LINE(312)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(312)
									_this->listen_z(_z1);
								}
								HX_STACK_LINE(312)
								_this->z;
							}
						}
						HX_STACK_LINE(312)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(312)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(312)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(312)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(312)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(312)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(312)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(312)
						_this;
					}
					HX_STACK_LINE(312)
					_this;
				}
				HX_STACK_LINE(312)
				if (((bool((_g->listen_y != null())) && bool(!(_g->ignore_listeners))))){
					HX_STACK_LINE(312)
					_g->listen_y(_g->y);
				}
				HX_STACK_LINE(312)
				_g->y;
			}
		}
	}
	HX_STACK_LINE(313)
	{
		HX_STACK_LINE(313)
		::phoenix::Quaternion _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(313)
		{
			HX_STACK_LINE(313)
			_g->z = (_g->z * _scalar);
			HX_STACK_LINE(313)
			if ((_g->_construct)){
				HX_STACK_LINE(313)
				_g->z;
			}
			else{
				HX_STACK_LINE(313)
				if (((bool((bool((_g->euler == null())) || bool(_g->ignore_euler))) || bool(_g->_construct)))){
					HX_STACK_LINE(313)
					Dynamic();
				}
				else{
					HX_STACK_LINE(313)
					::phoenix::Vector _this = _g->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(313)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(313)
					Float sqx = (_g->x * _g->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(313)
					Float sqy = (_g->y * _g->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(313)
					Float sqz = (_g->z * _g->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(313)
					Float sqw = (_g->w * _g->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(313)
					Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(313)
					Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(313)
					Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(313)
					if (((order == (int)0))){
						HX_STACK_LINE(313)
						_x = ::Math_obj::atan2(((int)2 * (((_g->x * _g->w) - (_g->y * _g->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion &_g){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",313,0x23671680)
								{
									HX_STACK_LINE(313)
									Float value = ((int)2 * (((_g->x * _g->z) + (_g->y * _g->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(313)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(313)
						_y = ::Math_obj::asin(_Function_6_1::Block(_g));
						HX_STACK_LINE(313)
						_z = ::Math_obj::atan2(((int)2 * (((_g->z * _g->w) - (_g->x * _g->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(313)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion &_g){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",313,0x23671680)
									{
										HX_STACK_LINE(313)
										Float value = ((int)2 * (((_g->x * _g->w) - (_g->y * _g->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(313)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(313)
							_x = ::Math_obj::asin(_Function_7_1::Block(_g));
							HX_STACK_LINE(313)
							_y = ::Math_obj::atan2(((int)2 * (((_g->x * _g->z) + (_g->y * _g->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(313)
							_z = ::Math_obj::atan2(((int)2 * (((_g->x * _g->y) + (_g->z * _g->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(313)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion &_g){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",313,0x23671680)
										{
											HX_STACK_LINE(313)
											Float value = ((int)2 * (((_g->x * _g->w) + (_g->y * _g->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(313)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(313)
								_x = ::Math_obj::asin(_Function_8_1::Block(_g));
								HX_STACK_LINE(313)
								_y = ::Math_obj::atan2(((int)2 * (((_g->y * _g->w) - (_g->z * _g->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(313)
								_z = ::Math_obj::atan2(((int)2 * (((_g->z * _g->w) - (_g->x * _g->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(313)
								if (((order == (int)3))){
									HX_STACK_LINE(313)
									_x = ::Math_obj::atan2(((int)2 * (((_g->x * _g->w) + (_g->z * _g->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion &_g){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",313,0x23671680)
											{
												HX_STACK_LINE(313)
												Float value = ((int)2 * (((_g->y * _g->w) - (_g->x * _g->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(313)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(313)
									_y = ::Math_obj::asin(_Function_9_1::Block(_g));
									HX_STACK_LINE(313)
									_z = ::Math_obj::atan2(((int)2 * (((_g->x * _g->y) + (_g->z * _g->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(313)
									if (((order == (int)4))){
										HX_STACK_LINE(313)
										_x = ::Math_obj::atan2(((int)2 * (((_g->x * _g->w) - (_g->z * _g->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(313)
										_y = ::Math_obj::atan2(((int)2 * (((_g->y * _g->w) - (_g->x * _g->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion &_g){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",313,0x23671680)
												{
													HX_STACK_LINE(313)
													Float value = ((int)2 * (((_g->x * _g->y) + (_g->z * _g->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(313)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(313)
										_z = ::Math_obj::asin(_Function_10_1::Block(_g));
									}
									else{
										HX_STACK_LINE(313)
										if (((order == (int)5))){
											HX_STACK_LINE(313)
											_x = ::Math_obj::atan2(((int)2 * (((_g->x * _g->w) + (_g->y * _g->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(313)
											_y = ::Math_obj::atan2(((int)2 * (((_g->x * _g->z) + (_g->y * _g->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion &_g){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",313,0x23671680)
													{
														HX_STACK_LINE(313)
														Float value = ((int)2 * (((_g->z * _g->w) - (_g->x * _g->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(313)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(313)
											_z = ::Math_obj::asin(_Function_11_1::Block(_g));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(313)
					{
						HX_STACK_LINE(313)
						Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(313)
						Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(313)
						Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(313)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(313)
						_this->ignore_listeners = true;
						HX_STACK_LINE(313)
						{
							HX_STACK_LINE(313)
							_this->x = _x1;
							HX_STACK_LINE(313)
							if ((_this->_construct)){
								HX_STACK_LINE(313)
								_this->x;
							}
							else{
								HX_STACK_LINE(313)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(313)
									_this->listen_x(_x1);
								}
								HX_STACK_LINE(313)
								_this->x;
							}
						}
						HX_STACK_LINE(313)
						{
							HX_STACK_LINE(313)
							_this->y = _y1;
							HX_STACK_LINE(313)
							if ((_this->_construct)){
								HX_STACK_LINE(313)
								_this->y;
							}
							else{
								HX_STACK_LINE(313)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(313)
									_this->listen_y(_y1);
								}
								HX_STACK_LINE(313)
								_this->y;
							}
						}
						HX_STACK_LINE(313)
						{
							HX_STACK_LINE(313)
							_this->z = _z1;
							HX_STACK_LINE(313)
							if ((_this->_construct)){
								HX_STACK_LINE(313)
								_this->z;
							}
							else{
								HX_STACK_LINE(313)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(313)
									_this->listen_z(_z1);
								}
								HX_STACK_LINE(313)
								_this->z;
							}
						}
						HX_STACK_LINE(313)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(313)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(313)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(313)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(313)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(313)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(313)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(313)
						_this;
					}
					HX_STACK_LINE(313)
					_this;
				}
				HX_STACK_LINE(313)
				if (((bool((_g->listen_z != null())) && bool(!(_g->ignore_listeners))))){
					HX_STACK_LINE(313)
					_g->listen_z(_g->z);
				}
				HX_STACK_LINE(313)
				_g->z;
			}
		}
	}
	HX_STACK_LINE(314)
	{
		HX_STACK_LINE(314)
		::phoenix::Quaternion _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(314)
		{
			HX_STACK_LINE(314)
			_g->w = (_g->w * _scalar);
			HX_STACK_LINE(314)
			if ((_g->_construct)){
				HX_STACK_LINE(314)
				_g->w;
			}
			else{
				HX_STACK_LINE(314)
				if (((bool((bool((_g->euler == null())) || bool(_g->ignore_euler))) || bool(_g->_construct)))){
					HX_STACK_LINE(314)
					Dynamic();
				}
				else{
					HX_STACK_LINE(314)
					::phoenix::Vector _this = _g->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(314)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(314)
					Float sqx = (_g->x * _g->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(314)
					Float sqy = (_g->y * _g->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(314)
					Float sqz = (_g->z * _g->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(314)
					Float sqw = (_g->w * _g->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(314)
					Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(314)
					Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(314)
					Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(314)
					if (((order == (int)0))){
						HX_STACK_LINE(314)
						_x = ::Math_obj::atan2(((int)2 * (((_g->x * _g->w) - (_g->y * _g->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion &_g){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",314,0x23671680)
								{
									HX_STACK_LINE(314)
									Float value = ((int)2 * (((_g->x * _g->z) + (_g->y * _g->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(314)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(314)
						_y = ::Math_obj::asin(_Function_6_1::Block(_g));
						HX_STACK_LINE(314)
						_z = ::Math_obj::atan2(((int)2 * (((_g->z * _g->w) - (_g->x * _g->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(314)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion &_g){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",314,0x23671680)
									{
										HX_STACK_LINE(314)
										Float value = ((int)2 * (((_g->x * _g->w) - (_g->y * _g->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(314)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(314)
							_x = ::Math_obj::asin(_Function_7_1::Block(_g));
							HX_STACK_LINE(314)
							_y = ::Math_obj::atan2(((int)2 * (((_g->x * _g->z) + (_g->y * _g->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(314)
							_z = ::Math_obj::atan2(((int)2 * (((_g->x * _g->y) + (_g->z * _g->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(314)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion &_g){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",314,0x23671680)
										{
											HX_STACK_LINE(314)
											Float value = ((int)2 * (((_g->x * _g->w) + (_g->y * _g->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(314)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(314)
								_x = ::Math_obj::asin(_Function_8_1::Block(_g));
								HX_STACK_LINE(314)
								_y = ::Math_obj::atan2(((int)2 * (((_g->y * _g->w) - (_g->z * _g->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(314)
								_z = ::Math_obj::atan2(((int)2 * (((_g->z * _g->w) - (_g->x * _g->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(314)
								if (((order == (int)3))){
									HX_STACK_LINE(314)
									_x = ::Math_obj::atan2(((int)2 * (((_g->x * _g->w) + (_g->z * _g->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion &_g){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",314,0x23671680)
											{
												HX_STACK_LINE(314)
												Float value = ((int)2 * (((_g->y * _g->w) - (_g->x * _g->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(314)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(314)
									_y = ::Math_obj::asin(_Function_9_1::Block(_g));
									HX_STACK_LINE(314)
									_z = ::Math_obj::atan2(((int)2 * (((_g->x * _g->y) + (_g->z * _g->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(314)
									if (((order == (int)4))){
										HX_STACK_LINE(314)
										_x = ::Math_obj::atan2(((int)2 * (((_g->x * _g->w) - (_g->z * _g->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(314)
										_y = ::Math_obj::atan2(((int)2 * (((_g->y * _g->w) - (_g->x * _g->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion &_g){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",314,0x23671680)
												{
													HX_STACK_LINE(314)
													Float value = ((int)2 * (((_g->x * _g->y) + (_g->z * _g->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(314)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(314)
										_z = ::Math_obj::asin(_Function_10_1::Block(_g));
									}
									else{
										HX_STACK_LINE(314)
										if (((order == (int)5))){
											HX_STACK_LINE(314)
											_x = ::Math_obj::atan2(((int)2 * (((_g->x * _g->w) + (_g->y * _g->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(314)
											_y = ::Math_obj::atan2(((int)2 * (((_g->x * _g->z) + (_g->y * _g->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion &_g){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",314,0x23671680)
													{
														HX_STACK_LINE(314)
														Float value = ((int)2 * (((_g->z * _g->w) - (_g->x * _g->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(314)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(314)
											_z = ::Math_obj::asin(_Function_11_1::Block(_g));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(314)
					{
						HX_STACK_LINE(314)
						Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(314)
						Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(314)
						Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(314)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(314)
						_this->ignore_listeners = true;
						HX_STACK_LINE(314)
						{
							HX_STACK_LINE(314)
							_this->x = _x1;
							HX_STACK_LINE(314)
							if ((_this->_construct)){
								HX_STACK_LINE(314)
								_this->x;
							}
							else{
								HX_STACK_LINE(314)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(314)
									_this->listen_x(_x1);
								}
								HX_STACK_LINE(314)
								_this->x;
							}
						}
						HX_STACK_LINE(314)
						{
							HX_STACK_LINE(314)
							_this->y = _y1;
							HX_STACK_LINE(314)
							if ((_this->_construct)){
								HX_STACK_LINE(314)
								_this->y;
							}
							else{
								HX_STACK_LINE(314)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(314)
									_this->listen_y(_y1);
								}
								HX_STACK_LINE(314)
								_this->y;
							}
						}
						HX_STACK_LINE(314)
						{
							HX_STACK_LINE(314)
							_this->z = _z1;
							HX_STACK_LINE(314)
							if ((_this->_construct)){
								HX_STACK_LINE(314)
								_this->z;
							}
							else{
								HX_STACK_LINE(314)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(314)
									_this->listen_z(_z1);
								}
								HX_STACK_LINE(314)
								_this->z;
							}
						}
						HX_STACK_LINE(314)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(314)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(314)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(314)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(314)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(314)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(314)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(314)
						_this;
					}
					HX_STACK_LINE(314)
					_this;
				}
				HX_STACK_LINE(314)
				if (((bool((_g->listen_w != null())) && bool(!(_g->ignore_listeners))))){
					HX_STACK_LINE(314)
					_g->listen_w(_g->w);
				}
				HX_STACK_LINE(314)
				_g->w;
			}
		}
	}
	HX_STACK_LINE(316)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,multiplyScalar,return )

::phoenix::Quaternion Quaternion_obj::multiplyQuaternions( ::phoenix::Quaternion _a,::phoenix::Quaternion _b){
	HX_STACK_FRAME("phoenix.Quaternion","multiplyQuaternions",0x00ae42a0,"phoenix.Quaternion.multiplyQuaternions","phoenix/Quaternion.hx",320,0x23671680)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_a,"_a")
	HX_STACK_ARG(_b,"_b")
	HX_STACK_LINE(322)
	Float qax = _a->x;		HX_STACK_VAR(qax,"qax");
	HX_STACK_LINE(322)
	Float qay = _a->y;		HX_STACK_VAR(qay,"qay");
	HX_STACK_LINE(322)
	Float qaz = _a->z;		HX_STACK_VAR(qaz,"qaz");
	HX_STACK_LINE(322)
	Float qaw = _a->w;		HX_STACK_VAR(qaw,"qaw");
	HX_STACK_LINE(323)
	Float qbx = _b->x;		HX_STACK_VAR(qbx,"qbx");
	HX_STACK_LINE(323)
	Float qby = _b->y;		HX_STACK_VAR(qby,"qby");
	HX_STACK_LINE(323)
	Float qbz = _b->z;		HX_STACK_VAR(qbz,"qbz");
	HX_STACK_LINE(323)
	Float qbw = _b->w;		HX_STACK_VAR(qbw,"qbw");
	HX_STACK_LINE(325)
	{
		HX_STACK_LINE(325)
		this->ignore_euler = true;
		HX_STACK_LINE(325)
		{
			HX_STACK_LINE(325)
			this->x = ((((qax * qbw) + (qaw * qbx)) + (qay * qbz)) - (qaz * qby));
			HX_STACK_LINE(325)
			if ((this->_construct)){
				HX_STACK_LINE(325)
				this->x;
			}
			else{
				HX_STACK_LINE(325)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(325)
					Dynamic();
				}
				else{
					HX_STACK_LINE(325)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(325)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(325)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(325)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(325)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(325)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(325)
					Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(325)
					Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(325)
					Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(325)
					if (((order == (int)0))){
						HX_STACK_LINE(325)
						_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",325,0x23671680)
								{
									HX_STACK_LINE(325)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(325)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(325)
						_y = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(325)
						_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(325)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",325,0x23671680)
									{
										HX_STACK_LINE(325)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(325)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(325)
							_x = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(325)
							_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(325)
							_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(325)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",325,0x23671680)
										{
											HX_STACK_LINE(325)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(325)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(325)
								_x = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(325)
								_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(325)
								_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(325)
								if (((order == (int)3))){
									HX_STACK_LINE(325)
									_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",325,0x23671680)
											{
												HX_STACK_LINE(325)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(325)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(325)
									_y = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(325)
									_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(325)
									if (((order == (int)4))){
										HX_STACK_LINE(325)
										_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(325)
										_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",325,0x23671680)
												{
													HX_STACK_LINE(325)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(325)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(325)
										_z = ::Math_obj::asin(_Function_10_1::Block(this));
									}
									else{
										HX_STACK_LINE(325)
										if (((order == (int)5))){
											HX_STACK_LINE(325)
											_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(325)
											_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",325,0x23671680)
													{
														HX_STACK_LINE(325)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(325)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(325)
											_z = ::Math_obj::asin(_Function_11_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(325)
					{
						HX_STACK_LINE(325)
						Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(325)
						Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(325)
						Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(325)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(325)
						_this->ignore_listeners = true;
						HX_STACK_LINE(325)
						{
							HX_STACK_LINE(325)
							_this->x = _x1;
							HX_STACK_LINE(325)
							if ((_this->_construct)){
								HX_STACK_LINE(325)
								_this->x;
							}
							else{
								HX_STACK_LINE(325)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(325)
									_this->listen_x(_x1);
								}
								HX_STACK_LINE(325)
								_this->x;
							}
						}
						HX_STACK_LINE(325)
						{
							HX_STACK_LINE(325)
							_this->y = _y1;
							HX_STACK_LINE(325)
							if ((_this->_construct)){
								HX_STACK_LINE(325)
								_this->y;
							}
							else{
								HX_STACK_LINE(325)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(325)
									_this->listen_y(_y1);
								}
								HX_STACK_LINE(325)
								_this->y;
							}
						}
						HX_STACK_LINE(325)
						{
							HX_STACK_LINE(325)
							_this->z = _z1;
							HX_STACK_LINE(325)
							if ((_this->_construct)){
								HX_STACK_LINE(325)
								_this->z;
							}
							else{
								HX_STACK_LINE(325)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(325)
									_this->listen_z(_z1);
								}
								HX_STACK_LINE(325)
								_this->z;
							}
						}
						HX_STACK_LINE(325)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(325)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(325)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(325)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(325)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(325)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(325)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(325)
						_this;
					}
					HX_STACK_LINE(325)
					_this;
				}
				HX_STACK_LINE(325)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(325)
					this->listen_x(this->x);
				}
				HX_STACK_LINE(325)
				this->x;
			}
		}
		HX_STACK_LINE(325)
		{
			HX_STACK_LINE(325)
			this->y = ((((qay * qbw) + (qaw * qby)) + (qaz * qbx)) - (qax * qbz));
			HX_STACK_LINE(325)
			if ((this->_construct)){
				HX_STACK_LINE(325)
				this->y;
			}
			else{
				HX_STACK_LINE(325)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(325)
					Dynamic();
				}
				else{
					HX_STACK_LINE(325)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(325)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(325)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(325)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(325)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(325)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(325)
					Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(325)
					Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(325)
					Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(325)
					if (((order == (int)0))){
						HX_STACK_LINE(325)
						_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",325,0x23671680)
								{
									HX_STACK_LINE(325)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(325)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(325)
						_y = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(325)
						_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(325)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",325,0x23671680)
									{
										HX_STACK_LINE(325)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(325)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(325)
							_x = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(325)
							_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(325)
							_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(325)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",325,0x23671680)
										{
											HX_STACK_LINE(325)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(325)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(325)
								_x = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(325)
								_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(325)
								_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(325)
								if (((order == (int)3))){
									HX_STACK_LINE(325)
									_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",325,0x23671680)
											{
												HX_STACK_LINE(325)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(325)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(325)
									_y = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(325)
									_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(325)
									if (((order == (int)4))){
										HX_STACK_LINE(325)
										_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(325)
										_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",325,0x23671680)
												{
													HX_STACK_LINE(325)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(325)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(325)
										_z = ::Math_obj::asin(_Function_10_1::Block(this));
									}
									else{
										HX_STACK_LINE(325)
										if (((order == (int)5))){
											HX_STACK_LINE(325)
											_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(325)
											_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",325,0x23671680)
													{
														HX_STACK_LINE(325)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(325)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(325)
											_z = ::Math_obj::asin(_Function_11_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(325)
					{
						HX_STACK_LINE(325)
						Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(325)
						Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(325)
						Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(325)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(325)
						_this->ignore_listeners = true;
						HX_STACK_LINE(325)
						{
							HX_STACK_LINE(325)
							_this->x = _x1;
							HX_STACK_LINE(325)
							if ((_this->_construct)){
								HX_STACK_LINE(325)
								_this->x;
							}
							else{
								HX_STACK_LINE(325)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(325)
									_this->listen_x(_x1);
								}
								HX_STACK_LINE(325)
								_this->x;
							}
						}
						HX_STACK_LINE(325)
						{
							HX_STACK_LINE(325)
							_this->y = _y1;
							HX_STACK_LINE(325)
							if ((_this->_construct)){
								HX_STACK_LINE(325)
								_this->y;
							}
							else{
								HX_STACK_LINE(325)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(325)
									_this->listen_y(_y1);
								}
								HX_STACK_LINE(325)
								_this->y;
							}
						}
						HX_STACK_LINE(325)
						{
							HX_STACK_LINE(325)
							_this->z = _z1;
							HX_STACK_LINE(325)
							if ((_this->_construct)){
								HX_STACK_LINE(325)
								_this->z;
							}
							else{
								HX_STACK_LINE(325)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(325)
									_this->listen_z(_z1);
								}
								HX_STACK_LINE(325)
								_this->z;
							}
						}
						HX_STACK_LINE(325)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(325)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(325)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(325)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(325)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(325)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(325)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(325)
						_this;
					}
					HX_STACK_LINE(325)
					_this;
				}
				HX_STACK_LINE(325)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(325)
					this->listen_y(this->y);
				}
				HX_STACK_LINE(325)
				this->y;
			}
		}
		HX_STACK_LINE(325)
		{
			HX_STACK_LINE(325)
			this->z = ((((qaz * qbw) + (qaw * qbz)) + (qax * qby)) - (qay * qbx));
			HX_STACK_LINE(325)
			if ((this->_construct)){
				HX_STACK_LINE(325)
				this->z;
			}
			else{
				HX_STACK_LINE(325)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(325)
					Dynamic();
				}
				else{
					HX_STACK_LINE(325)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(325)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(325)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(325)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(325)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(325)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(325)
					Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(325)
					Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(325)
					Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(325)
					if (((order == (int)0))){
						HX_STACK_LINE(325)
						_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",325,0x23671680)
								{
									HX_STACK_LINE(325)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(325)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(325)
						_y = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(325)
						_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(325)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",325,0x23671680)
									{
										HX_STACK_LINE(325)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(325)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(325)
							_x = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(325)
							_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(325)
							_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(325)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",325,0x23671680)
										{
											HX_STACK_LINE(325)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(325)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(325)
								_x = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(325)
								_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(325)
								_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(325)
								if (((order == (int)3))){
									HX_STACK_LINE(325)
									_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",325,0x23671680)
											{
												HX_STACK_LINE(325)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(325)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(325)
									_y = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(325)
									_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(325)
									if (((order == (int)4))){
										HX_STACK_LINE(325)
										_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(325)
										_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",325,0x23671680)
												{
													HX_STACK_LINE(325)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(325)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(325)
										_z = ::Math_obj::asin(_Function_10_1::Block(this));
									}
									else{
										HX_STACK_LINE(325)
										if (((order == (int)5))){
											HX_STACK_LINE(325)
											_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(325)
											_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",325,0x23671680)
													{
														HX_STACK_LINE(325)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(325)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(325)
											_z = ::Math_obj::asin(_Function_11_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(325)
					{
						HX_STACK_LINE(325)
						Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(325)
						Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(325)
						Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(325)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(325)
						_this->ignore_listeners = true;
						HX_STACK_LINE(325)
						{
							HX_STACK_LINE(325)
							_this->x = _x1;
							HX_STACK_LINE(325)
							if ((_this->_construct)){
								HX_STACK_LINE(325)
								_this->x;
							}
							else{
								HX_STACK_LINE(325)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(325)
									_this->listen_x(_x1);
								}
								HX_STACK_LINE(325)
								_this->x;
							}
						}
						HX_STACK_LINE(325)
						{
							HX_STACK_LINE(325)
							_this->y = _y1;
							HX_STACK_LINE(325)
							if ((_this->_construct)){
								HX_STACK_LINE(325)
								_this->y;
							}
							else{
								HX_STACK_LINE(325)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(325)
									_this->listen_y(_y1);
								}
								HX_STACK_LINE(325)
								_this->y;
							}
						}
						HX_STACK_LINE(325)
						{
							HX_STACK_LINE(325)
							_this->z = _z1;
							HX_STACK_LINE(325)
							if ((_this->_construct)){
								HX_STACK_LINE(325)
								_this->z;
							}
							else{
								HX_STACK_LINE(325)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(325)
									_this->listen_z(_z1);
								}
								HX_STACK_LINE(325)
								_this->z;
							}
						}
						HX_STACK_LINE(325)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(325)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(325)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(325)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(325)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(325)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(325)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(325)
						_this;
					}
					HX_STACK_LINE(325)
					_this;
				}
				HX_STACK_LINE(325)
				if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(325)
					this->listen_z(this->z);
				}
				HX_STACK_LINE(325)
				this->z;
			}
		}
		HX_STACK_LINE(325)
		{
			HX_STACK_LINE(325)
			this->w = ((((qaw * qbw) - (qax * qbx)) - (qay * qby)) - (qaz * qbz));
			HX_STACK_LINE(325)
			if ((this->_construct)){
				HX_STACK_LINE(325)
				this->w;
			}
			else{
				HX_STACK_LINE(325)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(325)
					Dynamic();
				}
				else{
					HX_STACK_LINE(325)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(325)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(325)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(325)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(325)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(325)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(325)
					Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(325)
					Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(325)
					Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(325)
					if (((order == (int)0))){
						HX_STACK_LINE(325)
						_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",325,0x23671680)
								{
									HX_STACK_LINE(325)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(325)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(325)
						_y = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(325)
						_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(325)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",325,0x23671680)
									{
										HX_STACK_LINE(325)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(325)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(325)
							_x = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(325)
							_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(325)
							_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(325)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",325,0x23671680)
										{
											HX_STACK_LINE(325)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(325)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(325)
								_x = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(325)
								_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(325)
								_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(325)
								if (((order == (int)3))){
									HX_STACK_LINE(325)
									_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",325,0x23671680)
											{
												HX_STACK_LINE(325)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(325)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(325)
									_y = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(325)
									_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(325)
									if (((order == (int)4))){
										HX_STACK_LINE(325)
										_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(325)
										_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",325,0x23671680)
												{
													HX_STACK_LINE(325)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(325)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(325)
										_z = ::Math_obj::asin(_Function_10_1::Block(this));
									}
									else{
										HX_STACK_LINE(325)
										if (((order == (int)5))){
											HX_STACK_LINE(325)
											_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(325)
											_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",325,0x23671680)
													{
														HX_STACK_LINE(325)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(325)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(325)
											_z = ::Math_obj::asin(_Function_11_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(325)
					{
						HX_STACK_LINE(325)
						Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(325)
						Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(325)
						Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(325)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(325)
						_this->ignore_listeners = true;
						HX_STACK_LINE(325)
						{
							HX_STACK_LINE(325)
							_this->x = _x1;
							HX_STACK_LINE(325)
							if ((_this->_construct)){
								HX_STACK_LINE(325)
								_this->x;
							}
							else{
								HX_STACK_LINE(325)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(325)
									_this->listen_x(_x1);
								}
								HX_STACK_LINE(325)
								_this->x;
							}
						}
						HX_STACK_LINE(325)
						{
							HX_STACK_LINE(325)
							_this->y = _y1;
							HX_STACK_LINE(325)
							if ((_this->_construct)){
								HX_STACK_LINE(325)
								_this->y;
							}
							else{
								HX_STACK_LINE(325)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(325)
									_this->listen_y(_y1);
								}
								HX_STACK_LINE(325)
								_this->y;
							}
						}
						HX_STACK_LINE(325)
						{
							HX_STACK_LINE(325)
							_this->z = _z1;
							HX_STACK_LINE(325)
							if ((_this->_construct)){
								HX_STACK_LINE(325)
								_this->z;
							}
							else{
								HX_STACK_LINE(325)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(325)
									_this->listen_z(_z1);
								}
								HX_STACK_LINE(325)
								_this->z;
							}
						}
						HX_STACK_LINE(325)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(325)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(325)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(325)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(325)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(325)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(325)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(325)
						_this;
					}
					HX_STACK_LINE(325)
					_this;
				}
				HX_STACK_LINE(325)
				if (((bool((this->listen_w_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(325)
					this->listen_w(this->w);
				}
				HX_STACK_LINE(325)
				this->w;
			}
		}
		HX_STACK_LINE(325)
		this->ignore_euler = false;
		HX_STACK_LINE(325)
		if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
			HX_STACK_LINE(325)
			Dynamic();
		}
		else{
			HX_STACK_LINE(325)
			::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(325)
			int order = (int)0;		HX_STACK_VAR(order,"order");
			HX_STACK_LINE(325)
			Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
			HX_STACK_LINE(325)
			Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
			HX_STACK_LINE(325)
			Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
			HX_STACK_LINE(325)
			Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
			HX_STACK_LINE(325)
			Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(325)
			Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(325)
			Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(325)
			if (((order == (int)0))){
				HX_STACK_LINE(325)
				_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
				struct _Function_4_1{
					inline static Float Block( ::phoenix::Quaternion_obj *__this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",325,0x23671680)
						{
							HX_STACK_LINE(325)
							Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(325)
							return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
						}
						return null();
					}
				};
				HX_STACK_LINE(325)
				_y = ::Math_obj::asin(_Function_4_1::Block(this));
				HX_STACK_LINE(325)
				_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
			}
			else{
				HX_STACK_LINE(325)
				if (((order == (int)1))){
					struct _Function_5_1{
						inline static Float Block( ::phoenix::Quaternion_obj *__this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",325,0x23671680)
							{
								HX_STACK_LINE(325)
								Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(325)
								return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(325)
					_x = ::Math_obj::asin(_Function_5_1::Block(this));
					HX_STACK_LINE(325)
					_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
					HX_STACK_LINE(325)
					_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
				}
				else{
					HX_STACK_LINE(325)
					if (((order == (int)2))){
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",325,0x23671680)
								{
									HX_STACK_LINE(325)
									Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(325)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(325)
						_x = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(325)
						_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
						HX_STACK_LINE(325)
						_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
					}
					else{
						HX_STACK_LINE(325)
						if (((order == (int)3))){
							HX_STACK_LINE(325)
							_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",325,0x23671680)
									{
										HX_STACK_LINE(325)
										Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(325)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(325)
							_y = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(325)
							_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
						}
						else{
							HX_STACK_LINE(325)
							if (((order == (int)4))){
								HX_STACK_LINE(325)
								_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
								HX_STACK_LINE(325)
								_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",325,0x23671680)
										{
											HX_STACK_LINE(325)
											Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(325)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(325)
								_z = ::Math_obj::asin(_Function_8_1::Block(this));
							}
							else{
								HX_STACK_LINE(325)
								if (((order == (int)5))){
									HX_STACK_LINE(325)
									_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
									HX_STACK_LINE(325)
									_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",325,0x23671680)
											{
												HX_STACK_LINE(325)
												Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(325)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(325)
									_z = ::Math_obj::asin(_Function_9_1::Block(this));
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(325)
			{
				HX_STACK_LINE(325)
				Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
				HX_STACK_LINE(325)
				Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
				HX_STACK_LINE(325)
				Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
				HX_STACK_LINE(325)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(325)
				_this->ignore_listeners = true;
				HX_STACK_LINE(325)
				{
					HX_STACK_LINE(325)
					_this->x = _x1;
					HX_STACK_LINE(325)
					if ((_this->_construct)){
						HX_STACK_LINE(325)
						_this->x;
					}
					else{
						HX_STACK_LINE(325)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(325)
							_this->listen_x(_x1);
						}
						HX_STACK_LINE(325)
						_this->x;
					}
				}
				HX_STACK_LINE(325)
				{
					HX_STACK_LINE(325)
					_this->y = _y1;
					HX_STACK_LINE(325)
					if ((_this->_construct)){
						HX_STACK_LINE(325)
						_this->y;
					}
					else{
						HX_STACK_LINE(325)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(325)
							_this->listen_y(_y1);
						}
						HX_STACK_LINE(325)
						_this->y;
					}
				}
				HX_STACK_LINE(325)
				{
					HX_STACK_LINE(325)
					_this->z = _z1;
					HX_STACK_LINE(325)
					if ((_this->_construct)){
						HX_STACK_LINE(325)
						_this->z;
					}
					else{
						HX_STACK_LINE(325)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(325)
							_this->listen_z(_z1);
						}
						HX_STACK_LINE(325)
						_this->z;
					}
				}
				HX_STACK_LINE(325)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(325)
				if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(325)
					_this->listen_x(_this->x);
				}
				HX_STACK_LINE(325)
				if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(325)
					_this->listen_y(_this->y);
				}
				HX_STACK_LINE(325)
				if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(325)
					_this->listen_z(_this->z);
				}
				HX_STACK_LINE(325)
				_this;
			}
			HX_STACK_LINE(325)
			_this;
		}
		HX_STACK_LINE(325)
		if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(325)
			this->listen_x(this->x);
		}
		HX_STACK_LINE(325)
		if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(325)
			this->listen_y(this->y);
		}
		HX_STACK_LINE(325)
		if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(325)
			this->listen_z(this->z);
		}
		HX_STACK_LINE(325)
		if (((bool((this->listen_w_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(325)
			this->listen_w(this->w);
		}
	}
	HX_STACK_LINE(330)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,multiplyQuaternions,return )

::phoenix::Quaternion Quaternion_obj::slerp( ::phoenix::Quaternion _qb,Float _t){
	HX_STACK_FRAME("phoenix.Quaternion","slerp",0x611900f9,"phoenix.Quaternion.slerp","phoenix/Quaternion.hx",335,0x23671680)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_qb,"_qb")
	HX_STACK_ARG(_t,"_t")
	HX_STACK_LINE(337)
	Float _x = this->x;		HX_STACK_VAR(_x,"_x");
	HX_STACK_LINE(338)
	Float _y = this->y;		HX_STACK_VAR(_y,"_y");
	HX_STACK_LINE(339)
	Float _z = this->z;		HX_STACK_VAR(_z,"_z");
	HX_STACK_LINE(340)
	Float _w = this->w;		HX_STACK_VAR(_w,"_w");
	HX_STACK_LINE(344)
	Float cosHalfTheta = ((((_w * _qb->w) + (_x * _qb->x)) + (_y * _qb->y)) + (_z * _qb->z));		HX_STACK_VAR(cosHalfTheta,"cosHalfTheta");
	HX_STACK_LINE(346)
	if (((cosHalfTheta < (int)0))){
		HX_STACK_LINE(348)
		{
			HX_STACK_LINE(348)
			this->w = -(_qb->w);
			HX_STACK_LINE(348)
			if ((this->_construct)){
				HX_STACK_LINE(348)
				this->w;
			}
			else{
				HX_STACK_LINE(348)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(348)
					Dynamic();
				}
				else{
					HX_STACK_LINE(348)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(348)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(348)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(348)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(348)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(348)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(348)
					Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(348)
					Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(348)
					Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(348)
					if (((order == (int)0))){
						HX_STACK_LINE(348)
						_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",348,0x23671680)
								{
									HX_STACK_LINE(348)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(348)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(348)
						_y1 = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(348)
						_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(348)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",348,0x23671680)
									{
										HX_STACK_LINE(348)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(348)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(348)
							_x1 = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(348)
							_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(348)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(348)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",348,0x23671680)
										{
											HX_STACK_LINE(348)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(348)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(348)
								_x1 = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(348)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(348)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(348)
								if (((order == (int)3))){
									HX_STACK_LINE(348)
									_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",348,0x23671680)
											{
												HX_STACK_LINE(348)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(348)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(348)
									_y1 = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(348)
									_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(348)
									if (((order == (int)4))){
										HX_STACK_LINE(348)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(348)
										_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",348,0x23671680)
												{
													HX_STACK_LINE(348)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(348)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(348)
										_z1 = ::Math_obj::asin(_Function_10_1::Block(this));
									}
									else{
										HX_STACK_LINE(348)
										if (((order == (int)5))){
											HX_STACK_LINE(348)
											_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(348)
											_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",348,0x23671680)
													{
														HX_STACK_LINE(348)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(348)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(348)
											_z1 = ::Math_obj::asin(_Function_11_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(348)
					{
						HX_STACK_LINE(348)
						Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
						HX_STACK_LINE(348)
						Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
						HX_STACK_LINE(348)
						Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
						HX_STACK_LINE(348)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(348)
						_this->ignore_listeners = true;
						HX_STACK_LINE(348)
						{
							HX_STACK_LINE(348)
							_this->x = _x2;
							HX_STACK_LINE(348)
							if ((_this->_construct)){
								HX_STACK_LINE(348)
								_this->x;
							}
							else{
								HX_STACK_LINE(348)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(348)
									_this->listen_x(_x2);
								}
								HX_STACK_LINE(348)
								_this->x;
							}
						}
						HX_STACK_LINE(348)
						{
							HX_STACK_LINE(348)
							_this->y = _y2;
							HX_STACK_LINE(348)
							if ((_this->_construct)){
								HX_STACK_LINE(348)
								_this->y;
							}
							else{
								HX_STACK_LINE(348)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(348)
									_this->listen_y(_y2);
								}
								HX_STACK_LINE(348)
								_this->y;
							}
						}
						HX_STACK_LINE(348)
						{
							HX_STACK_LINE(348)
							_this->z = _z2;
							HX_STACK_LINE(348)
							if ((_this->_construct)){
								HX_STACK_LINE(348)
								_this->z;
							}
							else{
								HX_STACK_LINE(348)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(348)
									_this->listen_z(_z2);
								}
								HX_STACK_LINE(348)
								_this->z;
							}
						}
						HX_STACK_LINE(348)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(348)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(348)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(348)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(348)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(348)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(348)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(348)
						_this;
					}
					HX_STACK_LINE(348)
					_this;
				}
				HX_STACK_LINE(348)
				if (((bool((this->listen_w_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(348)
					this->listen_w(this->w);
				}
				HX_STACK_LINE(348)
				this->w;
			}
		}
		HX_STACK_LINE(349)
		{
			HX_STACK_LINE(349)
			this->x = -(_qb->x);
			HX_STACK_LINE(349)
			if ((this->_construct)){
				HX_STACK_LINE(349)
				this->x;
			}
			else{
				HX_STACK_LINE(349)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(349)
					Dynamic();
				}
				else{
					HX_STACK_LINE(349)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(349)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(349)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(349)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(349)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(349)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(349)
					Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(349)
					Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(349)
					Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(349)
					if (((order == (int)0))){
						HX_STACK_LINE(349)
						_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",349,0x23671680)
								{
									HX_STACK_LINE(349)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(349)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(349)
						_y1 = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(349)
						_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(349)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",349,0x23671680)
									{
										HX_STACK_LINE(349)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(349)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(349)
							_x1 = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(349)
							_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(349)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(349)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",349,0x23671680)
										{
											HX_STACK_LINE(349)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(349)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(349)
								_x1 = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(349)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(349)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(349)
								if (((order == (int)3))){
									HX_STACK_LINE(349)
									_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",349,0x23671680)
											{
												HX_STACK_LINE(349)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(349)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(349)
									_y1 = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(349)
									_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(349)
									if (((order == (int)4))){
										HX_STACK_LINE(349)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(349)
										_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",349,0x23671680)
												{
													HX_STACK_LINE(349)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(349)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(349)
										_z1 = ::Math_obj::asin(_Function_10_1::Block(this));
									}
									else{
										HX_STACK_LINE(349)
										if (((order == (int)5))){
											HX_STACK_LINE(349)
											_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(349)
											_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",349,0x23671680)
													{
														HX_STACK_LINE(349)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(349)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(349)
											_z1 = ::Math_obj::asin(_Function_11_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(349)
					{
						HX_STACK_LINE(349)
						Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
						HX_STACK_LINE(349)
						Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
						HX_STACK_LINE(349)
						Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
						HX_STACK_LINE(349)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(349)
						_this->ignore_listeners = true;
						HX_STACK_LINE(349)
						{
							HX_STACK_LINE(349)
							_this->x = _x2;
							HX_STACK_LINE(349)
							if ((_this->_construct)){
								HX_STACK_LINE(349)
								_this->x;
							}
							else{
								HX_STACK_LINE(349)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(349)
									_this->listen_x(_x2);
								}
								HX_STACK_LINE(349)
								_this->x;
							}
						}
						HX_STACK_LINE(349)
						{
							HX_STACK_LINE(349)
							_this->y = _y2;
							HX_STACK_LINE(349)
							if ((_this->_construct)){
								HX_STACK_LINE(349)
								_this->y;
							}
							else{
								HX_STACK_LINE(349)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(349)
									_this->listen_y(_y2);
								}
								HX_STACK_LINE(349)
								_this->y;
							}
						}
						HX_STACK_LINE(349)
						{
							HX_STACK_LINE(349)
							_this->z = _z2;
							HX_STACK_LINE(349)
							if ((_this->_construct)){
								HX_STACK_LINE(349)
								_this->z;
							}
							else{
								HX_STACK_LINE(349)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(349)
									_this->listen_z(_z2);
								}
								HX_STACK_LINE(349)
								_this->z;
							}
						}
						HX_STACK_LINE(349)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(349)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(349)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(349)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(349)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(349)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(349)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(349)
						_this;
					}
					HX_STACK_LINE(349)
					_this;
				}
				HX_STACK_LINE(349)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(349)
					this->listen_x(this->x);
				}
				HX_STACK_LINE(349)
				this->x;
			}
		}
		HX_STACK_LINE(350)
		{
			HX_STACK_LINE(350)
			this->y = -(_qb->y);
			HX_STACK_LINE(350)
			if ((this->_construct)){
				HX_STACK_LINE(350)
				this->y;
			}
			else{
				HX_STACK_LINE(350)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(350)
					Dynamic();
				}
				else{
					HX_STACK_LINE(350)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(350)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(350)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(350)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(350)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(350)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(350)
					Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(350)
					Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(350)
					Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(350)
					if (((order == (int)0))){
						HX_STACK_LINE(350)
						_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",350,0x23671680)
								{
									HX_STACK_LINE(350)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(350)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(350)
						_y1 = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(350)
						_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(350)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",350,0x23671680)
									{
										HX_STACK_LINE(350)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(350)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(350)
							_x1 = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(350)
							_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(350)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(350)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",350,0x23671680)
										{
											HX_STACK_LINE(350)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(350)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(350)
								_x1 = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(350)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(350)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(350)
								if (((order == (int)3))){
									HX_STACK_LINE(350)
									_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",350,0x23671680)
											{
												HX_STACK_LINE(350)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(350)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(350)
									_y1 = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(350)
									_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(350)
									if (((order == (int)4))){
										HX_STACK_LINE(350)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(350)
										_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",350,0x23671680)
												{
													HX_STACK_LINE(350)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(350)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(350)
										_z1 = ::Math_obj::asin(_Function_10_1::Block(this));
									}
									else{
										HX_STACK_LINE(350)
										if (((order == (int)5))){
											HX_STACK_LINE(350)
											_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(350)
											_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",350,0x23671680)
													{
														HX_STACK_LINE(350)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(350)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(350)
											_z1 = ::Math_obj::asin(_Function_11_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(350)
					{
						HX_STACK_LINE(350)
						Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
						HX_STACK_LINE(350)
						Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
						HX_STACK_LINE(350)
						Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
						HX_STACK_LINE(350)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(350)
						_this->ignore_listeners = true;
						HX_STACK_LINE(350)
						{
							HX_STACK_LINE(350)
							_this->x = _x2;
							HX_STACK_LINE(350)
							if ((_this->_construct)){
								HX_STACK_LINE(350)
								_this->x;
							}
							else{
								HX_STACK_LINE(350)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(350)
									_this->listen_x(_x2);
								}
								HX_STACK_LINE(350)
								_this->x;
							}
						}
						HX_STACK_LINE(350)
						{
							HX_STACK_LINE(350)
							_this->y = _y2;
							HX_STACK_LINE(350)
							if ((_this->_construct)){
								HX_STACK_LINE(350)
								_this->y;
							}
							else{
								HX_STACK_LINE(350)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(350)
									_this->listen_y(_y2);
								}
								HX_STACK_LINE(350)
								_this->y;
							}
						}
						HX_STACK_LINE(350)
						{
							HX_STACK_LINE(350)
							_this->z = _z2;
							HX_STACK_LINE(350)
							if ((_this->_construct)){
								HX_STACK_LINE(350)
								_this->z;
							}
							else{
								HX_STACK_LINE(350)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(350)
									_this->listen_z(_z2);
								}
								HX_STACK_LINE(350)
								_this->z;
							}
						}
						HX_STACK_LINE(350)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(350)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(350)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(350)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(350)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(350)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(350)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(350)
						_this;
					}
					HX_STACK_LINE(350)
					_this;
				}
				HX_STACK_LINE(350)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(350)
					this->listen_y(this->y);
				}
				HX_STACK_LINE(350)
				this->y;
			}
		}
		HX_STACK_LINE(351)
		{
			HX_STACK_LINE(351)
			this->z = -(_qb->z);
			HX_STACK_LINE(351)
			if ((this->_construct)){
				HX_STACK_LINE(351)
				this->z;
			}
			else{
				HX_STACK_LINE(351)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(351)
					Dynamic();
				}
				else{
					HX_STACK_LINE(351)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(351)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(351)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(351)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(351)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(351)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(351)
					Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(351)
					Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(351)
					Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(351)
					if (((order == (int)0))){
						HX_STACK_LINE(351)
						_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",351,0x23671680)
								{
									HX_STACK_LINE(351)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(351)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(351)
						_y1 = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(351)
						_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(351)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",351,0x23671680)
									{
										HX_STACK_LINE(351)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(351)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(351)
							_x1 = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(351)
							_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(351)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(351)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",351,0x23671680)
										{
											HX_STACK_LINE(351)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(351)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(351)
								_x1 = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(351)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(351)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(351)
								if (((order == (int)3))){
									HX_STACK_LINE(351)
									_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",351,0x23671680)
											{
												HX_STACK_LINE(351)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(351)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(351)
									_y1 = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(351)
									_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(351)
									if (((order == (int)4))){
										HX_STACK_LINE(351)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(351)
										_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",351,0x23671680)
												{
													HX_STACK_LINE(351)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(351)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(351)
										_z1 = ::Math_obj::asin(_Function_10_1::Block(this));
									}
									else{
										HX_STACK_LINE(351)
										if (((order == (int)5))){
											HX_STACK_LINE(351)
											_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(351)
											_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",351,0x23671680)
													{
														HX_STACK_LINE(351)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(351)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(351)
											_z1 = ::Math_obj::asin(_Function_11_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(351)
					{
						HX_STACK_LINE(351)
						Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
						HX_STACK_LINE(351)
						Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
						HX_STACK_LINE(351)
						Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
						HX_STACK_LINE(351)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(351)
						_this->ignore_listeners = true;
						HX_STACK_LINE(351)
						{
							HX_STACK_LINE(351)
							_this->x = _x2;
							HX_STACK_LINE(351)
							if ((_this->_construct)){
								HX_STACK_LINE(351)
								_this->x;
							}
							else{
								HX_STACK_LINE(351)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(351)
									_this->listen_x(_x2);
								}
								HX_STACK_LINE(351)
								_this->x;
							}
						}
						HX_STACK_LINE(351)
						{
							HX_STACK_LINE(351)
							_this->y = _y2;
							HX_STACK_LINE(351)
							if ((_this->_construct)){
								HX_STACK_LINE(351)
								_this->y;
							}
							else{
								HX_STACK_LINE(351)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(351)
									_this->listen_y(_y2);
								}
								HX_STACK_LINE(351)
								_this->y;
							}
						}
						HX_STACK_LINE(351)
						{
							HX_STACK_LINE(351)
							_this->z = _z2;
							HX_STACK_LINE(351)
							if ((_this->_construct)){
								HX_STACK_LINE(351)
								_this->z;
							}
							else{
								HX_STACK_LINE(351)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(351)
									_this->listen_z(_z2);
								}
								HX_STACK_LINE(351)
								_this->z;
							}
						}
						HX_STACK_LINE(351)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(351)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(351)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(351)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(351)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(351)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(351)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(351)
						_this;
					}
					HX_STACK_LINE(351)
					_this;
				}
				HX_STACK_LINE(351)
				if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(351)
					this->listen_z(this->z);
				}
				HX_STACK_LINE(351)
				this->z;
			}
		}
		HX_STACK_LINE(353)
		cosHalfTheta = -(cosHalfTheta);
	}
	else{
		HX_STACK_LINE(357)
		this->copy(_qb);
	}
	HX_STACK_LINE(361)
	if (((cosHalfTheta >= 1.0))){
		HX_STACK_LINE(363)
		{
			HX_STACK_LINE(363)
			this->ignore_euler = true;
			HX_STACK_LINE(363)
			{
				HX_STACK_LINE(363)
				this->x = _x;
				HX_STACK_LINE(363)
				if ((this->_construct)){
					HX_STACK_LINE(363)
					this->x;
				}
				else{
					HX_STACK_LINE(363)
					if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
						HX_STACK_LINE(363)
						Dynamic();
					}
					else{
						HX_STACK_LINE(363)
						::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(363)
						int order = (int)0;		HX_STACK_VAR(order,"order");
						HX_STACK_LINE(363)
						Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
						HX_STACK_LINE(363)
						Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
						HX_STACK_LINE(363)
						Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
						HX_STACK_LINE(363)
						Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
						HX_STACK_LINE(363)
						Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(363)
						Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(363)
						Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(363)
						if (((order == (int)0))){
							HX_STACK_LINE(363)
							_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",363,0x23671680)
									{
										HX_STACK_LINE(363)
										Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(363)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(363)
							_y1 = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(363)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
						}
						else{
							HX_STACK_LINE(363)
							if (((order == (int)1))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",363,0x23671680)
										{
											HX_STACK_LINE(363)
											Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(363)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(363)
								_x1 = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(363)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(363)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(363)
								if (((order == (int)2))){
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",363,0x23671680)
											{
												HX_STACK_LINE(363)
												Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(363)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(363)
									_x1 = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(363)
									_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
									HX_STACK_LINE(363)
									_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
								}
								else{
									HX_STACK_LINE(363)
									if (((order == (int)3))){
										HX_STACK_LINE(363)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",363,0x23671680)
												{
													HX_STACK_LINE(363)
													Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(363)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(363)
										_y1 = ::Math_obj::asin(_Function_10_1::Block(this));
										HX_STACK_LINE(363)
										_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
									}
									else{
										HX_STACK_LINE(363)
										if (((order == (int)4))){
											HX_STACK_LINE(363)
											_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(363)
											_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",363,0x23671680)
													{
														HX_STACK_LINE(363)
														Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(363)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(363)
											_z1 = ::Math_obj::asin(_Function_11_1::Block(this));
										}
										else{
											HX_STACK_LINE(363)
											if (((order == (int)5))){
												HX_STACK_LINE(363)
												_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
												HX_STACK_LINE(363)
												_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
												struct _Function_12_1{
													inline static Float Block( ::phoenix::Quaternion_obj *__this){
														HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",363,0x23671680)
														{
															HX_STACK_LINE(363)
															Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
															HX_STACK_LINE(363)
															return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
														}
														return null();
													}
												};
												HX_STACK_LINE(363)
												_z1 = ::Math_obj::asin(_Function_12_1::Block(this));
											}
										}
									}
								}
							}
						}
						HX_STACK_LINE(363)
						{
							HX_STACK_LINE(363)
							Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
							HX_STACK_LINE(363)
							Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
							HX_STACK_LINE(363)
							Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
							HX_STACK_LINE(363)
							bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
							HX_STACK_LINE(363)
							_this->ignore_listeners = true;
							HX_STACK_LINE(363)
							{
								HX_STACK_LINE(363)
								_this->x = _x2;
								HX_STACK_LINE(363)
								if ((_this->_construct)){
									HX_STACK_LINE(363)
									_this->x;
								}
								else{
									HX_STACK_LINE(363)
									if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(363)
										_this->listen_x(_x2);
									}
									HX_STACK_LINE(363)
									_this->x;
								}
							}
							HX_STACK_LINE(363)
							{
								HX_STACK_LINE(363)
								_this->y = _y2;
								HX_STACK_LINE(363)
								if ((_this->_construct)){
									HX_STACK_LINE(363)
									_this->y;
								}
								else{
									HX_STACK_LINE(363)
									if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(363)
										_this->listen_y(_y2);
									}
									HX_STACK_LINE(363)
									_this->y;
								}
							}
							HX_STACK_LINE(363)
							{
								HX_STACK_LINE(363)
								_this->z = _z2;
								HX_STACK_LINE(363)
								if ((_this->_construct)){
									HX_STACK_LINE(363)
									_this->z;
								}
								else{
									HX_STACK_LINE(363)
									if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(363)
										_this->listen_z(_z2);
									}
									HX_STACK_LINE(363)
									_this->z;
								}
							}
							HX_STACK_LINE(363)
							_this->ignore_listeners = prev;
							HX_STACK_LINE(363)
							if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(363)
								_this->listen_x(_this->x);
							}
							HX_STACK_LINE(363)
							if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(363)
								_this->listen_y(_this->y);
							}
							HX_STACK_LINE(363)
							if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(363)
								_this->listen_z(_this->z);
							}
							HX_STACK_LINE(363)
							_this;
						}
						HX_STACK_LINE(363)
						_this;
					}
					HX_STACK_LINE(363)
					if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(363)
						this->listen_x(this->x);
					}
					HX_STACK_LINE(363)
					this->x;
				}
			}
			HX_STACK_LINE(363)
			{
				HX_STACK_LINE(363)
				this->y = _y;
				HX_STACK_LINE(363)
				if ((this->_construct)){
					HX_STACK_LINE(363)
					this->y;
				}
				else{
					HX_STACK_LINE(363)
					if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
						HX_STACK_LINE(363)
						Dynamic();
					}
					else{
						HX_STACK_LINE(363)
						::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(363)
						int order = (int)0;		HX_STACK_VAR(order,"order");
						HX_STACK_LINE(363)
						Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
						HX_STACK_LINE(363)
						Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
						HX_STACK_LINE(363)
						Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
						HX_STACK_LINE(363)
						Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
						HX_STACK_LINE(363)
						Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(363)
						Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(363)
						Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(363)
						if (((order == (int)0))){
							HX_STACK_LINE(363)
							_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",363,0x23671680)
									{
										HX_STACK_LINE(363)
										Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(363)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(363)
							_y1 = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(363)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
						}
						else{
							HX_STACK_LINE(363)
							if (((order == (int)1))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",363,0x23671680)
										{
											HX_STACK_LINE(363)
											Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(363)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(363)
								_x1 = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(363)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(363)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(363)
								if (((order == (int)2))){
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",363,0x23671680)
											{
												HX_STACK_LINE(363)
												Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(363)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(363)
									_x1 = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(363)
									_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
									HX_STACK_LINE(363)
									_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
								}
								else{
									HX_STACK_LINE(363)
									if (((order == (int)3))){
										HX_STACK_LINE(363)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",363,0x23671680)
												{
													HX_STACK_LINE(363)
													Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(363)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(363)
										_y1 = ::Math_obj::asin(_Function_10_1::Block(this));
										HX_STACK_LINE(363)
										_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
									}
									else{
										HX_STACK_LINE(363)
										if (((order == (int)4))){
											HX_STACK_LINE(363)
											_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(363)
											_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",363,0x23671680)
													{
														HX_STACK_LINE(363)
														Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(363)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(363)
											_z1 = ::Math_obj::asin(_Function_11_1::Block(this));
										}
										else{
											HX_STACK_LINE(363)
											if (((order == (int)5))){
												HX_STACK_LINE(363)
												_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
												HX_STACK_LINE(363)
												_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
												struct _Function_12_1{
													inline static Float Block( ::phoenix::Quaternion_obj *__this){
														HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",363,0x23671680)
														{
															HX_STACK_LINE(363)
															Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
															HX_STACK_LINE(363)
															return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
														}
														return null();
													}
												};
												HX_STACK_LINE(363)
												_z1 = ::Math_obj::asin(_Function_12_1::Block(this));
											}
										}
									}
								}
							}
						}
						HX_STACK_LINE(363)
						{
							HX_STACK_LINE(363)
							Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
							HX_STACK_LINE(363)
							Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
							HX_STACK_LINE(363)
							Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
							HX_STACK_LINE(363)
							bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
							HX_STACK_LINE(363)
							_this->ignore_listeners = true;
							HX_STACK_LINE(363)
							{
								HX_STACK_LINE(363)
								_this->x = _x2;
								HX_STACK_LINE(363)
								if ((_this->_construct)){
									HX_STACK_LINE(363)
									_this->x;
								}
								else{
									HX_STACK_LINE(363)
									if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(363)
										_this->listen_x(_x2);
									}
									HX_STACK_LINE(363)
									_this->x;
								}
							}
							HX_STACK_LINE(363)
							{
								HX_STACK_LINE(363)
								_this->y = _y2;
								HX_STACK_LINE(363)
								if ((_this->_construct)){
									HX_STACK_LINE(363)
									_this->y;
								}
								else{
									HX_STACK_LINE(363)
									if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(363)
										_this->listen_y(_y2);
									}
									HX_STACK_LINE(363)
									_this->y;
								}
							}
							HX_STACK_LINE(363)
							{
								HX_STACK_LINE(363)
								_this->z = _z2;
								HX_STACK_LINE(363)
								if ((_this->_construct)){
									HX_STACK_LINE(363)
									_this->z;
								}
								else{
									HX_STACK_LINE(363)
									if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(363)
										_this->listen_z(_z2);
									}
									HX_STACK_LINE(363)
									_this->z;
								}
							}
							HX_STACK_LINE(363)
							_this->ignore_listeners = prev;
							HX_STACK_LINE(363)
							if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(363)
								_this->listen_x(_this->x);
							}
							HX_STACK_LINE(363)
							if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(363)
								_this->listen_y(_this->y);
							}
							HX_STACK_LINE(363)
							if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(363)
								_this->listen_z(_this->z);
							}
							HX_STACK_LINE(363)
							_this;
						}
						HX_STACK_LINE(363)
						_this;
					}
					HX_STACK_LINE(363)
					if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(363)
						this->listen_y(this->y);
					}
					HX_STACK_LINE(363)
					this->y;
				}
			}
			HX_STACK_LINE(363)
			{
				HX_STACK_LINE(363)
				this->z = _z;
				HX_STACK_LINE(363)
				if ((this->_construct)){
					HX_STACK_LINE(363)
					this->z;
				}
				else{
					HX_STACK_LINE(363)
					if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
						HX_STACK_LINE(363)
						Dynamic();
					}
					else{
						HX_STACK_LINE(363)
						::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(363)
						int order = (int)0;		HX_STACK_VAR(order,"order");
						HX_STACK_LINE(363)
						Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
						HX_STACK_LINE(363)
						Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
						HX_STACK_LINE(363)
						Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
						HX_STACK_LINE(363)
						Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
						HX_STACK_LINE(363)
						Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(363)
						Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(363)
						Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(363)
						if (((order == (int)0))){
							HX_STACK_LINE(363)
							_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",363,0x23671680)
									{
										HX_STACK_LINE(363)
										Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(363)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(363)
							_y1 = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(363)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
						}
						else{
							HX_STACK_LINE(363)
							if (((order == (int)1))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",363,0x23671680)
										{
											HX_STACK_LINE(363)
											Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(363)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(363)
								_x1 = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(363)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(363)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(363)
								if (((order == (int)2))){
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",363,0x23671680)
											{
												HX_STACK_LINE(363)
												Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(363)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(363)
									_x1 = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(363)
									_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
									HX_STACK_LINE(363)
									_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
								}
								else{
									HX_STACK_LINE(363)
									if (((order == (int)3))){
										HX_STACK_LINE(363)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",363,0x23671680)
												{
													HX_STACK_LINE(363)
													Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(363)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(363)
										_y1 = ::Math_obj::asin(_Function_10_1::Block(this));
										HX_STACK_LINE(363)
										_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
									}
									else{
										HX_STACK_LINE(363)
										if (((order == (int)4))){
											HX_STACK_LINE(363)
											_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(363)
											_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",363,0x23671680)
													{
														HX_STACK_LINE(363)
														Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(363)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(363)
											_z1 = ::Math_obj::asin(_Function_11_1::Block(this));
										}
										else{
											HX_STACK_LINE(363)
											if (((order == (int)5))){
												HX_STACK_LINE(363)
												_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
												HX_STACK_LINE(363)
												_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
												struct _Function_12_1{
													inline static Float Block( ::phoenix::Quaternion_obj *__this){
														HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",363,0x23671680)
														{
															HX_STACK_LINE(363)
															Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
															HX_STACK_LINE(363)
															return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
														}
														return null();
													}
												};
												HX_STACK_LINE(363)
												_z1 = ::Math_obj::asin(_Function_12_1::Block(this));
											}
										}
									}
								}
							}
						}
						HX_STACK_LINE(363)
						{
							HX_STACK_LINE(363)
							Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
							HX_STACK_LINE(363)
							Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
							HX_STACK_LINE(363)
							Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
							HX_STACK_LINE(363)
							bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
							HX_STACK_LINE(363)
							_this->ignore_listeners = true;
							HX_STACK_LINE(363)
							{
								HX_STACK_LINE(363)
								_this->x = _x2;
								HX_STACK_LINE(363)
								if ((_this->_construct)){
									HX_STACK_LINE(363)
									_this->x;
								}
								else{
									HX_STACK_LINE(363)
									if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(363)
										_this->listen_x(_x2);
									}
									HX_STACK_LINE(363)
									_this->x;
								}
							}
							HX_STACK_LINE(363)
							{
								HX_STACK_LINE(363)
								_this->y = _y2;
								HX_STACK_LINE(363)
								if ((_this->_construct)){
									HX_STACK_LINE(363)
									_this->y;
								}
								else{
									HX_STACK_LINE(363)
									if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(363)
										_this->listen_y(_y2);
									}
									HX_STACK_LINE(363)
									_this->y;
								}
							}
							HX_STACK_LINE(363)
							{
								HX_STACK_LINE(363)
								_this->z = _z2;
								HX_STACK_LINE(363)
								if ((_this->_construct)){
									HX_STACK_LINE(363)
									_this->z;
								}
								else{
									HX_STACK_LINE(363)
									if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(363)
										_this->listen_z(_z2);
									}
									HX_STACK_LINE(363)
									_this->z;
								}
							}
							HX_STACK_LINE(363)
							_this->ignore_listeners = prev;
							HX_STACK_LINE(363)
							if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(363)
								_this->listen_x(_this->x);
							}
							HX_STACK_LINE(363)
							if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(363)
								_this->listen_y(_this->y);
							}
							HX_STACK_LINE(363)
							if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(363)
								_this->listen_z(_this->z);
							}
							HX_STACK_LINE(363)
							_this;
						}
						HX_STACK_LINE(363)
						_this;
					}
					HX_STACK_LINE(363)
					if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(363)
						this->listen_z(this->z);
					}
					HX_STACK_LINE(363)
					this->z;
				}
			}
			HX_STACK_LINE(363)
			{
				HX_STACK_LINE(363)
				this->w = _w;
				HX_STACK_LINE(363)
				if ((this->_construct)){
					HX_STACK_LINE(363)
					this->w;
				}
				else{
					HX_STACK_LINE(363)
					if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
						HX_STACK_LINE(363)
						Dynamic();
					}
					else{
						HX_STACK_LINE(363)
						::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(363)
						int order = (int)0;		HX_STACK_VAR(order,"order");
						HX_STACK_LINE(363)
						Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
						HX_STACK_LINE(363)
						Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
						HX_STACK_LINE(363)
						Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
						HX_STACK_LINE(363)
						Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
						HX_STACK_LINE(363)
						Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(363)
						Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(363)
						Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(363)
						if (((order == (int)0))){
							HX_STACK_LINE(363)
							_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",363,0x23671680)
									{
										HX_STACK_LINE(363)
										Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(363)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(363)
							_y1 = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(363)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
						}
						else{
							HX_STACK_LINE(363)
							if (((order == (int)1))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",363,0x23671680)
										{
											HX_STACK_LINE(363)
											Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(363)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(363)
								_x1 = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(363)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(363)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(363)
								if (((order == (int)2))){
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",363,0x23671680)
											{
												HX_STACK_LINE(363)
												Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(363)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(363)
									_x1 = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(363)
									_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
									HX_STACK_LINE(363)
									_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
								}
								else{
									HX_STACK_LINE(363)
									if (((order == (int)3))){
										HX_STACK_LINE(363)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",363,0x23671680)
												{
													HX_STACK_LINE(363)
													Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(363)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(363)
										_y1 = ::Math_obj::asin(_Function_10_1::Block(this));
										HX_STACK_LINE(363)
										_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
									}
									else{
										HX_STACK_LINE(363)
										if (((order == (int)4))){
											HX_STACK_LINE(363)
											_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(363)
											_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",363,0x23671680)
													{
														HX_STACK_LINE(363)
														Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(363)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(363)
											_z1 = ::Math_obj::asin(_Function_11_1::Block(this));
										}
										else{
											HX_STACK_LINE(363)
											if (((order == (int)5))){
												HX_STACK_LINE(363)
												_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
												HX_STACK_LINE(363)
												_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
												struct _Function_12_1{
													inline static Float Block( ::phoenix::Quaternion_obj *__this){
														HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",363,0x23671680)
														{
															HX_STACK_LINE(363)
															Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
															HX_STACK_LINE(363)
															return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
														}
														return null();
													}
												};
												HX_STACK_LINE(363)
												_z1 = ::Math_obj::asin(_Function_12_1::Block(this));
											}
										}
									}
								}
							}
						}
						HX_STACK_LINE(363)
						{
							HX_STACK_LINE(363)
							Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
							HX_STACK_LINE(363)
							Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
							HX_STACK_LINE(363)
							Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
							HX_STACK_LINE(363)
							bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
							HX_STACK_LINE(363)
							_this->ignore_listeners = true;
							HX_STACK_LINE(363)
							{
								HX_STACK_LINE(363)
								_this->x = _x2;
								HX_STACK_LINE(363)
								if ((_this->_construct)){
									HX_STACK_LINE(363)
									_this->x;
								}
								else{
									HX_STACK_LINE(363)
									if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(363)
										_this->listen_x(_x2);
									}
									HX_STACK_LINE(363)
									_this->x;
								}
							}
							HX_STACK_LINE(363)
							{
								HX_STACK_LINE(363)
								_this->y = _y2;
								HX_STACK_LINE(363)
								if ((_this->_construct)){
									HX_STACK_LINE(363)
									_this->y;
								}
								else{
									HX_STACK_LINE(363)
									if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(363)
										_this->listen_y(_y2);
									}
									HX_STACK_LINE(363)
									_this->y;
								}
							}
							HX_STACK_LINE(363)
							{
								HX_STACK_LINE(363)
								_this->z = _z2;
								HX_STACK_LINE(363)
								if ((_this->_construct)){
									HX_STACK_LINE(363)
									_this->z;
								}
								else{
									HX_STACK_LINE(363)
									if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(363)
										_this->listen_z(_z2);
									}
									HX_STACK_LINE(363)
									_this->z;
								}
							}
							HX_STACK_LINE(363)
							_this->ignore_listeners = prev;
							HX_STACK_LINE(363)
							if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(363)
								_this->listen_x(_this->x);
							}
							HX_STACK_LINE(363)
							if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(363)
								_this->listen_y(_this->y);
							}
							HX_STACK_LINE(363)
							if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(363)
								_this->listen_z(_this->z);
							}
							HX_STACK_LINE(363)
							_this;
						}
						HX_STACK_LINE(363)
						_this;
					}
					HX_STACK_LINE(363)
					if (((bool((this->listen_w_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(363)
						this->listen_w(this->w);
					}
					HX_STACK_LINE(363)
					this->w;
				}
			}
			HX_STACK_LINE(363)
			this->ignore_euler = false;
			HX_STACK_LINE(363)
			if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
				HX_STACK_LINE(363)
				Dynamic();
			}
			else{
				HX_STACK_LINE(363)
				::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(363)
				int order = (int)0;		HX_STACK_VAR(order,"order");
				HX_STACK_LINE(363)
				Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
				HX_STACK_LINE(363)
				Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
				HX_STACK_LINE(363)
				Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
				HX_STACK_LINE(363)
				Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
				HX_STACK_LINE(363)
				Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
				HX_STACK_LINE(363)
				Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
				HX_STACK_LINE(363)
				Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
				HX_STACK_LINE(363)
				if (((order == (int)0))){
					HX_STACK_LINE(363)
					_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
					struct _Function_5_1{
						inline static Float Block( ::phoenix::Quaternion_obj *__this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",363,0x23671680)
							{
								HX_STACK_LINE(363)
								Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(363)
								return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(363)
					_y1 = ::Math_obj::asin(_Function_5_1::Block(this));
					HX_STACK_LINE(363)
					_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
				}
				else{
					HX_STACK_LINE(363)
					if (((order == (int)1))){
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",363,0x23671680)
								{
									HX_STACK_LINE(363)
									Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(363)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(363)
						_x1 = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(363)
						_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
						HX_STACK_LINE(363)
						_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
					}
					else{
						HX_STACK_LINE(363)
						if (((order == (int)2))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",363,0x23671680)
									{
										HX_STACK_LINE(363)
										Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(363)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(363)
							_x1 = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(363)
							_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(363)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(363)
							if (((order == (int)3))){
								HX_STACK_LINE(363)
								_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",363,0x23671680)
										{
											HX_STACK_LINE(363)
											Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(363)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(363)
								_y1 = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(363)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
							}
							else{
								HX_STACK_LINE(363)
								if (((order == (int)4))){
									HX_STACK_LINE(363)
									_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
									HX_STACK_LINE(363)
									_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",363,0x23671680)
											{
												HX_STACK_LINE(363)
												Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(363)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(363)
									_z1 = ::Math_obj::asin(_Function_9_1::Block(this));
								}
								else{
									HX_STACK_LINE(363)
									if (((order == (int)5))){
										HX_STACK_LINE(363)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(363)
										_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",363,0x23671680)
												{
													HX_STACK_LINE(363)
													Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(363)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(363)
										_z1 = ::Math_obj::asin(_Function_10_1::Block(this));
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(363)
				{
					HX_STACK_LINE(363)
					Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
					HX_STACK_LINE(363)
					Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
					HX_STACK_LINE(363)
					Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
					HX_STACK_LINE(363)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(363)
					_this->ignore_listeners = true;
					HX_STACK_LINE(363)
					{
						HX_STACK_LINE(363)
						_this->x = _x2;
						HX_STACK_LINE(363)
						if ((_this->_construct)){
							HX_STACK_LINE(363)
							_this->x;
						}
						else{
							HX_STACK_LINE(363)
							if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(363)
								_this->listen_x(_x2);
							}
							HX_STACK_LINE(363)
							_this->x;
						}
					}
					HX_STACK_LINE(363)
					{
						HX_STACK_LINE(363)
						_this->y = _y2;
						HX_STACK_LINE(363)
						if ((_this->_construct)){
							HX_STACK_LINE(363)
							_this->y;
						}
						else{
							HX_STACK_LINE(363)
							if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(363)
								_this->listen_y(_y2);
							}
							HX_STACK_LINE(363)
							_this->y;
						}
					}
					HX_STACK_LINE(363)
					{
						HX_STACK_LINE(363)
						_this->z = _z2;
						HX_STACK_LINE(363)
						if ((_this->_construct)){
							HX_STACK_LINE(363)
							_this->z;
						}
						else{
							HX_STACK_LINE(363)
							if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(363)
								_this->listen_z(_z2);
							}
							HX_STACK_LINE(363)
							_this->z;
						}
					}
					HX_STACK_LINE(363)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(363)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(363)
						_this->listen_x(_this->x);
					}
					HX_STACK_LINE(363)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(363)
						_this->listen_y(_this->y);
					}
					HX_STACK_LINE(363)
					if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(363)
						_this->listen_z(_this->z);
					}
					HX_STACK_LINE(363)
					_this;
				}
				HX_STACK_LINE(363)
				_this;
			}
			HX_STACK_LINE(363)
			if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(363)
				this->listen_x(this->x);
			}
			HX_STACK_LINE(363)
			if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(363)
				this->listen_y(this->y);
			}
			HX_STACK_LINE(363)
			if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(363)
				this->listen_z(this->z);
			}
			HX_STACK_LINE(363)
			if (((bool((this->listen_w_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(363)
				this->listen_w(this->w);
			}
		}
		HX_STACK_LINE(365)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(369)
	Float halfTheta = ::Math_obj::acos(cosHalfTheta);		HX_STACK_VAR(halfTheta,"halfTheta");
	HX_STACK_LINE(370)
	Float sinHalfTheta = ::Math_obj::sqrt((1.0 - (cosHalfTheta * cosHalfTheta)));		HX_STACK_VAR(sinHalfTheta,"sinHalfTheta");
	HX_STACK_LINE(372)
	if (((::Math_obj::abs(sinHalfTheta) < 0.001))){
		HX_STACK_LINE(374)
		{
			HX_STACK_LINE(374)
			this->ignore_euler = true;
			HX_STACK_LINE(374)
			{
				HX_STACK_LINE(374)
				this->x = (0.5 * ((_w + this->w)));
				HX_STACK_LINE(374)
				if ((this->_construct)){
					HX_STACK_LINE(374)
					this->x;
				}
				else{
					HX_STACK_LINE(374)
					if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
						HX_STACK_LINE(374)
						Dynamic();
					}
					else{
						HX_STACK_LINE(374)
						::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(374)
						int order = (int)0;		HX_STACK_VAR(order,"order");
						HX_STACK_LINE(374)
						Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
						HX_STACK_LINE(374)
						Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
						HX_STACK_LINE(374)
						Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
						HX_STACK_LINE(374)
						Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
						HX_STACK_LINE(374)
						Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(374)
						Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(374)
						Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(374)
						if (((order == (int)0))){
							HX_STACK_LINE(374)
							_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",374,0x23671680)
									{
										HX_STACK_LINE(374)
										Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(374)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(374)
							_y1 = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(374)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
						}
						else{
							HX_STACK_LINE(374)
							if (((order == (int)1))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",374,0x23671680)
										{
											HX_STACK_LINE(374)
											Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(374)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(374)
								_x1 = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(374)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(374)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(374)
								if (((order == (int)2))){
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",374,0x23671680)
											{
												HX_STACK_LINE(374)
												Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(374)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(374)
									_x1 = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(374)
									_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
									HX_STACK_LINE(374)
									_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
								}
								else{
									HX_STACK_LINE(374)
									if (((order == (int)3))){
										HX_STACK_LINE(374)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",374,0x23671680)
												{
													HX_STACK_LINE(374)
													Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(374)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(374)
										_y1 = ::Math_obj::asin(_Function_10_1::Block(this));
										HX_STACK_LINE(374)
										_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
									}
									else{
										HX_STACK_LINE(374)
										if (((order == (int)4))){
											HX_STACK_LINE(374)
											_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(374)
											_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",374,0x23671680)
													{
														HX_STACK_LINE(374)
														Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(374)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(374)
											_z1 = ::Math_obj::asin(_Function_11_1::Block(this));
										}
										else{
											HX_STACK_LINE(374)
											if (((order == (int)5))){
												HX_STACK_LINE(374)
												_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
												HX_STACK_LINE(374)
												_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
												struct _Function_12_1{
													inline static Float Block( ::phoenix::Quaternion_obj *__this){
														HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",374,0x23671680)
														{
															HX_STACK_LINE(374)
															Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
															HX_STACK_LINE(374)
															return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
														}
														return null();
													}
												};
												HX_STACK_LINE(374)
												_z1 = ::Math_obj::asin(_Function_12_1::Block(this));
											}
										}
									}
								}
							}
						}
						HX_STACK_LINE(374)
						{
							HX_STACK_LINE(374)
							Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
							HX_STACK_LINE(374)
							Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
							HX_STACK_LINE(374)
							Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
							HX_STACK_LINE(374)
							bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
							HX_STACK_LINE(374)
							_this->ignore_listeners = true;
							HX_STACK_LINE(374)
							{
								HX_STACK_LINE(374)
								_this->x = _x2;
								HX_STACK_LINE(374)
								if ((_this->_construct)){
									HX_STACK_LINE(374)
									_this->x;
								}
								else{
									HX_STACK_LINE(374)
									if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(374)
										_this->listen_x(_x2);
									}
									HX_STACK_LINE(374)
									_this->x;
								}
							}
							HX_STACK_LINE(374)
							{
								HX_STACK_LINE(374)
								_this->y = _y2;
								HX_STACK_LINE(374)
								if ((_this->_construct)){
									HX_STACK_LINE(374)
									_this->y;
								}
								else{
									HX_STACK_LINE(374)
									if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(374)
										_this->listen_y(_y2);
									}
									HX_STACK_LINE(374)
									_this->y;
								}
							}
							HX_STACK_LINE(374)
							{
								HX_STACK_LINE(374)
								_this->z = _z2;
								HX_STACK_LINE(374)
								if ((_this->_construct)){
									HX_STACK_LINE(374)
									_this->z;
								}
								else{
									HX_STACK_LINE(374)
									if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(374)
										_this->listen_z(_z2);
									}
									HX_STACK_LINE(374)
									_this->z;
								}
							}
							HX_STACK_LINE(374)
							_this->ignore_listeners = prev;
							HX_STACK_LINE(374)
							if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(374)
								_this->listen_x(_this->x);
							}
							HX_STACK_LINE(374)
							if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(374)
								_this->listen_y(_this->y);
							}
							HX_STACK_LINE(374)
							if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(374)
								_this->listen_z(_this->z);
							}
							HX_STACK_LINE(374)
							_this;
						}
						HX_STACK_LINE(374)
						_this;
					}
					HX_STACK_LINE(374)
					if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(374)
						this->listen_x(this->x);
					}
					HX_STACK_LINE(374)
					this->x;
				}
			}
			HX_STACK_LINE(374)
			{
				HX_STACK_LINE(374)
				this->y = (0.5 * ((_x + this->x)));
				HX_STACK_LINE(374)
				if ((this->_construct)){
					HX_STACK_LINE(374)
					this->y;
				}
				else{
					HX_STACK_LINE(374)
					if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
						HX_STACK_LINE(374)
						Dynamic();
					}
					else{
						HX_STACK_LINE(374)
						::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(374)
						int order = (int)0;		HX_STACK_VAR(order,"order");
						HX_STACK_LINE(374)
						Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
						HX_STACK_LINE(374)
						Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
						HX_STACK_LINE(374)
						Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
						HX_STACK_LINE(374)
						Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
						HX_STACK_LINE(374)
						Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(374)
						Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(374)
						Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(374)
						if (((order == (int)0))){
							HX_STACK_LINE(374)
							_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",374,0x23671680)
									{
										HX_STACK_LINE(374)
										Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(374)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(374)
							_y1 = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(374)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
						}
						else{
							HX_STACK_LINE(374)
							if (((order == (int)1))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",374,0x23671680)
										{
											HX_STACK_LINE(374)
											Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(374)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(374)
								_x1 = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(374)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(374)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(374)
								if (((order == (int)2))){
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",374,0x23671680)
											{
												HX_STACK_LINE(374)
												Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(374)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(374)
									_x1 = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(374)
									_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
									HX_STACK_LINE(374)
									_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
								}
								else{
									HX_STACK_LINE(374)
									if (((order == (int)3))){
										HX_STACK_LINE(374)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",374,0x23671680)
												{
													HX_STACK_LINE(374)
													Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(374)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(374)
										_y1 = ::Math_obj::asin(_Function_10_1::Block(this));
										HX_STACK_LINE(374)
										_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
									}
									else{
										HX_STACK_LINE(374)
										if (((order == (int)4))){
											HX_STACK_LINE(374)
											_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(374)
											_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",374,0x23671680)
													{
														HX_STACK_LINE(374)
														Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(374)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(374)
											_z1 = ::Math_obj::asin(_Function_11_1::Block(this));
										}
										else{
											HX_STACK_LINE(374)
											if (((order == (int)5))){
												HX_STACK_LINE(374)
												_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
												HX_STACK_LINE(374)
												_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
												struct _Function_12_1{
													inline static Float Block( ::phoenix::Quaternion_obj *__this){
														HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",374,0x23671680)
														{
															HX_STACK_LINE(374)
															Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
															HX_STACK_LINE(374)
															return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
														}
														return null();
													}
												};
												HX_STACK_LINE(374)
												_z1 = ::Math_obj::asin(_Function_12_1::Block(this));
											}
										}
									}
								}
							}
						}
						HX_STACK_LINE(374)
						{
							HX_STACK_LINE(374)
							Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
							HX_STACK_LINE(374)
							Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
							HX_STACK_LINE(374)
							Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
							HX_STACK_LINE(374)
							bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
							HX_STACK_LINE(374)
							_this->ignore_listeners = true;
							HX_STACK_LINE(374)
							{
								HX_STACK_LINE(374)
								_this->x = _x2;
								HX_STACK_LINE(374)
								if ((_this->_construct)){
									HX_STACK_LINE(374)
									_this->x;
								}
								else{
									HX_STACK_LINE(374)
									if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(374)
										_this->listen_x(_x2);
									}
									HX_STACK_LINE(374)
									_this->x;
								}
							}
							HX_STACK_LINE(374)
							{
								HX_STACK_LINE(374)
								_this->y = _y2;
								HX_STACK_LINE(374)
								if ((_this->_construct)){
									HX_STACK_LINE(374)
									_this->y;
								}
								else{
									HX_STACK_LINE(374)
									if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(374)
										_this->listen_y(_y2);
									}
									HX_STACK_LINE(374)
									_this->y;
								}
							}
							HX_STACK_LINE(374)
							{
								HX_STACK_LINE(374)
								_this->z = _z2;
								HX_STACK_LINE(374)
								if ((_this->_construct)){
									HX_STACK_LINE(374)
									_this->z;
								}
								else{
									HX_STACK_LINE(374)
									if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(374)
										_this->listen_z(_z2);
									}
									HX_STACK_LINE(374)
									_this->z;
								}
							}
							HX_STACK_LINE(374)
							_this->ignore_listeners = prev;
							HX_STACK_LINE(374)
							if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(374)
								_this->listen_x(_this->x);
							}
							HX_STACK_LINE(374)
							if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(374)
								_this->listen_y(_this->y);
							}
							HX_STACK_LINE(374)
							if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(374)
								_this->listen_z(_this->z);
							}
							HX_STACK_LINE(374)
							_this;
						}
						HX_STACK_LINE(374)
						_this;
					}
					HX_STACK_LINE(374)
					if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(374)
						this->listen_y(this->y);
					}
					HX_STACK_LINE(374)
					this->y;
				}
			}
			HX_STACK_LINE(374)
			{
				HX_STACK_LINE(374)
				this->z = (0.5 * ((_y + this->y)));
				HX_STACK_LINE(374)
				if ((this->_construct)){
					HX_STACK_LINE(374)
					this->z;
				}
				else{
					HX_STACK_LINE(374)
					if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
						HX_STACK_LINE(374)
						Dynamic();
					}
					else{
						HX_STACK_LINE(374)
						::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(374)
						int order = (int)0;		HX_STACK_VAR(order,"order");
						HX_STACK_LINE(374)
						Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
						HX_STACK_LINE(374)
						Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
						HX_STACK_LINE(374)
						Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
						HX_STACK_LINE(374)
						Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
						HX_STACK_LINE(374)
						Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(374)
						Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(374)
						Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(374)
						if (((order == (int)0))){
							HX_STACK_LINE(374)
							_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",374,0x23671680)
									{
										HX_STACK_LINE(374)
										Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(374)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(374)
							_y1 = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(374)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
						}
						else{
							HX_STACK_LINE(374)
							if (((order == (int)1))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",374,0x23671680)
										{
											HX_STACK_LINE(374)
											Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(374)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(374)
								_x1 = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(374)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(374)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(374)
								if (((order == (int)2))){
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",374,0x23671680)
											{
												HX_STACK_LINE(374)
												Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(374)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(374)
									_x1 = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(374)
									_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
									HX_STACK_LINE(374)
									_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
								}
								else{
									HX_STACK_LINE(374)
									if (((order == (int)3))){
										HX_STACK_LINE(374)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",374,0x23671680)
												{
													HX_STACK_LINE(374)
													Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(374)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(374)
										_y1 = ::Math_obj::asin(_Function_10_1::Block(this));
										HX_STACK_LINE(374)
										_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
									}
									else{
										HX_STACK_LINE(374)
										if (((order == (int)4))){
											HX_STACK_LINE(374)
											_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(374)
											_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",374,0x23671680)
													{
														HX_STACK_LINE(374)
														Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(374)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(374)
											_z1 = ::Math_obj::asin(_Function_11_1::Block(this));
										}
										else{
											HX_STACK_LINE(374)
											if (((order == (int)5))){
												HX_STACK_LINE(374)
												_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
												HX_STACK_LINE(374)
												_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
												struct _Function_12_1{
													inline static Float Block( ::phoenix::Quaternion_obj *__this){
														HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",374,0x23671680)
														{
															HX_STACK_LINE(374)
															Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
															HX_STACK_LINE(374)
															return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
														}
														return null();
													}
												};
												HX_STACK_LINE(374)
												_z1 = ::Math_obj::asin(_Function_12_1::Block(this));
											}
										}
									}
								}
							}
						}
						HX_STACK_LINE(374)
						{
							HX_STACK_LINE(374)
							Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
							HX_STACK_LINE(374)
							Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
							HX_STACK_LINE(374)
							Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
							HX_STACK_LINE(374)
							bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
							HX_STACK_LINE(374)
							_this->ignore_listeners = true;
							HX_STACK_LINE(374)
							{
								HX_STACK_LINE(374)
								_this->x = _x2;
								HX_STACK_LINE(374)
								if ((_this->_construct)){
									HX_STACK_LINE(374)
									_this->x;
								}
								else{
									HX_STACK_LINE(374)
									if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(374)
										_this->listen_x(_x2);
									}
									HX_STACK_LINE(374)
									_this->x;
								}
							}
							HX_STACK_LINE(374)
							{
								HX_STACK_LINE(374)
								_this->y = _y2;
								HX_STACK_LINE(374)
								if ((_this->_construct)){
									HX_STACK_LINE(374)
									_this->y;
								}
								else{
									HX_STACK_LINE(374)
									if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(374)
										_this->listen_y(_y2);
									}
									HX_STACK_LINE(374)
									_this->y;
								}
							}
							HX_STACK_LINE(374)
							{
								HX_STACK_LINE(374)
								_this->z = _z2;
								HX_STACK_LINE(374)
								if ((_this->_construct)){
									HX_STACK_LINE(374)
									_this->z;
								}
								else{
									HX_STACK_LINE(374)
									if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(374)
										_this->listen_z(_z2);
									}
									HX_STACK_LINE(374)
									_this->z;
								}
							}
							HX_STACK_LINE(374)
							_this->ignore_listeners = prev;
							HX_STACK_LINE(374)
							if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(374)
								_this->listen_x(_this->x);
							}
							HX_STACK_LINE(374)
							if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(374)
								_this->listen_y(_this->y);
							}
							HX_STACK_LINE(374)
							if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(374)
								_this->listen_z(_this->z);
							}
							HX_STACK_LINE(374)
							_this;
						}
						HX_STACK_LINE(374)
						_this;
					}
					HX_STACK_LINE(374)
					if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(374)
						this->listen_z(this->z);
					}
					HX_STACK_LINE(374)
					this->z;
				}
			}
			HX_STACK_LINE(374)
			{
				HX_STACK_LINE(374)
				this->w = (0.5 * ((_z + this->z)));
				HX_STACK_LINE(374)
				if ((this->_construct)){
					HX_STACK_LINE(374)
					this->w;
				}
				else{
					HX_STACK_LINE(374)
					if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
						HX_STACK_LINE(374)
						Dynamic();
					}
					else{
						HX_STACK_LINE(374)
						::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(374)
						int order = (int)0;		HX_STACK_VAR(order,"order");
						HX_STACK_LINE(374)
						Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
						HX_STACK_LINE(374)
						Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
						HX_STACK_LINE(374)
						Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
						HX_STACK_LINE(374)
						Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
						HX_STACK_LINE(374)
						Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(374)
						Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(374)
						Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(374)
						if (((order == (int)0))){
							HX_STACK_LINE(374)
							_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",374,0x23671680)
									{
										HX_STACK_LINE(374)
										Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(374)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(374)
							_y1 = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(374)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
						}
						else{
							HX_STACK_LINE(374)
							if (((order == (int)1))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",374,0x23671680)
										{
											HX_STACK_LINE(374)
											Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(374)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(374)
								_x1 = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(374)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(374)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(374)
								if (((order == (int)2))){
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",374,0x23671680)
											{
												HX_STACK_LINE(374)
												Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(374)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(374)
									_x1 = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(374)
									_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
									HX_STACK_LINE(374)
									_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
								}
								else{
									HX_STACK_LINE(374)
									if (((order == (int)3))){
										HX_STACK_LINE(374)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",374,0x23671680)
												{
													HX_STACK_LINE(374)
													Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(374)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(374)
										_y1 = ::Math_obj::asin(_Function_10_1::Block(this));
										HX_STACK_LINE(374)
										_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
									}
									else{
										HX_STACK_LINE(374)
										if (((order == (int)4))){
											HX_STACK_LINE(374)
											_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(374)
											_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",374,0x23671680)
													{
														HX_STACK_LINE(374)
														Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(374)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(374)
											_z1 = ::Math_obj::asin(_Function_11_1::Block(this));
										}
										else{
											HX_STACK_LINE(374)
											if (((order == (int)5))){
												HX_STACK_LINE(374)
												_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
												HX_STACK_LINE(374)
												_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
												struct _Function_12_1{
													inline static Float Block( ::phoenix::Quaternion_obj *__this){
														HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",374,0x23671680)
														{
															HX_STACK_LINE(374)
															Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
															HX_STACK_LINE(374)
															return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
														}
														return null();
													}
												};
												HX_STACK_LINE(374)
												_z1 = ::Math_obj::asin(_Function_12_1::Block(this));
											}
										}
									}
								}
							}
						}
						HX_STACK_LINE(374)
						{
							HX_STACK_LINE(374)
							Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
							HX_STACK_LINE(374)
							Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
							HX_STACK_LINE(374)
							Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
							HX_STACK_LINE(374)
							bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
							HX_STACK_LINE(374)
							_this->ignore_listeners = true;
							HX_STACK_LINE(374)
							{
								HX_STACK_LINE(374)
								_this->x = _x2;
								HX_STACK_LINE(374)
								if ((_this->_construct)){
									HX_STACK_LINE(374)
									_this->x;
								}
								else{
									HX_STACK_LINE(374)
									if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(374)
										_this->listen_x(_x2);
									}
									HX_STACK_LINE(374)
									_this->x;
								}
							}
							HX_STACK_LINE(374)
							{
								HX_STACK_LINE(374)
								_this->y = _y2;
								HX_STACK_LINE(374)
								if ((_this->_construct)){
									HX_STACK_LINE(374)
									_this->y;
								}
								else{
									HX_STACK_LINE(374)
									if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(374)
										_this->listen_y(_y2);
									}
									HX_STACK_LINE(374)
									_this->y;
								}
							}
							HX_STACK_LINE(374)
							{
								HX_STACK_LINE(374)
								_this->z = _z2;
								HX_STACK_LINE(374)
								if ((_this->_construct)){
									HX_STACK_LINE(374)
									_this->z;
								}
								else{
									HX_STACK_LINE(374)
									if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
										HX_STACK_LINE(374)
										_this->listen_z(_z2);
									}
									HX_STACK_LINE(374)
									_this->z;
								}
							}
							HX_STACK_LINE(374)
							_this->ignore_listeners = prev;
							HX_STACK_LINE(374)
							if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(374)
								_this->listen_x(_this->x);
							}
							HX_STACK_LINE(374)
							if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(374)
								_this->listen_y(_this->y);
							}
							HX_STACK_LINE(374)
							if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(374)
								_this->listen_z(_this->z);
							}
							HX_STACK_LINE(374)
							_this;
						}
						HX_STACK_LINE(374)
						_this;
					}
					HX_STACK_LINE(374)
					if (((bool((this->listen_w_dyn() != null())) && bool(!(this->ignore_listeners))))){
						HX_STACK_LINE(374)
						this->listen_w(this->w);
					}
					HX_STACK_LINE(374)
					this->w;
				}
			}
			HX_STACK_LINE(374)
			this->ignore_euler = false;
			HX_STACK_LINE(374)
			if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
				HX_STACK_LINE(374)
				Dynamic();
			}
			else{
				HX_STACK_LINE(374)
				::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(374)
				int order = (int)0;		HX_STACK_VAR(order,"order");
				HX_STACK_LINE(374)
				Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
				HX_STACK_LINE(374)
				Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
				HX_STACK_LINE(374)
				Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
				HX_STACK_LINE(374)
				Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
				HX_STACK_LINE(374)
				Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
				HX_STACK_LINE(374)
				Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
				HX_STACK_LINE(374)
				Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
				HX_STACK_LINE(374)
				if (((order == (int)0))){
					HX_STACK_LINE(374)
					_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
					struct _Function_5_1{
						inline static Float Block( ::phoenix::Quaternion_obj *__this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",374,0x23671680)
							{
								HX_STACK_LINE(374)
								Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(374)
								return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(374)
					_y1 = ::Math_obj::asin(_Function_5_1::Block(this));
					HX_STACK_LINE(374)
					_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
				}
				else{
					HX_STACK_LINE(374)
					if (((order == (int)1))){
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",374,0x23671680)
								{
									HX_STACK_LINE(374)
									Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(374)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(374)
						_x1 = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(374)
						_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
						HX_STACK_LINE(374)
						_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
					}
					else{
						HX_STACK_LINE(374)
						if (((order == (int)2))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",374,0x23671680)
									{
										HX_STACK_LINE(374)
										Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(374)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(374)
							_x1 = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(374)
							_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(374)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(374)
							if (((order == (int)3))){
								HX_STACK_LINE(374)
								_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",374,0x23671680)
										{
											HX_STACK_LINE(374)
											Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(374)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(374)
								_y1 = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(374)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
							}
							else{
								HX_STACK_LINE(374)
								if (((order == (int)4))){
									HX_STACK_LINE(374)
									_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
									HX_STACK_LINE(374)
									_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",374,0x23671680)
											{
												HX_STACK_LINE(374)
												Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(374)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(374)
									_z1 = ::Math_obj::asin(_Function_9_1::Block(this));
								}
								else{
									HX_STACK_LINE(374)
									if (((order == (int)5))){
										HX_STACK_LINE(374)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(374)
										_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",374,0x23671680)
												{
													HX_STACK_LINE(374)
													Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(374)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(374)
										_z1 = ::Math_obj::asin(_Function_10_1::Block(this));
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(374)
				{
					HX_STACK_LINE(374)
					Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
					HX_STACK_LINE(374)
					Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
					HX_STACK_LINE(374)
					Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
					HX_STACK_LINE(374)
					bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
					HX_STACK_LINE(374)
					_this->ignore_listeners = true;
					HX_STACK_LINE(374)
					{
						HX_STACK_LINE(374)
						_this->x = _x2;
						HX_STACK_LINE(374)
						if ((_this->_construct)){
							HX_STACK_LINE(374)
							_this->x;
						}
						else{
							HX_STACK_LINE(374)
							if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(374)
								_this->listen_x(_x2);
							}
							HX_STACK_LINE(374)
							_this->x;
						}
					}
					HX_STACK_LINE(374)
					{
						HX_STACK_LINE(374)
						_this->y = _y2;
						HX_STACK_LINE(374)
						if ((_this->_construct)){
							HX_STACK_LINE(374)
							_this->y;
						}
						else{
							HX_STACK_LINE(374)
							if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(374)
								_this->listen_y(_y2);
							}
							HX_STACK_LINE(374)
							_this->y;
						}
					}
					HX_STACK_LINE(374)
					{
						HX_STACK_LINE(374)
						_this->z = _z2;
						HX_STACK_LINE(374)
						if ((_this->_construct)){
							HX_STACK_LINE(374)
							_this->z;
						}
						else{
							HX_STACK_LINE(374)
							if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
								HX_STACK_LINE(374)
								_this->listen_z(_z2);
							}
							HX_STACK_LINE(374)
							_this->z;
						}
					}
					HX_STACK_LINE(374)
					_this->ignore_listeners = prev;
					HX_STACK_LINE(374)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(374)
						_this->listen_x(_this->x);
					}
					HX_STACK_LINE(374)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(374)
						_this->listen_y(_this->y);
					}
					HX_STACK_LINE(374)
					if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(374)
						_this->listen_z(_this->z);
					}
					HX_STACK_LINE(374)
					_this;
				}
				HX_STACK_LINE(374)
				_this;
			}
			HX_STACK_LINE(374)
			if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(374)
				this->listen_x(this->x);
			}
			HX_STACK_LINE(374)
			if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(374)
				this->listen_y(this->y);
			}
			HX_STACK_LINE(374)
			if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(374)
				this->listen_z(this->z);
			}
			HX_STACK_LINE(374)
			if (((bool((this->listen_w_dyn() != null())) && bool(!(this->ignore_listeners))))){
				HX_STACK_LINE(374)
				this->listen_w(this->w);
			}
		}
		HX_STACK_LINE(379)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(383)
	Float ratioA = (Float(::Math_obj::sin(((((int)1 - _t)) * halfTheta))) / Float(sinHalfTheta));		HX_STACK_VAR(ratioA,"ratioA");
	HX_STACK_LINE(384)
	Float ratioB = (Float(::Math_obj::sin((_t * halfTheta))) / Float(sinHalfTheta));		HX_STACK_VAR(ratioB,"ratioB");
	HX_STACK_LINE(386)
	{
		HX_STACK_LINE(386)
		this->ignore_euler = true;
		HX_STACK_LINE(386)
		{
			HX_STACK_LINE(386)
			this->x = ((_w * ratioA) + (this->w * ratioB));
			HX_STACK_LINE(386)
			if ((this->_construct)){
				HX_STACK_LINE(386)
				this->x;
			}
			else{
				HX_STACK_LINE(386)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(386)
					Dynamic();
				}
				else{
					HX_STACK_LINE(386)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(386)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(386)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(386)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(386)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(386)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(386)
					Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(386)
					Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(386)
					Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(386)
					if (((order == (int)0))){
						HX_STACK_LINE(386)
						_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",386,0x23671680)
								{
									HX_STACK_LINE(386)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(386)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(386)
						_y1 = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(386)
						_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(386)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",386,0x23671680)
									{
										HX_STACK_LINE(386)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(386)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(386)
							_x1 = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(386)
							_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(386)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(386)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",386,0x23671680)
										{
											HX_STACK_LINE(386)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(386)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(386)
								_x1 = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(386)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(386)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(386)
								if (((order == (int)3))){
									HX_STACK_LINE(386)
									_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",386,0x23671680)
											{
												HX_STACK_LINE(386)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(386)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(386)
									_y1 = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(386)
									_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(386)
									if (((order == (int)4))){
										HX_STACK_LINE(386)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(386)
										_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",386,0x23671680)
												{
													HX_STACK_LINE(386)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(386)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(386)
										_z1 = ::Math_obj::asin(_Function_10_1::Block(this));
									}
									else{
										HX_STACK_LINE(386)
										if (((order == (int)5))){
											HX_STACK_LINE(386)
											_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(386)
											_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",386,0x23671680)
													{
														HX_STACK_LINE(386)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(386)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(386)
											_z1 = ::Math_obj::asin(_Function_11_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(386)
					{
						HX_STACK_LINE(386)
						Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
						HX_STACK_LINE(386)
						Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
						HX_STACK_LINE(386)
						Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
						HX_STACK_LINE(386)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(386)
						_this->ignore_listeners = true;
						HX_STACK_LINE(386)
						{
							HX_STACK_LINE(386)
							_this->x = _x2;
							HX_STACK_LINE(386)
							if ((_this->_construct)){
								HX_STACK_LINE(386)
								_this->x;
							}
							else{
								HX_STACK_LINE(386)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(386)
									_this->listen_x(_x2);
								}
								HX_STACK_LINE(386)
								_this->x;
							}
						}
						HX_STACK_LINE(386)
						{
							HX_STACK_LINE(386)
							_this->y = _y2;
							HX_STACK_LINE(386)
							if ((_this->_construct)){
								HX_STACK_LINE(386)
								_this->y;
							}
							else{
								HX_STACK_LINE(386)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(386)
									_this->listen_y(_y2);
								}
								HX_STACK_LINE(386)
								_this->y;
							}
						}
						HX_STACK_LINE(386)
						{
							HX_STACK_LINE(386)
							_this->z = _z2;
							HX_STACK_LINE(386)
							if ((_this->_construct)){
								HX_STACK_LINE(386)
								_this->z;
							}
							else{
								HX_STACK_LINE(386)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(386)
									_this->listen_z(_z2);
								}
								HX_STACK_LINE(386)
								_this->z;
							}
						}
						HX_STACK_LINE(386)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(386)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(386)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(386)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(386)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(386)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(386)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(386)
						_this;
					}
					HX_STACK_LINE(386)
					_this;
				}
				HX_STACK_LINE(386)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(386)
					this->listen_x(this->x);
				}
				HX_STACK_LINE(386)
				this->x;
			}
		}
		HX_STACK_LINE(386)
		{
			HX_STACK_LINE(386)
			this->y = ((_x * ratioA) + (this->x * ratioB));
			HX_STACK_LINE(386)
			if ((this->_construct)){
				HX_STACK_LINE(386)
				this->y;
			}
			else{
				HX_STACK_LINE(386)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(386)
					Dynamic();
				}
				else{
					HX_STACK_LINE(386)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(386)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(386)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(386)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(386)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(386)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(386)
					Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(386)
					Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(386)
					Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(386)
					if (((order == (int)0))){
						HX_STACK_LINE(386)
						_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",386,0x23671680)
								{
									HX_STACK_LINE(386)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(386)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(386)
						_y1 = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(386)
						_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(386)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",386,0x23671680)
									{
										HX_STACK_LINE(386)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(386)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(386)
							_x1 = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(386)
							_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(386)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(386)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",386,0x23671680)
										{
											HX_STACK_LINE(386)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(386)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(386)
								_x1 = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(386)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(386)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(386)
								if (((order == (int)3))){
									HX_STACK_LINE(386)
									_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",386,0x23671680)
											{
												HX_STACK_LINE(386)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(386)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(386)
									_y1 = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(386)
									_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(386)
									if (((order == (int)4))){
										HX_STACK_LINE(386)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(386)
										_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",386,0x23671680)
												{
													HX_STACK_LINE(386)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(386)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(386)
										_z1 = ::Math_obj::asin(_Function_10_1::Block(this));
									}
									else{
										HX_STACK_LINE(386)
										if (((order == (int)5))){
											HX_STACK_LINE(386)
											_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(386)
											_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",386,0x23671680)
													{
														HX_STACK_LINE(386)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(386)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(386)
											_z1 = ::Math_obj::asin(_Function_11_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(386)
					{
						HX_STACK_LINE(386)
						Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
						HX_STACK_LINE(386)
						Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
						HX_STACK_LINE(386)
						Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
						HX_STACK_LINE(386)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(386)
						_this->ignore_listeners = true;
						HX_STACK_LINE(386)
						{
							HX_STACK_LINE(386)
							_this->x = _x2;
							HX_STACK_LINE(386)
							if ((_this->_construct)){
								HX_STACK_LINE(386)
								_this->x;
							}
							else{
								HX_STACK_LINE(386)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(386)
									_this->listen_x(_x2);
								}
								HX_STACK_LINE(386)
								_this->x;
							}
						}
						HX_STACK_LINE(386)
						{
							HX_STACK_LINE(386)
							_this->y = _y2;
							HX_STACK_LINE(386)
							if ((_this->_construct)){
								HX_STACK_LINE(386)
								_this->y;
							}
							else{
								HX_STACK_LINE(386)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(386)
									_this->listen_y(_y2);
								}
								HX_STACK_LINE(386)
								_this->y;
							}
						}
						HX_STACK_LINE(386)
						{
							HX_STACK_LINE(386)
							_this->z = _z2;
							HX_STACK_LINE(386)
							if ((_this->_construct)){
								HX_STACK_LINE(386)
								_this->z;
							}
							else{
								HX_STACK_LINE(386)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(386)
									_this->listen_z(_z2);
								}
								HX_STACK_LINE(386)
								_this->z;
							}
						}
						HX_STACK_LINE(386)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(386)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(386)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(386)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(386)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(386)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(386)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(386)
						_this;
					}
					HX_STACK_LINE(386)
					_this;
				}
				HX_STACK_LINE(386)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(386)
					this->listen_y(this->y);
				}
				HX_STACK_LINE(386)
				this->y;
			}
		}
		HX_STACK_LINE(386)
		{
			HX_STACK_LINE(386)
			this->z = ((_y * ratioA) + (this->y * ratioB));
			HX_STACK_LINE(386)
			if ((this->_construct)){
				HX_STACK_LINE(386)
				this->z;
			}
			else{
				HX_STACK_LINE(386)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(386)
					Dynamic();
				}
				else{
					HX_STACK_LINE(386)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(386)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(386)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(386)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(386)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(386)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(386)
					Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(386)
					Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(386)
					Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(386)
					if (((order == (int)0))){
						HX_STACK_LINE(386)
						_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",386,0x23671680)
								{
									HX_STACK_LINE(386)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(386)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(386)
						_y1 = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(386)
						_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(386)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",386,0x23671680)
									{
										HX_STACK_LINE(386)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(386)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(386)
							_x1 = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(386)
							_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(386)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(386)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",386,0x23671680)
										{
											HX_STACK_LINE(386)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(386)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(386)
								_x1 = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(386)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(386)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(386)
								if (((order == (int)3))){
									HX_STACK_LINE(386)
									_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",386,0x23671680)
											{
												HX_STACK_LINE(386)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(386)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(386)
									_y1 = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(386)
									_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(386)
									if (((order == (int)4))){
										HX_STACK_LINE(386)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(386)
										_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",386,0x23671680)
												{
													HX_STACK_LINE(386)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(386)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(386)
										_z1 = ::Math_obj::asin(_Function_10_1::Block(this));
									}
									else{
										HX_STACK_LINE(386)
										if (((order == (int)5))){
											HX_STACK_LINE(386)
											_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(386)
											_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",386,0x23671680)
													{
														HX_STACK_LINE(386)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(386)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(386)
											_z1 = ::Math_obj::asin(_Function_11_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(386)
					{
						HX_STACK_LINE(386)
						Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
						HX_STACK_LINE(386)
						Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
						HX_STACK_LINE(386)
						Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
						HX_STACK_LINE(386)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(386)
						_this->ignore_listeners = true;
						HX_STACK_LINE(386)
						{
							HX_STACK_LINE(386)
							_this->x = _x2;
							HX_STACK_LINE(386)
							if ((_this->_construct)){
								HX_STACK_LINE(386)
								_this->x;
							}
							else{
								HX_STACK_LINE(386)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(386)
									_this->listen_x(_x2);
								}
								HX_STACK_LINE(386)
								_this->x;
							}
						}
						HX_STACK_LINE(386)
						{
							HX_STACK_LINE(386)
							_this->y = _y2;
							HX_STACK_LINE(386)
							if ((_this->_construct)){
								HX_STACK_LINE(386)
								_this->y;
							}
							else{
								HX_STACK_LINE(386)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(386)
									_this->listen_y(_y2);
								}
								HX_STACK_LINE(386)
								_this->y;
							}
						}
						HX_STACK_LINE(386)
						{
							HX_STACK_LINE(386)
							_this->z = _z2;
							HX_STACK_LINE(386)
							if ((_this->_construct)){
								HX_STACK_LINE(386)
								_this->z;
							}
							else{
								HX_STACK_LINE(386)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(386)
									_this->listen_z(_z2);
								}
								HX_STACK_LINE(386)
								_this->z;
							}
						}
						HX_STACK_LINE(386)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(386)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(386)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(386)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(386)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(386)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(386)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(386)
						_this;
					}
					HX_STACK_LINE(386)
					_this;
				}
				HX_STACK_LINE(386)
				if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(386)
					this->listen_z(this->z);
				}
				HX_STACK_LINE(386)
				this->z;
			}
		}
		HX_STACK_LINE(386)
		{
			HX_STACK_LINE(386)
			this->w = ((_z * ratioA) + (this->z * ratioB));
			HX_STACK_LINE(386)
			if ((this->_construct)){
				HX_STACK_LINE(386)
				this->w;
			}
			else{
				HX_STACK_LINE(386)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(386)
					Dynamic();
				}
				else{
					HX_STACK_LINE(386)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(386)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(386)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(386)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(386)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(386)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(386)
					Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(386)
					Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(386)
					Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(386)
					if (((order == (int)0))){
						HX_STACK_LINE(386)
						_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",386,0x23671680)
								{
									HX_STACK_LINE(386)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(386)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(386)
						_y1 = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(386)
						_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(386)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",386,0x23671680)
									{
										HX_STACK_LINE(386)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(386)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(386)
							_x1 = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(386)
							_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(386)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(386)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",386,0x23671680)
										{
											HX_STACK_LINE(386)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(386)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(386)
								_x1 = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(386)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(386)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(386)
								if (((order == (int)3))){
									HX_STACK_LINE(386)
									_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",386,0x23671680)
											{
												HX_STACK_LINE(386)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(386)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(386)
									_y1 = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(386)
									_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(386)
									if (((order == (int)4))){
										HX_STACK_LINE(386)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(386)
										_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",386,0x23671680)
												{
													HX_STACK_LINE(386)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(386)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(386)
										_z1 = ::Math_obj::asin(_Function_10_1::Block(this));
									}
									else{
										HX_STACK_LINE(386)
										if (((order == (int)5))){
											HX_STACK_LINE(386)
											_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(386)
											_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",386,0x23671680)
													{
														HX_STACK_LINE(386)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(386)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(386)
											_z1 = ::Math_obj::asin(_Function_11_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(386)
					{
						HX_STACK_LINE(386)
						Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
						HX_STACK_LINE(386)
						Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
						HX_STACK_LINE(386)
						Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
						HX_STACK_LINE(386)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(386)
						_this->ignore_listeners = true;
						HX_STACK_LINE(386)
						{
							HX_STACK_LINE(386)
							_this->x = _x2;
							HX_STACK_LINE(386)
							if ((_this->_construct)){
								HX_STACK_LINE(386)
								_this->x;
							}
							else{
								HX_STACK_LINE(386)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(386)
									_this->listen_x(_x2);
								}
								HX_STACK_LINE(386)
								_this->x;
							}
						}
						HX_STACK_LINE(386)
						{
							HX_STACK_LINE(386)
							_this->y = _y2;
							HX_STACK_LINE(386)
							if ((_this->_construct)){
								HX_STACK_LINE(386)
								_this->y;
							}
							else{
								HX_STACK_LINE(386)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(386)
									_this->listen_y(_y2);
								}
								HX_STACK_LINE(386)
								_this->y;
							}
						}
						HX_STACK_LINE(386)
						{
							HX_STACK_LINE(386)
							_this->z = _z2;
							HX_STACK_LINE(386)
							if ((_this->_construct)){
								HX_STACK_LINE(386)
								_this->z;
							}
							else{
								HX_STACK_LINE(386)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(386)
									_this->listen_z(_z2);
								}
								HX_STACK_LINE(386)
								_this->z;
							}
						}
						HX_STACK_LINE(386)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(386)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(386)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(386)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(386)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(386)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(386)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(386)
						_this;
					}
					HX_STACK_LINE(386)
					_this;
				}
				HX_STACK_LINE(386)
				if (((bool((this->listen_w_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(386)
					this->listen_w(this->w);
				}
				HX_STACK_LINE(386)
				this->w;
			}
		}
		HX_STACK_LINE(386)
		this->ignore_euler = false;
		HX_STACK_LINE(386)
		if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
			HX_STACK_LINE(386)
			Dynamic();
		}
		else{
			HX_STACK_LINE(386)
			::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(386)
			int order = (int)0;		HX_STACK_VAR(order,"order");
			HX_STACK_LINE(386)
			Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
			HX_STACK_LINE(386)
			Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
			HX_STACK_LINE(386)
			Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
			HX_STACK_LINE(386)
			Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
			HX_STACK_LINE(386)
			Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
			HX_STACK_LINE(386)
			Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
			HX_STACK_LINE(386)
			Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
			HX_STACK_LINE(386)
			if (((order == (int)0))){
				HX_STACK_LINE(386)
				_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
				struct _Function_4_1{
					inline static Float Block( ::phoenix::Quaternion_obj *__this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",386,0x23671680)
						{
							HX_STACK_LINE(386)
							Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(386)
							return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
						}
						return null();
					}
				};
				HX_STACK_LINE(386)
				_y1 = ::Math_obj::asin(_Function_4_1::Block(this));
				HX_STACK_LINE(386)
				_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
			}
			else{
				HX_STACK_LINE(386)
				if (((order == (int)1))){
					struct _Function_5_1{
						inline static Float Block( ::phoenix::Quaternion_obj *__this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",386,0x23671680)
							{
								HX_STACK_LINE(386)
								Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(386)
								return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(386)
					_x1 = ::Math_obj::asin(_Function_5_1::Block(this));
					HX_STACK_LINE(386)
					_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
					HX_STACK_LINE(386)
					_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
				}
				else{
					HX_STACK_LINE(386)
					if (((order == (int)2))){
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",386,0x23671680)
								{
									HX_STACK_LINE(386)
									Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(386)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(386)
						_x1 = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(386)
						_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
						HX_STACK_LINE(386)
						_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
					}
					else{
						HX_STACK_LINE(386)
						if (((order == (int)3))){
							HX_STACK_LINE(386)
							_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",386,0x23671680)
									{
										HX_STACK_LINE(386)
										Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(386)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(386)
							_y1 = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(386)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
						}
						else{
							HX_STACK_LINE(386)
							if (((order == (int)4))){
								HX_STACK_LINE(386)
								_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
								HX_STACK_LINE(386)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",386,0x23671680)
										{
											HX_STACK_LINE(386)
											Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(386)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(386)
								_z1 = ::Math_obj::asin(_Function_8_1::Block(this));
							}
							else{
								HX_STACK_LINE(386)
								if (((order == (int)5))){
									HX_STACK_LINE(386)
									_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
									HX_STACK_LINE(386)
									_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",386,0x23671680)
											{
												HX_STACK_LINE(386)
												Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(386)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(386)
									_z1 = ::Math_obj::asin(_Function_9_1::Block(this));
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(386)
			{
				HX_STACK_LINE(386)
				Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
				HX_STACK_LINE(386)
				Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
				HX_STACK_LINE(386)
				Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
				HX_STACK_LINE(386)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(386)
				_this->ignore_listeners = true;
				HX_STACK_LINE(386)
				{
					HX_STACK_LINE(386)
					_this->x = _x2;
					HX_STACK_LINE(386)
					if ((_this->_construct)){
						HX_STACK_LINE(386)
						_this->x;
					}
					else{
						HX_STACK_LINE(386)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(386)
							_this->listen_x(_x2);
						}
						HX_STACK_LINE(386)
						_this->x;
					}
				}
				HX_STACK_LINE(386)
				{
					HX_STACK_LINE(386)
					_this->y = _y2;
					HX_STACK_LINE(386)
					if ((_this->_construct)){
						HX_STACK_LINE(386)
						_this->y;
					}
					else{
						HX_STACK_LINE(386)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(386)
							_this->listen_y(_y2);
						}
						HX_STACK_LINE(386)
						_this->y;
					}
				}
				HX_STACK_LINE(386)
				{
					HX_STACK_LINE(386)
					_this->z = _z2;
					HX_STACK_LINE(386)
					if ((_this->_construct)){
						HX_STACK_LINE(386)
						_this->z;
					}
					else{
						HX_STACK_LINE(386)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(386)
							_this->listen_z(_z2);
						}
						HX_STACK_LINE(386)
						_this->z;
					}
				}
				HX_STACK_LINE(386)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(386)
				if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(386)
					_this->listen_x(_this->x);
				}
				HX_STACK_LINE(386)
				if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(386)
					_this->listen_y(_this->y);
				}
				HX_STACK_LINE(386)
				if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(386)
					_this->listen_z(_this->z);
				}
				HX_STACK_LINE(386)
				_this;
			}
			HX_STACK_LINE(386)
			_this;
		}
		HX_STACK_LINE(386)
		if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(386)
			this->listen_x(this->x);
		}
		HX_STACK_LINE(386)
		if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(386)
			this->listen_y(this->y);
		}
		HX_STACK_LINE(386)
		if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(386)
			this->listen_z(this->z);
		}
		HX_STACK_LINE(386)
		if (((bool((this->listen_w_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(386)
			this->listen_w(this->w);
		}
	}
	HX_STACK_LINE(391)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,slerp,return )

bool Quaternion_obj::equals( ::phoenix::Quaternion _q){
	HX_STACK_FRAME("phoenix.Quaternion","equals",0xe75032d0,"phoenix.Quaternion.equals","phoenix/Quaternion.hx",398,0x23671680)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_q,"_q")
	HX_STACK_LINE(398)
	return (bool((bool((bool((_q->x == this->x)) && bool((_q->y == this->y)))) && bool((_q->z == this->z)))) && bool((_q->w == this->w)));
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,equals,return )

::phoenix::Quaternion Quaternion_obj::fromArray( Array< Float > _a){
	HX_STACK_FRAME("phoenix.Quaternion","fromArray",0x3d3583de,"phoenix.Quaternion.fromArray","phoenix/Quaternion.hx",403,0x23671680)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_a,"_a")
	HX_STACK_LINE(405)
	{
		HX_STACK_LINE(405)
		this->ignore_euler = true;
		HX_STACK_LINE(405)
		{
			HX_STACK_LINE(405)
			this->x = _a->__get((int)0);
			HX_STACK_LINE(405)
			if ((this->_construct)){
				HX_STACK_LINE(405)
				this->x;
			}
			else{
				HX_STACK_LINE(405)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(405)
					Dynamic();
				}
				else{
					HX_STACK_LINE(405)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(405)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(405)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(405)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(405)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(405)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(405)
					Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(405)
					Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(405)
					Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(405)
					if (((order == (int)0))){
						HX_STACK_LINE(405)
						_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",405,0x23671680)
								{
									HX_STACK_LINE(405)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(405)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(405)
						_y = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(405)
						_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(405)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",405,0x23671680)
									{
										HX_STACK_LINE(405)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(405)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(405)
							_x = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(405)
							_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(405)
							_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(405)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",405,0x23671680)
										{
											HX_STACK_LINE(405)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(405)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(405)
								_x = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(405)
								_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(405)
								_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(405)
								if (((order == (int)3))){
									HX_STACK_LINE(405)
									_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",405,0x23671680)
											{
												HX_STACK_LINE(405)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(405)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(405)
									_y = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(405)
									_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(405)
									if (((order == (int)4))){
										HX_STACK_LINE(405)
										_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(405)
										_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",405,0x23671680)
												{
													HX_STACK_LINE(405)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(405)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(405)
										_z = ::Math_obj::asin(_Function_10_1::Block(this));
									}
									else{
										HX_STACK_LINE(405)
										if (((order == (int)5))){
											HX_STACK_LINE(405)
											_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(405)
											_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",405,0x23671680)
													{
														HX_STACK_LINE(405)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(405)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(405)
											_z = ::Math_obj::asin(_Function_11_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(405)
					{
						HX_STACK_LINE(405)
						Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(405)
						Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(405)
						Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(405)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(405)
						_this->ignore_listeners = true;
						HX_STACK_LINE(405)
						{
							HX_STACK_LINE(405)
							_this->x = _x1;
							HX_STACK_LINE(405)
							if ((_this->_construct)){
								HX_STACK_LINE(405)
								_this->x;
							}
							else{
								HX_STACK_LINE(405)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(405)
									_this->listen_x(_x1);
								}
								HX_STACK_LINE(405)
								_this->x;
							}
						}
						HX_STACK_LINE(405)
						{
							HX_STACK_LINE(405)
							_this->y = _y1;
							HX_STACK_LINE(405)
							if ((_this->_construct)){
								HX_STACK_LINE(405)
								_this->y;
							}
							else{
								HX_STACK_LINE(405)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(405)
									_this->listen_y(_y1);
								}
								HX_STACK_LINE(405)
								_this->y;
							}
						}
						HX_STACK_LINE(405)
						{
							HX_STACK_LINE(405)
							_this->z = _z1;
							HX_STACK_LINE(405)
							if ((_this->_construct)){
								HX_STACK_LINE(405)
								_this->z;
							}
							else{
								HX_STACK_LINE(405)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(405)
									_this->listen_z(_z1);
								}
								HX_STACK_LINE(405)
								_this->z;
							}
						}
						HX_STACK_LINE(405)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(405)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(405)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(405)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(405)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(405)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(405)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(405)
						_this;
					}
					HX_STACK_LINE(405)
					_this;
				}
				HX_STACK_LINE(405)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(405)
					this->listen_x(this->x);
				}
				HX_STACK_LINE(405)
				this->x;
			}
		}
		HX_STACK_LINE(405)
		{
			HX_STACK_LINE(405)
			this->y = _a->__get((int)1);
			HX_STACK_LINE(405)
			if ((this->_construct)){
				HX_STACK_LINE(405)
				this->y;
			}
			else{
				HX_STACK_LINE(405)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(405)
					Dynamic();
				}
				else{
					HX_STACK_LINE(405)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(405)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(405)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(405)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(405)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(405)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(405)
					Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(405)
					Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(405)
					Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(405)
					if (((order == (int)0))){
						HX_STACK_LINE(405)
						_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",405,0x23671680)
								{
									HX_STACK_LINE(405)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(405)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(405)
						_y = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(405)
						_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(405)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",405,0x23671680)
									{
										HX_STACK_LINE(405)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(405)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(405)
							_x = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(405)
							_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(405)
							_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(405)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",405,0x23671680)
										{
											HX_STACK_LINE(405)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(405)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(405)
								_x = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(405)
								_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(405)
								_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(405)
								if (((order == (int)3))){
									HX_STACK_LINE(405)
									_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",405,0x23671680)
											{
												HX_STACK_LINE(405)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(405)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(405)
									_y = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(405)
									_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(405)
									if (((order == (int)4))){
										HX_STACK_LINE(405)
										_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(405)
										_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",405,0x23671680)
												{
													HX_STACK_LINE(405)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(405)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(405)
										_z = ::Math_obj::asin(_Function_10_1::Block(this));
									}
									else{
										HX_STACK_LINE(405)
										if (((order == (int)5))){
											HX_STACK_LINE(405)
											_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(405)
											_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",405,0x23671680)
													{
														HX_STACK_LINE(405)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(405)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(405)
											_z = ::Math_obj::asin(_Function_11_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(405)
					{
						HX_STACK_LINE(405)
						Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(405)
						Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(405)
						Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(405)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(405)
						_this->ignore_listeners = true;
						HX_STACK_LINE(405)
						{
							HX_STACK_LINE(405)
							_this->x = _x1;
							HX_STACK_LINE(405)
							if ((_this->_construct)){
								HX_STACK_LINE(405)
								_this->x;
							}
							else{
								HX_STACK_LINE(405)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(405)
									_this->listen_x(_x1);
								}
								HX_STACK_LINE(405)
								_this->x;
							}
						}
						HX_STACK_LINE(405)
						{
							HX_STACK_LINE(405)
							_this->y = _y1;
							HX_STACK_LINE(405)
							if ((_this->_construct)){
								HX_STACK_LINE(405)
								_this->y;
							}
							else{
								HX_STACK_LINE(405)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(405)
									_this->listen_y(_y1);
								}
								HX_STACK_LINE(405)
								_this->y;
							}
						}
						HX_STACK_LINE(405)
						{
							HX_STACK_LINE(405)
							_this->z = _z1;
							HX_STACK_LINE(405)
							if ((_this->_construct)){
								HX_STACK_LINE(405)
								_this->z;
							}
							else{
								HX_STACK_LINE(405)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(405)
									_this->listen_z(_z1);
								}
								HX_STACK_LINE(405)
								_this->z;
							}
						}
						HX_STACK_LINE(405)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(405)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(405)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(405)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(405)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(405)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(405)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(405)
						_this;
					}
					HX_STACK_LINE(405)
					_this;
				}
				HX_STACK_LINE(405)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(405)
					this->listen_y(this->y);
				}
				HX_STACK_LINE(405)
				this->y;
			}
		}
		HX_STACK_LINE(405)
		{
			HX_STACK_LINE(405)
			this->z = _a->__get((int)2);
			HX_STACK_LINE(405)
			if ((this->_construct)){
				HX_STACK_LINE(405)
				this->z;
			}
			else{
				HX_STACK_LINE(405)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(405)
					Dynamic();
				}
				else{
					HX_STACK_LINE(405)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(405)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(405)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(405)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(405)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(405)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(405)
					Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(405)
					Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(405)
					Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(405)
					if (((order == (int)0))){
						HX_STACK_LINE(405)
						_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",405,0x23671680)
								{
									HX_STACK_LINE(405)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(405)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(405)
						_y = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(405)
						_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(405)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",405,0x23671680)
									{
										HX_STACK_LINE(405)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(405)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(405)
							_x = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(405)
							_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(405)
							_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(405)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",405,0x23671680)
										{
											HX_STACK_LINE(405)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(405)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(405)
								_x = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(405)
								_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(405)
								_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(405)
								if (((order == (int)3))){
									HX_STACK_LINE(405)
									_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",405,0x23671680)
											{
												HX_STACK_LINE(405)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(405)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(405)
									_y = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(405)
									_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(405)
									if (((order == (int)4))){
										HX_STACK_LINE(405)
										_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(405)
										_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",405,0x23671680)
												{
													HX_STACK_LINE(405)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(405)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(405)
										_z = ::Math_obj::asin(_Function_10_1::Block(this));
									}
									else{
										HX_STACK_LINE(405)
										if (((order == (int)5))){
											HX_STACK_LINE(405)
											_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(405)
											_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",405,0x23671680)
													{
														HX_STACK_LINE(405)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(405)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(405)
											_z = ::Math_obj::asin(_Function_11_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(405)
					{
						HX_STACK_LINE(405)
						Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(405)
						Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(405)
						Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(405)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(405)
						_this->ignore_listeners = true;
						HX_STACK_LINE(405)
						{
							HX_STACK_LINE(405)
							_this->x = _x1;
							HX_STACK_LINE(405)
							if ((_this->_construct)){
								HX_STACK_LINE(405)
								_this->x;
							}
							else{
								HX_STACK_LINE(405)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(405)
									_this->listen_x(_x1);
								}
								HX_STACK_LINE(405)
								_this->x;
							}
						}
						HX_STACK_LINE(405)
						{
							HX_STACK_LINE(405)
							_this->y = _y1;
							HX_STACK_LINE(405)
							if ((_this->_construct)){
								HX_STACK_LINE(405)
								_this->y;
							}
							else{
								HX_STACK_LINE(405)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(405)
									_this->listen_y(_y1);
								}
								HX_STACK_LINE(405)
								_this->y;
							}
						}
						HX_STACK_LINE(405)
						{
							HX_STACK_LINE(405)
							_this->z = _z1;
							HX_STACK_LINE(405)
							if ((_this->_construct)){
								HX_STACK_LINE(405)
								_this->z;
							}
							else{
								HX_STACK_LINE(405)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(405)
									_this->listen_z(_z1);
								}
								HX_STACK_LINE(405)
								_this->z;
							}
						}
						HX_STACK_LINE(405)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(405)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(405)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(405)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(405)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(405)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(405)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(405)
						_this;
					}
					HX_STACK_LINE(405)
					_this;
				}
				HX_STACK_LINE(405)
				if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(405)
					this->listen_z(this->z);
				}
				HX_STACK_LINE(405)
				this->z;
			}
		}
		HX_STACK_LINE(405)
		{
			HX_STACK_LINE(405)
			this->w = _a->__get((int)3);
			HX_STACK_LINE(405)
			if ((this->_construct)){
				HX_STACK_LINE(405)
				this->w;
			}
			else{
				HX_STACK_LINE(405)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(405)
					Dynamic();
				}
				else{
					HX_STACK_LINE(405)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(405)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(405)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(405)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(405)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(405)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(405)
					Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
					HX_STACK_LINE(405)
					Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
					HX_STACK_LINE(405)
					Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
					HX_STACK_LINE(405)
					if (((order == (int)0))){
						HX_STACK_LINE(405)
						_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",405,0x23671680)
								{
									HX_STACK_LINE(405)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(405)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(405)
						_y = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(405)
						_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(405)
						if (((order == (int)1))){
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",405,0x23671680)
									{
										HX_STACK_LINE(405)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(405)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(405)
							_x = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(405)
							_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(405)
							_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(405)
							if (((order == (int)2))){
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",405,0x23671680)
										{
											HX_STACK_LINE(405)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(405)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(405)
								_x = ::Math_obj::asin(_Function_8_1::Block(this));
								HX_STACK_LINE(405)
								_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(405)
								_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(405)
								if (((order == (int)3))){
									HX_STACK_LINE(405)
									_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",405,0x23671680)
											{
												HX_STACK_LINE(405)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(405)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(405)
									_y = ::Math_obj::asin(_Function_9_1::Block(this));
									HX_STACK_LINE(405)
									_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(405)
									if (((order == (int)4))){
										HX_STACK_LINE(405)
										_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(405)
										_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_10_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",405,0x23671680)
												{
													HX_STACK_LINE(405)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(405)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(405)
										_z = ::Math_obj::asin(_Function_10_1::Block(this));
									}
									else{
										HX_STACK_LINE(405)
										if (((order == (int)5))){
											HX_STACK_LINE(405)
											_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(405)
											_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_11_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",405,0x23671680)
													{
														HX_STACK_LINE(405)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(405)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(405)
											_z = ::Math_obj::asin(_Function_11_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(405)
					{
						HX_STACK_LINE(405)
						Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
						HX_STACK_LINE(405)
						Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
						HX_STACK_LINE(405)
						Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
						HX_STACK_LINE(405)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(405)
						_this->ignore_listeners = true;
						HX_STACK_LINE(405)
						{
							HX_STACK_LINE(405)
							_this->x = _x1;
							HX_STACK_LINE(405)
							if ((_this->_construct)){
								HX_STACK_LINE(405)
								_this->x;
							}
							else{
								HX_STACK_LINE(405)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(405)
									_this->listen_x(_x1);
								}
								HX_STACK_LINE(405)
								_this->x;
							}
						}
						HX_STACK_LINE(405)
						{
							HX_STACK_LINE(405)
							_this->y = _y1;
							HX_STACK_LINE(405)
							if ((_this->_construct)){
								HX_STACK_LINE(405)
								_this->y;
							}
							else{
								HX_STACK_LINE(405)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(405)
									_this->listen_y(_y1);
								}
								HX_STACK_LINE(405)
								_this->y;
							}
						}
						HX_STACK_LINE(405)
						{
							HX_STACK_LINE(405)
							_this->z = _z1;
							HX_STACK_LINE(405)
							if ((_this->_construct)){
								HX_STACK_LINE(405)
								_this->z;
							}
							else{
								HX_STACK_LINE(405)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(405)
									_this->listen_z(_z1);
								}
								HX_STACK_LINE(405)
								_this->z;
							}
						}
						HX_STACK_LINE(405)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(405)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(405)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(405)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(405)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(405)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(405)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(405)
						_this;
					}
					HX_STACK_LINE(405)
					_this;
				}
				HX_STACK_LINE(405)
				if (((bool((this->listen_w_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(405)
					this->listen_w(this->w);
				}
				HX_STACK_LINE(405)
				this->w;
			}
		}
		HX_STACK_LINE(405)
		this->ignore_euler = false;
		HX_STACK_LINE(405)
		if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
			HX_STACK_LINE(405)
			Dynamic();
		}
		else{
			HX_STACK_LINE(405)
			::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(405)
			int order = (int)0;		HX_STACK_VAR(order,"order");
			HX_STACK_LINE(405)
			Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
			HX_STACK_LINE(405)
			Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
			HX_STACK_LINE(405)
			Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
			HX_STACK_LINE(405)
			Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
			HX_STACK_LINE(405)
			Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(405)
			Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(405)
			Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(405)
			if (((order == (int)0))){
				HX_STACK_LINE(405)
				_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
				struct _Function_4_1{
					inline static Float Block( ::phoenix::Quaternion_obj *__this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",405,0x23671680)
						{
							HX_STACK_LINE(405)
							Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(405)
							return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
						}
						return null();
					}
				};
				HX_STACK_LINE(405)
				_y = ::Math_obj::asin(_Function_4_1::Block(this));
				HX_STACK_LINE(405)
				_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
			}
			else{
				HX_STACK_LINE(405)
				if (((order == (int)1))){
					struct _Function_5_1{
						inline static Float Block( ::phoenix::Quaternion_obj *__this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",405,0x23671680)
							{
								HX_STACK_LINE(405)
								Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(405)
								return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(405)
					_x = ::Math_obj::asin(_Function_5_1::Block(this));
					HX_STACK_LINE(405)
					_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
					HX_STACK_LINE(405)
					_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
				}
				else{
					HX_STACK_LINE(405)
					if (((order == (int)2))){
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",405,0x23671680)
								{
									HX_STACK_LINE(405)
									Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(405)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(405)
						_x = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(405)
						_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
						HX_STACK_LINE(405)
						_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
					}
					else{
						HX_STACK_LINE(405)
						if (((order == (int)3))){
							HX_STACK_LINE(405)
							_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",405,0x23671680)
									{
										HX_STACK_LINE(405)
										Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(405)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(405)
							_y = ::Math_obj::asin(_Function_7_1::Block(this));
							HX_STACK_LINE(405)
							_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
						}
						else{
							HX_STACK_LINE(405)
							if (((order == (int)4))){
								HX_STACK_LINE(405)
								_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
								HX_STACK_LINE(405)
								_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",405,0x23671680)
										{
											HX_STACK_LINE(405)
											Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(405)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(405)
								_z = ::Math_obj::asin(_Function_8_1::Block(this));
							}
							else{
								HX_STACK_LINE(405)
								if (((order == (int)5))){
									HX_STACK_LINE(405)
									_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
									HX_STACK_LINE(405)
									_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
									struct _Function_9_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",405,0x23671680)
											{
												HX_STACK_LINE(405)
												Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(405)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(405)
									_z = ::Math_obj::asin(_Function_9_1::Block(this));
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(405)
			{
				HX_STACK_LINE(405)
				Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
				HX_STACK_LINE(405)
				Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
				HX_STACK_LINE(405)
				Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
				HX_STACK_LINE(405)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(405)
				_this->ignore_listeners = true;
				HX_STACK_LINE(405)
				{
					HX_STACK_LINE(405)
					_this->x = _x1;
					HX_STACK_LINE(405)
					if ((_this->_construct)){
						HX_STACK_LINE(405)
						_this->x;
					}
					else{
						HX_STACK_LINE(405)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(405)
							_this->listen_x(_x1);
						}
						HX_STACK_LINE(405)
						_this->x;
					}
				}
				HX_STACK_LINE(405)
				{
					HX_STACK_LINE(405)
					_this->y = _y1;
					HX_STACK_LINE(405)
					if ((_this->_construct)){
						HX_STACK_LINE(405)
						_this->y;
					}
					else{
						HX_STACK_LINE(405)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(405)
							_this->listen_y(_y1);
						}
						HX_STACK_LINE(405)
						_this->y;
					}
				}
				HX_STACK_LINE(405)
				{
					HX_STACK_LINE(405)
					_this->z = _z1;
					HX_STACK_LINE(405)
					if ((_this->_construct)){
						HX_STACK_LINE(405)
						_this->z;
					}
					else{
						HX_STACK_LINE(405)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(405)
							_this->listen_z(_z1);
						}
						HX_STACK_LINE(405)
						_this->z;
					}
				}
				HX_STACK_LINE(405)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(405)
				if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(405)
					_this->listen_x(_this->x);
				}
				HX_STACK_LINE(405)
				if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(405)
					_this->listen_y(_this->y);
				}
				HX_STACK_LINE(405)
				if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(405)
					_this->listen_z(_this->z);
				}
				HX_STACK_LINE(405)
				_this;
			}
			HX_STACK_LINE(405)
			_this;
		}
		HX_STACK_LINE(405)
		if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(405)
			this->listen_x(this->x);
		}
		HX_STACK_LINE(405)
		if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(405)
			this->listen_y(this->y);
		}
		HX_STACK_LINE(405)
		if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(405)
			this->listen_z(this->z);
		}
		HX_STACK_LINE(405)
		if (((bool((this->listen_w_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(405)
			this->listen_w(this->w);
		}
	}
	HX_STACK_LINE(407)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,fromArray,return )

Array< Float > Quaternion_obj::toArray( ){
	HX_STACK_FRAME("phoenix.Quaternion","toArray",0x3c52746d,"phoenix.Quaternion.toArray","phoenix/Quaternion.hx",414,0x23671680)
	HX_STACK_THIS(this)
	HX_STACK_LINE(414)
	return Array_obj< Float >::__new().Add(this->x).Add(this->y).Add(this->z).Add(this->w);
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,toArray,return )

::phoenix::Quaternion Quaternion_obj::clone( ){
	HX_STACK_FRAME("phoenix.Quaternion","clone",0x2ab74bec,"phoenix.Quaternion.clone","phoenix/Quaternion.hx",420,0x23671680)
	HX_STACK_THIS(this)
	HX_STACK_LINE(420)
	return ::phoenix::Quaternion_obj::__new(this->x,this->y,this->z,this->w);
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,clone,return )

::phoenix::Vector Quaternion_obj::toeuler( ){
	HX_STACK_FRAME("phoenix.Quaternion","toeuler",0xf8b6705d,"phoenix.Quaternion.toeuler","phoenix/Quaternion.hx",425,0x23671680)
	HX_STACK_THIS(this)
	HX_STACK_LINE(425)
	::phoenix::Vector _this;		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(425)
	{
		HX_STACK_LINE(425)
		::phoenix::Vector _this1 = ::phoenix::Vector_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_this1,"_this1");
		HX_STACK_LINE(425)
		int order = (int)0;		HX_STACK_VAR(order,"order");
		HX_STACK_LINE(425)
		Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
		HX_STACK_LINE(425)
		Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
		HX_STACK_LINE(425)
		Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
		HX_STACK_LINE(425)
		Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
		HX_STACK_LINE(425)
		Float _x = _this1->x;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(425)
		Float _y = _this1->y;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(425)
		Float _z = _this1->z;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(425)
		if (((order == (int)0))){
			HX_STACK_LINE(425)
			_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
			struct _Function_3_1{
				inline static Float Block( ::phoenix::Quaternion_obj *__this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",425,0x23671680)
					{
						HX_STACK_LINE(425)
						Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(425)
						return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
					}
					return null();
				}
			};
			HX_STACK_LINE(425)
			_y = ::Math_obj::asin(_Function_3_1::Block(this));
			HX_STACK_LINE(425)
			_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
		}
		else{
			HX_STACK_LINE(425)
			if (((order == (int)1))){
				struct _Function_4_1{
					inline static Float Block( ::phoenix::Quaternion_obj *__this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",425,0x23671680)
						{
							HX_STACK_LINE(425)
							Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(425)
							return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
						}
						return null();
					}
				};
				HX_STACK_LINE(425)
				_x = ::Math_obj::asin(_Function_4_1::Block(this));
				HX_STACK_LINE(425)
				_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
				HX_STACK_LINE(425)
				_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
			}
			else{
				HX_STACK_LINE(425)
				if (((order == (int)2))){
					struct _Function_5_1{
						inline static Float Block( ::phoenix::Quaternion_obj *__this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",425,0x23671680)
							{
								HX_STACK_LINE(425)
								Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(425)
								return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(425)
					_x = ::Math_obj::asin(_Function_5_1::Block(this));
					HX_STACK_LINE(425)
					_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
					HX_STACK_LINE(425)
					_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
				}
				else{
					HX_STACK_LINE(425)
					if (((order == (int)3))){
						HX_STACK_LINE(425)
						_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",425,0x23671680)
								{
									HX_STACK_LINE(425)
									Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(425)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(425)
						_y = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(425)
						_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(425)
						if (((order == (int)4))){
							HX_STACK_LINE(425)
							_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
							HX_STACK_LINE(425)
							_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",425,0x23671680)
									{
										HX_STACK_LINE(425)
										Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(425)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(425)
							_z = ::Math_obj::asin(_Function_7_1::Block(this));
						}
						else{
							HX_STACK_LINE(425)
							if (((order == (int)5))){
								HX_STACK_LINE(425)
								_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
								HX_STACK_LINE(425)
								_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",425,0x23671680)
										{
											HX_STACK_LINE(425)
											Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(425)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(425)
								_z = ::Math_obj::asin(_Function_8_1::Block(this));
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(425)
		{
			HX_STACK_LINE(425)
			Float _x1 = _this1->x;		HX_STACK_VAR(_x1,"_x1");
			HX_STACK_LINE(425)
			Float _y1 = _this1->y;		HX_STACK_VAR(_y1,"_y1");
			HX_STACK_LINE(425)
			Float _z1 = _this1->z;		HX_STACK_VAR(_z1,"_z1");
			HX_STACK_LINE(425)
			bool prev = _this1->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(425)
			_this1->ignore_listeners = true;
			HX_STACK_LINE(425)
			{
				HX_STACK_LINE(425)
				_this1->x = _x1;
				HX_STACK_LINE(425)
				if ((_this1->_construct)){
					HX_STACK_LINE(425)
					_this1->x;
				}
				else{
					HX_STACK_LINE(425)
					if (((bool((_this1->listen_x != null())) && bool(!(_this1->ignore_listeners))))){
						HX_STACK_LINE(425)
						_this1->listen_x(_x1);
					}
					HX_STACK_LINE(425)
					_this1->x;
				}
			}
			HX_STACK_LINE(425)
			{
				HX_STACK_LINE(425)
				_this1->y = _y1;
				HX_STACK_LINE(425)
				if ((_this1->_construct)){
					HX_STACK_LINE(425)
					_this1->y;
				}
				else{
					HX_STACK_LINE(425)
					if (((bool((_this1->listen_y != null())) && bool(!(_this1->ignore_listeners))))){
						HX_STACK_LINE(425)
						_this1->listen_y(_y1);
					}
					HX_STACK_LINE(425)
					_this1->y;
				}
			}
			HX_STACK_LINE(425)
			{
				HX_STACK_LINE(425)
				_this1->z = _z1;
				HX_STACK_LINE(425)
				if ((_this1->_construct)){
					HX_STACK_LINE(425)
					_this1->z;
				}
				else{
					HX_STACK_LINE(425)
					if (((bool((_this1->listen_z != null())) && bool(!(_this1->ignore_listeners))))){
						HX_STACK_LINE(425)
						_this1->listen_z(_z1);
					}
					HX_STACK_LINE(425)
					_this1->z;
				}
			}
			HX_STACK_LINE(425)
			_this1->ignore_listeners = prev;
			HX_STACK_LINE(425)
			if (((bool((_this1->listen_x != null())) && bool(!(_this1->ignore_listeners))))){
				HX_STACK_LINE(425)
				_this1->listen_x(_this1->x);
			}
			HX_STACK_LINE(425)
			if (((bool((_this1->listen_y != null())) && bool(!(_this1->ignore_listeners))))){
				HX_STACK_LINE(425)
				_this1->listen_y(_this1->y);
			}
			HX_STACK_LINE(425)
			if (((bool((_this1->listen_z != null())) && bool(!(_this1->ignore_listeners))))){
				HX_STACK_LINE(425)
				_this1->listen_z(_this1->z);
			}
			HX_STACK_LINE(425)
			_this1;
		}
		HX_STACK_LINE(425)
		_this = _this1;
	}
	HX_STACK_LINE(425)
	{
		HX_STACK_LINE(425)
		Float _x = (_this->x * 57.29577951308238);		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(425)
		Float _y = (_this->y * 57.29577951308238);		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(425)
		Float _z = (_this->z * 57.29577951308238);		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(425)
		bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(425)
		_this->ignore_listeners = true;
		HX_STACK_LINE(425)
		{
			HX_STACK_LINE(425)
			_this->x = _x;
			HX_STACK_LINE(425)
			if ((_this->_construct)){
				HX_STACK_LINE(425)
				_this->x;
			}
			else{
				HX_STACK_LINE(425)
				if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(425)
					_this->listen_x(_x);
				}
				HX_STACK_LINE(425)
				_this->x;
			}
		}
		HX_STACK_LINE(425)
		{
			HX_STACK_LINE(425)
			_this->y = _y;
			HX_STACK_LINE(425)
			if ((_this->_construct)){
				HX_STACK_LINE(425)
				_this->y;
			}
			else{
				HX_STACK_LINE(425)
				if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(425)
					_this->listen_y(_y);
				}
				HX_STACK_LINE(425)
				_this->y;
			}
		}
		HX_STACK_LINE(425)
		{
			HX_STACK_LINE(425)
			_this->z = _z;
			HX_STACK_LINE(425)
			if ((_this->_construct)){
				HX_STACK_LINE(425)
				_this->z;
			}
			else{
				HX_STACK_LINE(425)
				if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(425)
					_this->listen_z(_z);
				}
				HX_STACK_LINE(425)
				_this->z;
			}
		}
		HX_STACK_LINE(425)
		_this->ignore_listeners = prev;
		HX_STACK_LINE(425)
		if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
			HX_STACK_LINE(425)
			_this->listen_x(_this->x);
		}
		HX_STACK_LINE(425)
		if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
			HX_STACK_LINE(425)
			_this->listen_y(_this->y);
		}
		HX_STACK_LINE(425)
		if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
			HX_STACK_LINE(425)
			_this->listen_z(_this->z);
		}
		HX_STACK_LINE(425)
		_this;
	}
	HX_STACK_LINE(425)
	return _this;
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,toeuler,return )

Void Quaternion_obj::update_euler( ){
{
		HX_STACK_FRAME("phoenix.Quaternion","update_euler",0x0887dac4,"phoenix.Quaternion.update_euler","phoenix/Quaternion.hx",438,0x23671680)
		HX_STACK_THIS(this)
		HX_STACK_LINE(440)
		if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
			HX_STACK_LINE(441)
			return null();
		}
		HX_STACK_LINE(444)
		{
			HX_STACK_LINE(444)
			::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(444)
			int order = (int)0;		HX_STACK_VAR(order,"order");
			HX_STACK_LINE(444)
			Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
			HX_STACK_LINE(444)
			Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
			HX_STACK_LINE(444)
			Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
			HX_STACK_LINE(444)
			Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
			HX_STACK_LINE(444)
			Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
			HX_STACK_LINE(444)
			Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
			HX_STACK_LINE(444)
			Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
			HX_STACK_LINE(444)
			if (((order == (int)0))){
				HX_STACK_LINE(444)
				_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
				struct _Function_3_1{
					inline static Float Block( ::phoenix::Quaternion_obj *__this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",444,0x23671680)
						{
							HX_STACK_LINE(444)
							Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(444)
							return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
						}
						return null();
					}
				};
				HX_STACK_LINE(444)
				_y = ::Math_obj::asin(_Function_3_1::Block(this));
				HX_STACK_LINE(444)
				_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
			}
			else{
				HX_STACK_LINE(444)
				if (((order == (int)1))){
					struct _Function_4_1{
						inline static Float Block( ::phoenix::Quaternion_obj *__this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",444,0x23671680)
							{
								HX_STACK_LINE(444)
								Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(444)
								return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(444)
					_x = ::Math_obj::asin(_Function_4_1::Block(this));
					HX_STACK_LINE(444)
					_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
					HX_STACK_LINE(444)
					_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
				}
				else{
					HX_STACK_LINE(444)
					if (((order == (int)2))){
						struct _Function_5_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",444,0x23671680)
								{
									HX_STACK_LINE(444)
									Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(444)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(444)
						_x = ::Math_obj::asin(_Function_5_1::Block(this));
						HX_STACK_LINE(444)
						_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
						HX_STACK_LINE(444)
						_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
					}
					else{
						HX_STACK_LINE(444)
						if (((order == (int)3))){
							HX_STACK_LINE(444)
							_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
							struct _Function_6_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",444,0x23671680)
									{
										HX_STACK_LINE(444)
										Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(444)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(444)
							_y = ::Math_obj::asin(_Function_6_1::Block(this));
							HX_STACK_LINE(444)
							_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
						}
						else{
							HX_STACK_LINE(444)
							if (((order == (int)4))){
								HX_STACK_LINE(444)
								_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
								HX_STACK_LINE(444)
								_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
								struct _Function_7_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",444,0x23671680)
										{
											HX_STACK_LINE(444)
											Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(444)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(444)
								_z = ::Math_obj::asin(_Function_7_1::Block(this));
							}
							else{
								HX_STACK_LINE(444)
								if (((order == (int)5))){
									HX_STACK_LINE(444)
									_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
									HX_STACK_LINE(444)
									_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
									struct _Function_8_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",444,0x23671680)
											{
												HX_STACK_LINE(444)
												Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(444)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(444)
									_z = ::Math_obj::asin(_Function_8_1::Block(this));
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(444)
			{
				HX_STACK_LINE(444)
				Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
				HX_STACK_LINE(444)
				Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
				HX_STACK_LINE(444)
				Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
				HX_STACK_LINE(444)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(444)
				_this->ignore_listeners = true;
				HX_STACK_LINE(444)
				{
					HX_STACK_LINE(444)
					_this->x = _x1;
					HX_STACK_LINE(444)
					if ((_this->_construct)){
						HX_STACK_LINE(444)
						_this->x;
					}
					else{
						HX_STACK_LINE(444)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(444)
							_this->listen_x(_x1);
						}
						HX_STACK_LINE(444)
						_this->x;
					}
				}
				HX_STACK_LINE(444)
				{
					HX_STACK_LINE(444)
					_this->y = _y1;
					HX_STACK_LINE(444)
					if ((_this->_construct)){
						HX_STACK_LINE(444)
						_this->y;
					}
					else{
						HX_STACK_LINE(444)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(444)
							_this->listen_y(_y1);
						}
						HX_STACK_LINE(444)
						_this->y;
					}
				}
				HX_STACK_LINE(444)
				{
					HX_STACK_LINE(444)
					_this->z = _z1;
					HX_STACK_LINE(444)
					if ((_this->_construct)){
						HX_STACK_LINE(444)
						_this->z;
					}
					else{
						HX_STACK_LINE(444)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(444)
							_this->listen_z(_z1);
						}
						HX_STACK_LINE(444)
						_this->z;
					}
				}
				HX_STACK_LINE(444)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(444)
				if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(444)
					_this->listen_x(_this->x);
				}
				HX_STACK_LINE(444)
				if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(444)
					_this->listen_y(_this->y);
				}
				HX_STACK_LINE(444)
				if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(444)
					_this->listen_z(_this->z);
				}
				HX_STACK_LINE(444)
				_this;
			}
			HX_STACK_LINE(444)
			_this;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,update_euler,(void))

Void Quaternion_obj::set_xyzw( Float _x,Float _y,Float _z,Float _w){
{
		HX_STACK_FRAME("phoenix.Quaternion","set_xyzw",0x2a6a35cc,"phoenix.Quaternion.set_xyzw","phoenix/Quaternion.hx",450,0x23671680)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_z,"_z")
		HX_STACK_ARG(_w,"_w")
		HX_STACK_LINE(452)
		this->ignore_euler = true;
		HX_STACK_LINE(454)
		{
			HX_STACK_LINE(454)
			this->x = _x;
			HX_STACK_LINE(454)
			if ((this->_construct)){
				HX_STACK_LINE(454)
				this->x;
			}
			else{
				HX_STACK_LINE(454)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(454)
					Dynamic();
				}
				else{
					HX_STACK_LINE(454)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(454)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(454)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(454)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(454)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(454)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(454)
					Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(454)
					Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(454)
					Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(454)
					if (((order == (int)0))){
						HX_STACK_LINE(454)
						_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_5_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",454,0x23671680)
								{
									HX_STACK_LINE(454)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(454)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(454)
						_y1 = ::Math_obj::asin(_Function_5_1::Block(this));
						HX_STACK_LINE(454)
						_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(454)
						if (((order == (int)1))){
							struct _Function_6_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",454,0x23671680)
									{
										HX_STACK_LINE(454)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(454)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(454)
							_x1 = ::Math_obj::asin(_Function_6_1::Block(this));
							HX_STACK_LINE(454)
							_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(454)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(454)
							if (((order == (int)2))){
								struct _Function_7_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",454,0x23671680)
										{
											HX_STACK_LINE(454)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(454)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(454)
								_x1 = ::Math_obj::asin(_Function_7_1::Block(this));
								HX_STACK_LINE(454)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(454)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(454)
								if (((order == (int)3))){
									HX_STACK_LINE(454)
									_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_8_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",454,0x23671680)
											{
												HX_STACK_LINE(454)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(454)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(454)
									_y1 = ::Math_obj::asin(_Function_8_1::Block(this));
									HX_STACK_LINE(454)
									_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(454)
									if (((order == (int)4))){
										HX_STACK_LINE(454)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(454)
										_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_9_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",454,0x23671680)
												{
													HX_STACK_LINE(454)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(454)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(454)
										_z1 = ::Math_obj::asin(_Function_9_1::Block(this));
									}
									else{
										HX_STACK_LINE(454)
										if (((order == (int)5))){
											HX_STACK_LINE(454)
											_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(454)
											_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_10_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",454,0x23671680)
													{
														HX_STACK_LINE(454)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(454)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(454)
											_z1 = ::Math_obj::asin(_Function_10_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(454)
					{
						HX_STACK_LINE(454)
						Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
						HX_STACK_LINE(454)
						Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
						HX_STACK_LINE(454)
						Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
						HX_STACK_LINE(454)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(454)
						_this->ignore_listeners = true;
						HX_STACK_LINE(454)
						{
							HX_STACK_LINE(454)
							_this->x = _x2;
							HX_STACK_LINE(454)
							if ((_this->_construct)){
								HX_STACK_LINE(454)
								_this->x;
							}
							else{
								HX_STACK_LINE(454)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(454)
									_this->listen_x(_x2);
								}
								HX_STACK_LINE(454)
								_this->x;
							}
						}
						HX_STACK_LINE(454)
						{
							HX_STACK_LINE(454)
							_this->y = _y2;
							HX_STACK_LINE(454)
							if ((_this->_construct)){
								HX_STACK_LINE(454)
								_this->y;
							}
							else{
								HX_STACK_LINE(454)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(454)
									_this->listen_y(_y2);
								}
								HX_STACK_LINE(454)
								_this->y;
							}
						}
						HX_STACK_LINE(454)
						{
							HX_STACK_LINE(454)
							_this->z = _z2;
							HX_STACK_LINE(454)
							if ((_this->_construct)){
								HX_STACK_LINE(454)
								_this->z;
							}
							else{
								HX_STACK_LINE(454)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(454)
									_this->listen_z(_z2);
								}
								HX_STACK_LINE(454)
								_this->z;
							}
						}
						HX_STACK_LINE(454)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(454)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(454)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(454)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(454)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(454)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(454)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(454)
						_this;
					}
					HX_STACK_LINE(454)
					_this;
				}
				HX_STACK_LINE(454)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(454)
					this->listen_x(this->x);
				}
				HX_STACK_LINE(454)
				this->x;
			}
		}
		HX_STACK_LINE(455)
		{
			HX_STACK_LINE(455)
			this->y = _y;
			HX_STACK_LINE(455)
			if ((this->_construct)){
				HX_STACK_LINE(455)
				this->y;
			}
			else{
				HX_STACK_LINE(455)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(455)
					Dynamic();
				}
				else{
					HX_STACK_LINE(455)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(455)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(455)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(455)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(455)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(455)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(455)
					Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(455)
					Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(455)
					Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(455)
					if (((order == (int)0))){
						HX_STACK_LINE(455)
						_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_5_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",455,0x23671680)
								{
									HX_STACK_LINE(455)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(455)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(455)
						_y1 = ::Math_obj::asin(_Function_5_1::Block(this));
						HX_STACK_LINE(455)
						_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(455)
						if (((order == (int)1))){
							struct _Function_6_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",455,0x23671680)
									{
										HX_STACK_LINE(455)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(455)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(455)
							_x1 = ::Math_obj::asin(_Function_6_1::Block(this));
							HX_STACK_LINE(455)
							_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(455)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(455)
							if (((order == (int)2))){
								struct _Function_7_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",455,0x23671680)
										{
											HX_STACK_LINE(455)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(455)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(455)
								_x1 = ::Math_obj::asin(_Function_7_1::Block(this));
								HX_STACK_LINE(455)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(455)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(455)
								if (((order == (int)3))){
									HX_STACK_LINE(455)
									_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_8_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",455,0x23671680)
											{
												HX_STACK_LINE(455)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(455)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(455)
									_y1 = ::Math_obj::asin(_Function_8_1::Block(this));
									HX_STACK_LINE(455)
									_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(455)
									if (((order == (int)4))){
										HX_STACK_LINE(455)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(455)
										_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_9_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",455,0x23671680)
												{
													HX_STACK_LINE(455)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(455)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(455)
										_z1 = ::Math_obj::asin(_Function_9_1::Block(this));
									}
									else{
										HX_STACK_LINE(455)
										if (((order == (int)5))){
											HX_STACK_LINE(455)
											_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(455)
											_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_10_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",455,0x23671680)
													{
														HX_STACK_LINE(455)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(455)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(455)
											_z1 = ::Math_obj::asin(_Function_10_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(455)
					{
						HX_STACK_LINE(455)
						Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
						HX_STACK_LINE(455)
						Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
						HX_STACK_LINE(455)
						Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
						HX_STACK_LINE(455)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(455)
						_this->ignore_listeners = true;
						HX_STACK_LINE(455)
						{
							HX_STACK_LINE(455)
							_this->x = _x2;
							HX_STACK_LINE(455)
							if ((_this->_construct)){
								HX_STACK_LINE(455)
								_this->x;
							}
							else{
								HX_STACK_LINE(455)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(455)
									_this->listen_x(_x2);
								}
								HX_STACK_LINE(455)
								_this->x;
							}
						}
						HX_STACK_LINE(455)
						{
							HX_STACK_LINE(455)
							_this->y = _y2;
							HX_STACK_LINE(455)
							if ((_this->_construct)){
								HX_STACK_LINE(455)
								_this->y;
							}
							else{
								HX_STACK_LINE(455)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(455)
									_this->listen_y(_y2);
								}
								HX_STACK_LINE(455)
								_this->y;
							}
						}
						HX_STACK_LINE(455)
						{
							HX_STACK_LINE(455)
							_this->z = _z2;
							HX_STACK_LINE(455)
							if ((_this->_construct)){
								HX_STACK_LINE(455)
								_this->z;
							}
							else{
								HX_STACK_LINE(455)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(455)
									_this->listen_z(_z2);
								}
								HX_STACK_LINE(455)
								_this->z;
							}
						}
						HX_STACK_LINE(455)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(455)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(455)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(455)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(455)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(455)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(455)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(455)
						_this;
					}
					HX_STACK_LINE(455)
					_this;
				}
				HX_STACK_LINE(455)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(455)
					this->listen_y(this->y);
				}
				HX_STACK_LINE(455)
				this->y;
			}
		}
		HX_STACK_LINE(456)
		{
			HX_STACK_LINE(456)
			this->z = _z;
			HX_STACK_LINE(456)
			if ((this->_construct)){
				HX_STACK_LINE(456)
				this->z;
			}
			else{
				HX_STACK_LINE(456)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(456)
					Dynamic();
				}
				else{
					HX_STACK_LINE(456)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(456)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(456)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(456)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(456)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(456)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(456)
					Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(456)
					Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(456)
					Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(456)
					if (((order == (int)0))){
						HX_STACK_LINE(456)
						_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_5_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",456,0x23671680)
								{
									HX_STACK_LINE(456)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(456)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(456)
						_y1 = ::Math_obj::asin(_Function_5_1::Block(this));
						HX_STACK_LINE(456)
						_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(456)
						if (((order == (int)1))){
							struct _Function_6_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",456,0x23671680)
									{
										HX_STACK_LINE(456)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(456)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(456)
							_x1 = ::Math_obj::asin(_Function_6_1::Block(this));
							HX_STACK_LINE(456)
							_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(456)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(456)
							if (((order == (int)2))){
								struct _Function_7_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",456,0x23671680)
										{
											HX_STACK_LINE(456)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(456)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(456)
								_x1 = ::Math_obj::asin(_Function_7_1::Block(this));
								HX_STACK_LINE(456)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(456)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(456)
								if (((order == (int)3))){
									HX_STACK_LINE(456)
									_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_8_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",456,0x23671680)
											{
												HX_STACK_LINE(456)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(456)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(456)
									_y1 = ::Math_obj::asin(_Function_8_1::Block(this));
									HX_STACK_LINE(456)
									_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(456)
									if (((order == (int)4))){
										HX_STACK_LINE(456)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(456)
										_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_9_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",456,0x23671680)
												{
													HX_STACK_LINE(456)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(456)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(456)
										_z1 = ::Math_obj::asin(_Function_9_1::Block(this));
									}
									else{
										HX_STACK_LINE(456)
										if (((order == (int)5))){
											HX_STACK_LINE(456)
											_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(456)
											_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_10_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",456,0x23671680)
													{
														HX_STACK_LINE(456)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(456)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(456)
											_z1 = ::Math_obj::asin(_Function_10_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(456)
					{
						HX_STACK_LINE(456)
						Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
						HX_STACK_LINE(456)
						Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
						HX_STACK_LINE(456)
						Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
						HX_STACK_LINE(456)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(456)
						_this->ignore_listeners = true;
						HX_STACK_LINE(456)
						{
							HX_STACK_LINE(456)
							_this->x = _x2;
							HX_STACK_LINE(456)
							if ((_this->_construct)){
								HX_STACK_LINE(456)
								_this->x;
							}
							else{
								HX_STACK_LINE(456)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(456)
									_this->listen_x(_x2);
								}
								HX_STACK_LINE(456)
								_this->x;
							}
						}
						HX_STACK_LINE(456)
						{
							HX_STACK_LINE(456)
							_this->y = _y2;
							HX_STACK_LINE(456)
							if ((_this->_construct)){
								HX_STACK_LINE(456)
								_this->y;
							}
							else{
								HX_STACK_LINE(456)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(456)
									_this->listen_y(_y2);
								}
								HX_STACK_LINE(456)
								_this->y;
							}
						}
						HX_STACK_LINE(456)
						{
							HX_STACK_LINE(456)
							_this->z = _z2;
							HX_STACK_LINE(456)
							if ((_this->_construct)){
								HX_STACK_LINE(456)
								_this->z;
							}
							else{
								HX_STACK_LINE(456)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(456)
									_this->listen_z(_z2);
								}
								HX_STACK_LINE(456)
								_this->z;
							}
						}
						HX_STACK_LINE(456)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(456)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(456)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(456)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(456)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(456)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(456)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(456)
						_this;
					}
					HX_STACK_LINE(456)
					_this;
				}
				HX_STACK_LINE(456)
				if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(456)
					this->listen_z(this->z);
				}
				HX_STACK_LINE(456)
				this->z;
			}
		}
		HX_STACK_LINE(457)
		{
			HX_STACK_LINE(457)
			this->w = _w;
			HX_STACK_LINE(457)
			if ((this->_construct)){
				HX_STACK_LINE(457)
				this->w;
			}
			else{
				HX_STACK_LINE(457)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(457)
					Dynamic();
				}
				else{
					HX_STACK_LINE(457)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(457)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(457)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(457)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(457)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(457)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(457)
					Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(457)
					Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(457)
					Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(457)
					if (((order == (int)0))){
						HX_STACK_LINE(457)
						_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_5_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",457,0x23671680)
								{
									HX_STACK_LINE(457)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(457)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(457)
						_y1 = ::Math_obj::asin(_Function_5_1::Block(this));
						HX_STACK_LINE(457)
						_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(457)
						if (((order == (int)1))){
							struct _Function_6_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",457,0x23671680)
									{
										HX_STACK_LINE(457)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(457)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(457)
							_x1 = ::Math_obj::asin(_Function_6_1::Block(this));
							HX_STACK_LINE(457)
							_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(457)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(457)
							if (((order == (int)2))){
								struct _Function_7_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",457,0x23671680)
										{
											HX_STACK_LINE(457)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(457)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(457)
								_x1 = ::Math_obj::asin(_Function_7_1::Block(this));
								HX_STACK_LINE(457)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(457)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(457)
								if (((order == (int)3))){
									HX_STACK_LINE(457)
									_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_8_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",457,0x23671680)
											{
												HX_STACK_LINE(457)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(457)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(457)
									_y1 = ::Math_obj::asin(_Function_8_1::Block(this));
									HX_STACK_LINE(457)
									_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(457)
									if (((order == (int)4))){
										HX_STACK_LINE(457)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(457)
										_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_9_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",457,0x23671680)
												{
													HX_STACK_LINE(457)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(457)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(457)
										_z1 = ::Math_obj::asin(_Function_9_1::Block(this));
									}
									else{
										HX_STACK_LINE(457)
										if (((order == (int)5))){
											HX_STACK_LINE(457)
											_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(457)
											_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_10_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",457,0x23671680)
													{
														HX_STACK_LINE(457)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(457)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(457)
											_z1 = ::Math_obj::asin(_Function_10_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(457)
					{
						HX_STACK_LINE(457)
						Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
						HX_STACK_LINE(457)
						Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
						HX_STACK_LINE(457)
						Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
						HX_STACK_LINE(457)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(457)
						_this->ignore_listeners = true;
						HX_STACK_LINE(457)
						{
							HX_STACK_LINE(457)
							_this->x = _x2;
							HX_STACK_LINE(457)
							if ((_this->_construct)){
								HX_STACK_LINE(457)
								_this->x;
							}
							else{
								HX_STACK_LINE(457)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(457)
									_this->listen_x(_x2);
								}
								HX_STACK_LINE(457)
								_this->x;
							}
						}
						HX_STACK_LINE(457)
						{
							HX_STACK_LINE(457)
							_this->y = _y2;
							HX_STACK_LINE(457)
							if ((_this->_construct)){
								HX_STACK_LINE(457)
								_this->y;
							}
							else{
								HX_STACK_LINE(457)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(457)
									_this->listen_y(_y2);
								}
								HX_STACK_LINE(457)
								_this->y;
							}
						}
						HX_STACK_LINE(457)
						{
							HX_STACK_LINE(457)
							_this->z = _z2;
							HX_STACK_LINE(457)
							if ((_this->_construct)){
								HX_STACK_LINE(457)
								_this->z;
							}
							else{
								HX_STACK_LINE(457)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(457)
									_this->listen_z(_z2);
								}
								HX_STACK_LINE(457)
								_this->z;
							}
						}
						HX_STACK_LINE(457)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(457)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(457)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(457)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(457)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(457)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(457)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(457)
						_this;
					}
					HX_STACK_LINE(457)
					_this;
				}
				HX_STACK_LINE(457)
				if (((bool((this->listen_w_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(457)
					this->listen_w(this->w);
				}
				HX_STACK_LINE(457)
				this->w;
			}
		}
		HX_STACK_LINE(459)
		this->ignore_euler = false;
		HX_STACK_LINE(461)
		if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
			HX_STACK_LINE(461)
			Dynamic();
		}
		else{
			HX_STACK_LINE(461)
			::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(461)
			int order = (int)0;		HX_STACK_VAR(order,"order");
			HX_STACK_LINE(461)
			Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
			HX_STACK_LINE(461)
			Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
			HX_STACK_LINE(461)
			Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
			HX_STACK_LINE(461)
			Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
			HX_STACK_LINE(461)
			Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
			HX_STACK_LINE(461)
			Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
			HX_STACK_LINE(461)
			Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
			HX_STACK_LINE(461)
			if (((order == (int)0))){
				HX_STACK_LINE(461)
				_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
				struct _Function_3_1{
					inline static Float Block( ::phoenix::Quaternion_obj *__this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",461,0x23671680)
						{
							HX_STACK_LINE(461)
							Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(461)
							return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
						}
						return null();
					}
				};
				HX_STACK_LINE(461)
				_y1 = ::Math_obj::asin(_Function_3_1::Block(this));
				HX_STACK_LINE(461)
				_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
			}
			else{
				HX_STACK_LINE(461)
				if (((order == (int)1))){
					struct _Function_4_1{
						inline static Float Block( ::phoenix::Quaternion_obj *__this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",461,0x23671680)
							{
								HX_STACK_LINE(461)
								Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(461)
								return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(461)
					_x1 = ::Math_obj::asin(_Function_4_1::Block(this));
					HX_STACK_LINE(461)
					_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
					HX_STACK_LINE(461)
					_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
				}
				else{
					HX_STACK_LINE(461)
					if (((order == (int)2))){
						struct _Function_5_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",461,0x23671680)
								{
									HX_STACK_LINE(461)
									Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(461)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(461)
						_x1 = ::Math_obj::asin(_Function_5_1::Block(this));
						HX_STACK_LINE(461)
						_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
						HX_STACK_LINE(461)
						_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
					}
					else{
						HX_STACK_LINE(461)
						if (((order == (int)3))){
							HX_STACK_LINE(461)
							_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
							struct _Function_6_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",461,0x23671680)
									{
										HX_STACK_LINE(461)
										Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(461)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(461)
							_y1 = ::Math_obj::asin(_Function_6_1::Block(this));
							HX_STACK_LINE(461)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
						}
						else{
							HX_STACK_LINE(461)
							if (((order == (int)4))){
								HX_STACK_LINE(461)
								_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
								HX_STACK_LINE(461)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
								struct _Function_7_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",461,0x23671680)
										{
											HX_STACK_LINE(461)
											Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(461)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(461)
								_z1 = ::Math_obj::asin(_Function_7_1::Block(this));
							}
							else{
								HX_STACK_LINE(461)
								if (((order == (int)5))){
									HX_STACK_LINE(461)
									_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
									HX_STACK_LINE(461)
									_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
									struct _Function_8_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",461,0x23671680)
											{
												HX_STACK_LINE(461)
												Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(461)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(461)
									_z1 = ::Math_obj::asin(_Function_8_1::Block(this));
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(461)
			{
				HX_STACK_LINE(461)
				Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
				HX_STACK_LINE(461)
				Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
				HX_STACK_LINE(461)
				Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
				HX_STACK_LINE(461)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(461)
				_this->ignore_listeners = true;
				HX_STACK_LINE(461)
				{
					HX_STACK_LINE(461)
					_this->x = _x2;
					HX_STACK_LINE(461)
					if ((_this->_construct)){
						HX_STACK_LINE(461)
						_this->x;
					}
					else{
						HX_STACK_LINE(461)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(461)
							_this->listen_x(_x2);
						}
						HX_STACK_LINE(461)
						_this->x;
					}
				}
				HX_STACK_LINE(461)
				{
					HX_STACK_LINE(461)
					_this->y = _y2;
					HX_STACK_LINE(461)
					if ((_this->_construct)){
						HX_STACK_LINE(461)
						_this->y;
					}
					else{
						HX_STACK_LINE(461)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(461)
							_this->listen_y(_y2);
						}
						HX_STACK_LINE(461)
						_this->y;
					}
				}
				HX_STACK_LINE(461)
				{
					HX_STACK_LINE(461)
					_this->z = _z2;
					HX_STACK_LINE(461)
					if ((_this->_construct)){
						HX_STACK_LINE(461)
						_this->z;
					}
					else{
						HX_STACK_LINE(461)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(461)
							_this->listen_z(_z2);
						}
						HX_STACK_LINE(461)
						_this->z;
					}
				}
				HX_STACK_LINE(461)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(461)
				if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(461)
					_this->listen_x(_this->x);
				}
				HX_STACK_LINE(461)
				if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(461)
					_this->listen_y(_this->y);
				}
				HX_STACK_LINE(461)
				if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(461)
					_this->listen_z(_this->z);
				}
				HX_STACK_LINE(461)
				_this;
			}
			HX_STACK_LINE(461)
			_this;
		}
		HX_STACK_LINE(463)
		if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(463)
			this->listen_x(this->x);
		}
		HX_STACK_LINE(464)
		if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(464)
			this->listen_y(this->y);
		}
		HX_STACK_LINE(465)
		if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(465)
			this->listen_z(this->z);
		}
		HX_STACK_LINE(466)
		if (((bool((this->listen_w_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(466)
			this->listen_w(this->w);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Quaternion_obj,set_xyzw,(void))

Void Quaternion_obj::set_xyz( Float _x,Float _y,Float _z){
{
		HX_STACK_FRAME("phoenix.Quaternion","set_xyz",0x64108c4b,"phoenix.Quaternion.set_xyz","phoenix/Quaternion.hx",470,0x23671680)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_z,"_z")
		HX_STACK_LINE(472)
		this->ignore_euler = true;
		HX_STACK_LINE(474)
		{
			HX_STACK_LINE(474)
			this->x = _x;
			HX_STACK_LINE(474)
			if ((this->_construct)){
				HX_STACK_LINE(474)
				this->x;
			}
			else{
				HX_STACK_LINE(474)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(474)
					Dynamic();
				}
				else{
					HX_STACK_LINE(474)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(474)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(474)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(474)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(474)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(474)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(474)
					Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(474)
					Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(474)
					Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(474)
					if (((order == (int)0))){
						HX_STACK_LINE(474)
						_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_5_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",474,0x23671680)
								{
									HX_STACK_LINE(474)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(474)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(474)
						_y1 = ::Math_obj::asin(_Function_5_1::Block(this));
						HX_STACK_LINE(474)
						_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(474)
						if (((order == (int)1))){
							struct _Function_6_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",474,0x23671680)
									{
										HX_STACK_LINE(474)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(474)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(474)
							_x1 = ::Math_obj::asin(_Function_6_1::Block(this));
							HX_STACK_LINE(474)
							_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(474)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(474)
							if (((order == (int)2))){
								struct _Function_7_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",474,0x23671680)
										{
											HX_STACK_LINE(474)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(474)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(474)
								_x1 = ::Math_obj::asin(_Function_7_1::Block(this));
								HX_STACK_LINE(474)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(474)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(474)
								if (((order == (int)3))){
									HX_STACK_LINE(474)
									_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_8_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",474,0x23671680)
											{
												HX_STACK_LINE(474)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(474)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(474)
									_y1 = ::Math_obj::asin(_Function_8_1::Block(this));
									HX_STACK_LINE(474)
									_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(474)
									if (((order == (int)4))){
										HX_STACK_LINE(474)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(474)
										_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_9_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",474,0x23671680)
												{
													HX_STACK_LINE(474)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(474)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(474)
										_z1 = ::Math_obj::asin(_Function_9_1::Block(this));
									}
									else{
										HX_STACK_LINE(474)
										if (((order == (int)5))){
											HX_STACK_LINE(474)
											_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(474)
											_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_10_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",474,0x23671680)
													{
														HX_STACK_LINE(474)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(474)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(474)
											_z1 = ::Math_obj::asin(_Function_10_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(474)
					{
						HX_STACK_LINE(474)
						Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
						HX_STACK_LINE(474)
						Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
						HX_STACK_LINE(474)
						Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
						HX_STACK_LINE(474)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(474)
						_this->ignore_listeners = true;
						HX_STACK_LINE(474)
						{
							HX_STACK_LINE(474)
							_this->x = _x2;
							HX_STACK_LINE(474)
							if ((_this->_construct)){
								HX_STACK_LINE(474)
								_this->x;
							}
							else{
								HX_STACK_LINE(474)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(474)
									_this->listen_x(_x2);
								}
								HX_STACK_LINE(474)
								_this->x;
							}
						}
						HX_STACK_LINE(474)
						{
							HX_STACK_LINE(474)
							_this->y = _y2;
							HX_STACK_LINE(474)
							if ((_this->_construct)){
								HX_STACK_LINE(474)
								_this->y;
							}
							else{
								HX_STACK_LINE(474)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(474)
									_this->listen_y(_y2);
								}
								HX_STACK_LINE(474)
								_this->y;
							}
						}
						HX_STACK_LINE(474)
						{
							HX_STACK_LINE(474)
							_this->z = _z2;
							HX_STACK_LINE(474)
							if ((_this->_construct)){
								HX_STACK_LINE(474)
								_this->z;
							}
							else{
								HX_STACK_LINE(474)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(474)
									_this->listen_z(_z2);
								}
								HX_STACK_LINE(474)
								_this->z;
							}
						}
						HX_STACK_LINE(474)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(474)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(474)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(474)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(474)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(474)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(474)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(474)
						_this;
					}
					HX_STACK_LINE(474)
					_this;
				}
				HX_STACK_LINE(474)
				if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(474)
					this->listen_x(this->x);
				}
				HX_STACK_LINE(474)
				this->x;
			}
		}
		HX_STACK_LINE(475)
		{
			HX_STACK_LINE(475)
			this->y = _y;
			HX_STACK_LINE(475)
			if ((this->_construct)){
				HX_STACK_LINE(475)
				this->y;
			}
			else{
				HX_STACK_LINE(475)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(475)
					Dynamic();
				}
				else{
					HX_STACK_LINE(475)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(475)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(475)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(475)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(475)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(475)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(475)
					Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(475)
					Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(475)
					Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(475)
					if (((order == (int)0))){
						HX_STACK_LINE(475)
						_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_5_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",475,0x23671680)
								{
									HX_STACK_LINE(475)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(475)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(475)
						_y1 = ::Math_obj::asin(_Function_5_1::Block(this));
						HX_STACK_LINE(475)
						_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(475)
						if (((order == (int)1))){
							struct _Function_6_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",475,0x23671680)
									{
										HX_STACK_LINE(475)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(475)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(475)
							_x1 = ::Math_obj::asin(_Function_6_1::Block(this));
							HX_STACK_LINE(475)
							_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(475)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(475)
							if (((order == (int)2))){
								struct _Function_7_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",475,0x23671680)
										{
											HX_STACK_LINE(475)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(475)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(475)
								_x1 = ::Math_obj::asin(_Function_7_1::Block(this));
								HX_STACK_LINE(475)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(475)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(475)
								if (((order == (int)3))){
									HX_STACK_LINE(475)
									_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_8_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",475,0x23671680)
											{
												HX_STACK_LINE(475)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(475)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(475)
									_y1 = ::Math_obj::asin(_Function_8_1::Block(this));
									HX_STACK_LINE(475)
									_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(475)
									if (((order == (int)4))){
										HX_STACK_LINE(475)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(475)
										_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_9_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",475,0x23671680)
												{
													HX_STACK_LINE(475)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(475)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(475)
										_z1 = ::Math_obj::asin(_Function_9_1::Block(this));
									}
									else{
										HX_STACK_LINE(475)
										if (((order == (int)5))){
											HX_STACK_LINE(475)
											_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(475)
											_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_10_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",475,0x23671680)
													{
														HX_STACK_LINE(475)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(475)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(475)
											_z1 = ::Math_obj::asin(_Function_10_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(475)
					{
						HX_STACK_LINE(475)
						Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
						HX_STACK_LINE(475)
						Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
						HX_STACK_LINE(475)
						Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
						HX_STACK_LINE(475)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(475)
						_this->ignore_listeners = true;
						HX_STACK_LINE(475)
						{
							HX_STACK_LINE(475)
							_this->x = _x2;
							HX_STACK_LINE(475)
							if ((_this->_construct)){
								HX_STACK_LINE(475)
								_this->x;
							}
							else{
								HX_STACK_LINE(475)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(475)
									_this->listen_x(_x2);
								}
								HX_STACK_LINE(475)
								_this->x;
							}
						}
						HX_STACK_LINE(475)
						{
							HX_STACK_LINE(475)
							_this->y = _y2;
							HX_STACK_LINE(475)
							if ((_this->_construct)){
								HX_STACK_LINE(475)
								_this->y;
							}
							else{
								HX_STACK_LINE(475)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(475)
									_this->listen_y(_y2);
								}
								HX_STACK_LINE(475)
								_this->y;
							}
						}
						HX_STACK_LINE(475)
						{
							HX_STACK_LINE(475)
							_this->z = _z2;
							HX_STACK_LINE(475)
							if ((_this->_construct)){
								HX_STACK_LINE(475)
								_this->z;
							}
							else{
								HX_STACK_LINE(475)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(475)
									_this->listen_z(_z2);
								}
								HX_STACK_LINE(475)
								_this->z;
							}
						}
						HX_STACK_LINE(475)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(475)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(475)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(475)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(475)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(475)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(475)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(475)
						_this;
					}
					HX_STACK_LINE(475)
					_this;
				}
				HX_STACK_LINE(475)
				if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(475)
					this->listen_y(this->y);
				}
				HX_STACK_LINE(475)
				this->y;
			}
		}
		HX_STACK_LINE(476)
		{
			HX_STACK_LINE(476)
			this->z = _z;
			HX_STACK_LINE(476)
			if ((this->_construct)){
				HX_STACK_LINE(476)
				this->z;
			}
			else{
				HX_STACK_LINE(476)
				if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
					HX_STACK_LINE(476)
					Dynamic();
				}
				else{
					HX_STACK_LINE(476)
					::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(476)
					int order = (int)0;		HX_STACK_VAR(order,"order");
					HX_STACK_LINE(476)
					Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
					HX_STACK_LINE(476)
					Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
					HX_STACK_LINE(476)
					Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
					HX_STACK_LINE(476)
					Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
					HX_STACK_LINE(476)
					Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
					HX_STACK_LINE(476)
					Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
					HX_STACK_LINE(476)
					Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
					HX_STACK_LINE(476)
					if (((order == (int)0))){
						HX_STACK_LINE(476)
						_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_5_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",476,0x23671680)
								{
									HX_STACK_LINE(476)
									Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(476)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(476)
						_y1 = ::Math_obj::asin(_Function_5_1::Block(this));
						HX_STACK_LINE(476)
						_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(476)
						if (((order == (int)1))){
							struct _Function_6_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",476,0x23671680)
									{
										HX_STACK_LINE(476)
										Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(476)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(476)
							_x1 = ::Math_obj::asin(_Function_6_1::Block(this));
							HX_STACK_LINE(476)
							_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
							HX_STACK_LINE(476)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
						}
						else{
							HX_STACK_LINE(476)
							if (((order == (int)2))){
								struct _Function_7_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",476,0x23671680)
										{
											HX_STACK_LINE(476)
											Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(476)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(476)
								_x1 = ::Math_obj::asin(_Function_7_1::Block(this));
								HX_STACK_LINE(476)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
								HX_STACK_LINE(476)
								_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
							}
							else{
								HX_STACK_LINE(476)
								if (((order == (int)3))){
									HX_STACK_LINE(476)
									_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
									struct _Function_8_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",476,0x23671680)
											{
												HX_STACK_LINE(476)
												Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(476)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(476)
									_y1 = ::Math_obj::asin(_Function_8_1::Block(this));
									HX_STACK_LINE(476)
									_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
								}
								else{
									HX_STACK_LINE(476)
									if (((order == (int)4))){
										HX_STACK_LINE(476)
										_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
										HX_STACK_LINE(476)
										_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
										struct _Function_9_1{
											inline static Float Block( ::phoenix::Quaternion_obj *__this){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",476,0x23671680)
												{
													HX_STACK_LINE(476)
													Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
													HX_STACK_LINE(476)
													return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
												}
												return null();
											}
										};
										HX_STACK_LINE(476)
										_z1 = ::Math_obj::asin(_Function_9_1::Block(this));
									}
									else{
										HX_STACK_LINE(476)
										if (((order == (int)5))){
											HX_STACK_LINE(476)
											_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
											HX_STACK_LINE(476)
											_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
											struct _Function_10_1{
												inline static Float Block( ::phoenix::Quaternion_obj *__this){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",476,0x23671680)
													{
														HX_STACK_LINE(476)
														Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
														HX_STACK_LINE(476)
														return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
													}
													return null();
												}
											};
											HX_STACK_LINE(476)
											_z1 = ::Math_obj::asin(_Function_10_1::Block(this));
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(476)
					{
						HX_STACK_LINE(476)
						Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
						HX_STACK_LINE(476)
						Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
						HX_STACK_LINE(476)
						Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
						HX_STACK_LINE(476)
						bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
						HX_STACK_LINE(476)
						_this->ignore_listeners = true;
						HX_STACK_LINE(476)
						{
							HX_STACK_LINE(476)
							_this->x = _x2;
							HX_STACK_LINE(476)
							if ((_this->_construct)){
								HX_STACK_LINE(476)
								_this->x;
							}
							else{
								HX_STACK_LINE(476)
								if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(476)
									_this->listen_x(_x2);
								}
								HX_STACK_LINE(476)
								_this->x;
							}
						}
						HX_STACK_LINE(476)
						{
							HX_STACK_LINE(476)
							_this->y = _y2;
							HX_STACK_LINE(476)
							if ((_this->_construct)){
								HX_STACK_LINE(476)
								_this->y;
							}
							else{
								HX_STACK_LINE(476)
								if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(476)
									_this->listen_y(_y2);
								}
								HX_STACK_LINE(476)
								_this->y;
							}
						}
						HX_STACK_LINE(476)
						{
							HX_STACK_LINE(476)
							_this->z = _z2;
							HX_STACK_LINE(476)
							if ((_this->_construct)){
								HX_STACK_LINE(476)
								_this->z;
							}
							else{
								HX_STACK_LINE(476)
								if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
									HX_STACK_LINE(476)
									_this->listen_z(_z2);
								}
								HX_STACK_LINE(476)
								_this->z;
							}
						}
						HX_STACK_LINE(476)
						_this->ignore_listeners = prev;
						HX_STACK_LINE(476)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(476)
							_this->listen_x(_this->x);
						}
						HX_STACK_LINE(476)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(476)
							_this->listen_y(_this->y);
						}
						HX_STACK_LINE(476)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(476)
							_this->listen_z(_this->z);
						}
						HX_STACK_LINE(476)
						_this;
					}
					HX_STACK_LINE(476)
					_this;
				}
				HX_STACK_LINE(476)
				if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
					HX_STACK_LINE(476)
					this->listen_z(this->z);
				}
				HX_STACK_LINE(476)
				this->z;
			}
		}
		HX_STACK_LINE(478)
		this->ignore_euler = false;
		HX_STACK_LINE(480)
		if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
			HX_STACK_LINE(480)
			Dynamic();
		}
		else{
			HX_STACK_LINE(480)
			::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(480)
			int order = (int)0;		HX_STACK_VAR(order,"order");
			HX_STACK_LINE(480)
			Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
			HX_STACK_LINE(480)
			Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
			HX_STACK_LINE(480)
			Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
			HX_STACK_LINE(480)
			Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
			HX_STACK_LINE(480)
			Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
			HX_STACK_LINE(480)
			Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
			HX_STACK_LINE(480)
			Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
			HX_STACK_LINE(480)
			if (((order == (int)0))){
				HX_STACK_LINE(480)
				_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
				struct _Function_3_1{
					inline static Float Block( ::phoenix::Quaternion_obj *__this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",480,0x23671680)
						{
							HX_STACK_LINE(480)
							Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(480)
							return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
						}
						return null();
					}
				};
				HX_STACK_LINE(480)
				_y1 = ::Math_obj::asin(_Function_3_1::Block(this));
				HX_STACK_LINE(480)
				_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
			}
			else{
				HX_STACK_LINE(480)
				if (((order == (int)1))){
					struct _Function_4_1{
						inline static Float Block( ::phoenix::Quaternion_obj *__this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",480,0x23671680)
							{
								HX_STACK_LINE(480)
								Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(480)
								return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(480)
					_x1 = ::Math_obj::asin(_Function_4_1::Block(this));
					HX_STACK_LINE(480)
					_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
					HX_STACK_LINE(480)
					_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
				}
				else{
					HX_STACK_LINE(480)
					if (((order == (int)2))){
						struct _Function_5_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",480,0x23671680)
								{
									HX_STACK_LINE(480)
									Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(480)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(480)
						_x1 = ::Math_obj::asin(_Function_5_1::Block(this));
						HX_STACK_LINE(480)
						_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
						HX_STACK_LINE(480)
						_z1 = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
					}
					else{
						HX_STACK_LINE(480)
						if (((order == (int)3))){
							HX_STACK_LINE(480)
							_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
							struct _Function_6_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",480,0x23671680)
									{
										HX_STACK_LINE(480)
										Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(480)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(480)
							_y1 = ::Math_obj::asin(_Function_6_1::Block(this));
							HX_STACK_LINE(480)
							_z1 = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
						}
						else{
							HX_STACK_LINE(480)
							if (((order == (int)4))){
								HX_STACK_LINE(480)
								_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
								HX_STACK_LINE(480)
								_y1 = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
								struct _Function_7_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",480,0x23671680)
										{
											HX_STACK_LINE(480)
											Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(480)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(480)
								_z1 = ::Math_obj::asin(_Function_7_1::Block(this));
							}
							else{
								HX_STACK_LINE(480)
								if (((order == (int)5))){
									HX_STACK_LINE(480)
									_x1 = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
									HX_STACK_LINE(480)
									_y1 = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
									struct _Function_8_1{
										inline static Float Block( ::phoenix::Quaternion_obj *__this){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",480,0x23671680)
											{
												HX_STACK_LINE(480)
												Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
												HX_STACK_LINE(480)
												return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
											}
											return null();
										}
									};
									HX_STACK_LINE(480)
									_z1 = ::Math_obj::asin(_Function_8_1::Block(this));
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(480)
			{
				HX_STACK_LINE(480)
				Float _x2 = _this->x;		HX_STACK_VAR(_x2,"_x2");
				HX_STACK_LINE(480)
				Float _y2 = _this->y;		HX_STACK_VAR(_y2,"_y2");
				HX_STACK_LINE(480)
				Float _z2 = _this->z;		HX_STACK_VAR(_z2,"_z2");
				HX_STACK_LINE(480)
				bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
				HX_STACK_LINE(480)
				_this->ignore_listeners = true;
				HX_STACK_LINE(480)
				{
					HX_STACK_LINE(480)
					_this->x = _x2;
					HX_STACK_LINE(480)
					if ((_this->_construct)){
						HX_STACK_LINE(480)
						_this->x;
					}
					else{
						HX_STACK_LINE(480)
						if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(480)
							_this->listen_x(_x2);
						}
						HX_STACK_LINE(480)
						_this->x;
					}
				}
				HX_STACK_LINE(480)
				{
					HX_STACK_LINE(480)
					_this->y = _y2;
					HX_STACK_LINE(480)
					if ((_this->_construct)){
						HX_STACK_LINE(480)
						_this->y;
					}
					else{
						HX_STACK_LINE(480)
						if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(480)
							_this->listen_y(_y2);
						}
						HX_STACK_LINE(480)
						_this->y;
					}
				}
				HX_STACK_LINE(480)
				{
					HX_STACK_LINE(480)
					_this->z = _z2;
					HX_STACK_LINE(480)
					if ((_this->_construct)){
						HX_STACK_LINE(480)
						_this->z;
					}
					else{
						HX_STACK_LINE(480)
						if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
							HX_STACK_LINE(480)
							_this->listen_z(_z2);
						}
						HX_STACK_LINE(480)
						_this->z;
					}
				}
				HX_STACK_LINE(480)
				_this->ignore_listeners = prev;
				HX_STACK_LINE(480)
				if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(480)
					_this->listen_x(_this->x);
				}
				HX_STACK_LINE(480)
				if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(480)
					_this->listen_y(_this->y);
				}
				HX_STACK_LINE(480)
				if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
					HX_STACK_LINE(480)
					_this->listen_z(_this->z);
				}
				HX_STACK_LINE(480)
				_this;
			}
			HX_STACK_LINE(480)
			_this;
		}
		HX_STACK_LINE(482)
		if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(482)
			this->listen_x(this->x);
		}
		HX_STACK_LINE(483)
		if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(483)
			this->listen_y(this->y);
		}
		HX_STACK_LINE(484)
		if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
			HX_STACK_LINE(484)
			this->listen_z(this->z);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Quaternion_obj,set_xyz,(void))

Float Quaternion_obj::set_x( Float _v){
	HX_STACK_FRAME("phoenix.Quaternion","set_x",0x5c83d3ea,"phoenix.Quaternion.set_x","phoenix/Quaternion.hx",488,0x23671680)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(490)
	this->x = _v;
	HX_STACK_LINE(492)
	if ((this->_construct)){
		HX_STACK_LINE(492)
		return this->x;
	}
	HX_STACK_LINE(494)
	if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
		HX_STACK_LINE(494)
		Dynamic();
	}
	else{
		HX_STACK_LINE(494)
		::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(494)
		int order = (int)0;		HX_STACK_VAR(order,"order");
		HX_STACK_LINE(494)
		Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
		HX_STACK_LINE(494)
		Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
		HX_STACK_LINE(494)
		Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
		HX_STACK_LINE(494)
		Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
		HX_STACK_LINE(494)
		Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(494)
		Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(494)
		Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(494)
		if (((order == (int)0))){
			HX_STACK_LINE(494)
			_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
			struct _Function_3_1{
				inline static Float Block( ::phoenix::Quaternion_obj *__this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",494,0x23671680)
					{
						HX_STACK_LINE(494)
						Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(494)
						return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
					}
					return null();
				}
			};
			HX_STACK_LINE(494)
			_y = ::Math_obj::asin(_Function_3_1::Block(this));
			HX_STACK_LINE(494)
			_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
		}
		else{
			HX_STACK_LINE(494)
			if (((order == (int)1))){
				struct _Function_4_1{
					inline static Float Block( ::phoenix::Quaternion_obj *__this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",494,0x23671680)
						{
							HX_STACK_LINE(494)
							Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(494)
							return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
						}
						return null();
					}
				};
				HX_STACK_LINE(494)
				_x = ::Math_obj::asin(_Function_4_1::Block(this));
				HX_STACK_LINE(494)
				_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
				HX_STACK_LINE(494)
				_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
			}
			else{
				HX_STACK_LINE(494)
				if (((order == (int)2))){
					struct _Function_5_1{
						inline static Float Block( ::phoenix::Quaternion_obj *__this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",494,0x23671680)
							{
								HX_STACK_LINE(494)
								Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(494)
								return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(494)
					_x = ::Math_obj::asin(_Function_5_1::Block(this));
					HX_STACK_LINE(494)
					_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
					HX_STACK_LINE(494)
					_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
				}
				else{
					HX_STACK_LINE(494)
					if (((order == (int)3))){
						HX_STACK_LINE(494)
						_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",494,0x23671680)
								{
									HX_STACK_LINE(494)
									Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(494)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(494)
						_y = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(494)
						_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(494)
						if (((order == (int)4))){
							HX_STACK_LINE(494)
							_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
							HX_STACK_LINE(494)
							_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",494,0x23671680)
									{
										HX_STACK_LINE(494)
										Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(494)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(494)
							_z = ::Math_obj::asin(_Function_7_1::Block(this));
						}
						else{
							HX_STACK_LINE(494)
							if (((order == (int)5))){
								HX_STACK_LINE(494)
								_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
								HX_STACK_LINE(494)
								_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",494,0x23671680)
										{
											HX_STACK_LINE(494)
											Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(494)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(494)
								_z = ::Math_obj::asin(_Function_8_1::Block(this));
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(494)
		{
			HX_STACK_LINE(494)
			Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
			HX_STACK_LINE(494)
			Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
			HX_STACK_LINE(494)
			Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
			HX_STACK_LINE(494)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(494)
			_this->ignore_listeners = true;
			HX_STACK_LINE(494)
			{
				HX_STACK_LINE(494)
				_this->x = _x1;
				HX_STACK_LINE(494)
				if ((_this->_construct)){
					HX_STACK_LINE(494)
					_this->x;
				}
				else{
					HX_STACK_LINE(494)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(494)
						_this->listen_x(_x1);
					}
					HX_STACK_LINE(494)
					_this->x;
				}
			}
			HX_STACK_LINE(494)
			{
				HX_STACK_LINE(494)
				_this->y = _y1;
				HX_STACK_LINE(494)
				if ((_this->_construct)){
					HX_STACK_LINE(494)
					_this->y;
				}
				else{
					HX_STACK_LINE(494)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(494)
						_this->listen_y(_y1);
					}
					HX_STACK_LINE(494)
					_this->y;
				}
			}
			HX_STACK_LINE(494)
			{
				HX_STACK_LINE(494)
				_this->z = _z1;
				HX_STACK_LINE(494)
				if ((_this->_construct)){
					HX_STACK_LINE(494)
					_this->z;
				}
				else{
					HX_STACK_LINE(494)
					if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(494)
						_this->listen_z(_z1);
					}
					HX_STACK_LINE(494)
					_this->z;
				}
			}
			HX_STACK_LINE(494)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(494)
			if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(494)
				_this->listen_x(_this->x);
			}
			HX_STACK_LINE(494)
			if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(494)
				_this->listen_y(_this->y);
			}
			HX_STACK_LINE(494)
			if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(494)
				_this->listen_z(_this->z);
			}
			HX_STACK_LINE(494)
			_this;
		}
		HX_STACK_LINE(494)
		_this;
	}
	HX_STACK_LINE(496)
	if (((bool((this->listen_x_dyn() != null())) && bool(!(this->ignore_listeners))))){
		HX_STACK_LINE(496)
		this->listen_x(this->x);
	}
	HX_STACK_LINE(498)
	return this->x;
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,set_x,return )

Float Quaternion_obj::set_y( Float _v){
	HX_STACK_FRAME("phoenix.Quaternion","set_y",0x5c83d3eb,"phoenix.Quaternion.set_y","phoenix/Quaternion.hx",502,0x23671680)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(504)
	this->y = _v;
	HX_STACK_LINE(506)
	if ((this->_construct)){
		HX_STACK_LINE(506)
		return this->y;
	}
	HX_STACK_LINE(508)
	if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
		HX_STACK_LINE(508)
		Dynamic();
	}
	else{
		HX_STACK_LINE(508)
		::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(508)
		int order = (int)0;		HX_STACK_VAR(order,"order");
		HX_STACK_LINE(508)
		Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
		HX_STACK_LINE(508)
		Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
		HX_STACK_LINE(508)
		Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
		HX_STACK_LINE(508)
		Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
		HX_STACK_LINE(508)
		Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(508)
		Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(508)
		Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(508)
		if (((order == (int)0))){
			HX_STACK_LINE(508)
			_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
			struct _Function_3_1{
				inline static Float Block( ::phoenix::Quaternion_obj *__this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",508,0x23671680)
					{
						HX_STACK_LINE(508)
						Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(508)
						return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
					}
					return null();
				}
			};
			HX_STACK_LINE(508)
			_y = ::Math_obj::asin(_Function_3_1::Block(this));
			HX_STACK_LINE(508)
			_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
		}
		else{
			HX_STACK_LINE(508)
			if (((order == (int)1))){
				struct _Function_4_1{
					inline static Float Block( ::phoenix::Quaternion_obj *__this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",508,0x23671680)
						{
							HX_STACK_LINE(508)
							Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(508)
							return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
						}
						return null();
					}
				};
				HX_STACK_LINE(508)
				_x = ::Math_obj::asin(_Function_4_1::Block(this));
				HX_STACK_LINE(508)
				_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
				HX_STACK_LINE(508)
				_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
			}
			else{
				HX_STACK_LINE(508)
				if (((order == (int)2))){
					struct _Function_5_1{
						inline static Float Block( ::phoenix::Quaternion_obj *__this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",508,0x23671680)
							{
								HX_STACK_LINE(508)
								Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(508)
								return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(508)
					_x = ::Math_obj::asin(_Function_5_1::Block(this));
					HX_STACK_LINE(508)
					_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
					HX_STACK_LINE(508)
					_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
				}
				else{
					HX_STACK_LINE(508)
					if (((order == (int)3))){
						HX_STACK_LINE(508)
						_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",508,0x23671680)
								{
									HX_STACK_LINE(508)
									Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(508)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(508)
						_y = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(508)
						_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(508)
						if (((order == (int)4))){
							HX_STACK_LINE(508)
							_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
							HX_STACK_LINE(508)
							_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",508,0x23671680)
									{
										HX_STACK_LINE(508)
										Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(508)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(508)
							_z = ::Math_obj::asin(_Function_7_1::Block(this));
						}
						else{
							HX_STACK_LINE(508)
							if (((order == (int)5))){
								HX_STACK_LINE(508)
								_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
								HX_STACK_LINE(508)
								_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",508,0x23671680)
										{
											HX_STACK_LINE(508)
											Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(508)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(508)
								_z = ::Math_obj::asin(_Function_8_1::Block(this));
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(508)
		{
			HX_STACK_LINE(508)
			Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
			HX_STACK_LINE(508)
			Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
			HX_STACK_LINE(508)
			Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
			HX_STACK_LINE(508)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(508)
			_this->ignore_listeners = true;
			HX_STACK_LINE(508)
			{
				HX_STACK_LINE(508)
				_this->x = _x1;
				HX_STACK_LINE(508)
				if ((_this->_construct)){
					HX_STACK_LINE(508)
					_this->x;
				}
				else{
					HX_STACK_LINE(508)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(508)
						_this->listen_x(_x1);
					}
					HX_STACK_LINE(508)
					_this->x;
				}
			}
			HX_STACK_LINE(508)
			{
				HX_STACK_LINE(508)
				_this->y = _y1;
				HX_STACK_LINE(508)
				if ((_this->_construct)){
					HX_STACK_LINE(508)
					_this->y;
				}
				else{
					HX_STACK_LINE(508)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(508)
						_this->listen_y(_y1);
					}
					HX_STACK_LINE(508)
					_this->y;
				}
			}
			HX_STACK_LINE(508)
			{
				HX_STACK_LINE(508)
				_this->z = _z1;
				HX_STACK_LINE(508)
				if ((_this->_construct)){
					HX_STACK_LINE(508)
					_this->z;
				}
				else{
					HX_STACK_LINE(508)
					if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(508)
						_this->listen_z(_z1);
					}
					HX_STACK_LINE(508)
					_this->z;
				}
			}
			HX_STACK_LINE(508)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(508)
			if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(508)
				_this->listen_x(_this->x);
			}
			HX_STACK_LINE(508)
			if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(508)
				_this->listen_y(_this->y);
			}
			HX_STACK_LINE(508)
			if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(508)
				_this->listen_z(_this->z);
			}
			HX_STACK_LINE(508)
			_this;
		}
		HX_STACK_LINE(508)
		_this;
	}
	HX_STACK_LINE(510)
	if (((bool((this->listen_y_dyn() != null())) && bool(!(this->ignore_listeners))))){
		HX_STACK_LINE(510)
		this->listen_y(this->y);
	}
	HX_STACK_LINE(512)
	return this->y;
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,set_y,return )

Float Quaternion_obj::set_z( Float _v){
	HX_STACK_FRAME("phoenix.Quaternion","set_z",0x5c83d3ec,"phoenix.Quaternion.set_z","phoenix/Quaternion.hx",516,0x23671680)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(518)
	this->z = _v;
	HX_STACK_LINE(520)
	if ((this->_construct)){
		HX_STACK_LINE(520)
		return this->z;
	}
	HX_STACK_LINE(522)
	if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
		HX_STACK_LINE(522)
		Dynamic();
	}
	else{
		HX_STACK_LINE(522)
		::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(522)
		int order = (int)0;		HX_STACK_VAR(order,"order");
		HX_STACK_LINE(522)
		Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
		HX_STACK_LINE(522)
		Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
		HX_STACK_LINE(522)
		Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
		HX_STACK_LINE(522)
		Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
		HX_STACK_LINE(522)
		Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(522)
		Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(522)
		Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(522)
		if (((order == (int)0))){
			HX_STACK_LINE(522)
			_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
			struct _Function_3_1{
				inline static Float Block( ::phoenix::Quaternion_obj *__this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",522,0x23671680)
					{
						HX_STACK_LINE(522)
						Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(522)
						return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
					}
					return null();
				}
			};
			HX_STACK_LINE(522)
			_y = ::Math_obj::asin(_Function_3_1::Block(this));
			HX_STACK_LINE(522)
			_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
		}
		else{
			HX_STACK_LINE(522)
			if (((order == (int)1))){
				struct _Function_4_1{
					inline static Float Block( ::phoenix::Quaternion_obj *__this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",522,0x23671680)
						{
							HX_STACK_LINE(522)
							Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(522)
							return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
						}
						return null();
					}
				};
				HX_STACK_LINE(522)
				_x = ::Math_obj::asin(_Function_4_1::Block(this));
				HX_STACK_LINE(522)
				_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
				HX_STACK_LINE(522)
				_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
			}
			else{
				HX_STACK_LINE(522)
				if (((order == (int)2))){
					struct _Function_5_1{
						inline static Float Block( ::phoenix::Quaternion_obj *__this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",522,0x23671680)
							{
								HX_STACK_LINE(522)
								Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(522)
								return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(522)
					_x = ::Math_obj::asin(_Function_5_1::Block(this));
					HX_STACK_LINE(522)
					_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
					HX_STACK_LINE(522)
					_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
				}
				else{
					HX_STACK_LINE(522)
					if (((order == (int)3))){
						HX_STACK_LINE(522)
						_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",522,0x23671680)
								{
									HX_STACK_LINE(522)
									Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(522)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(522)
						_y = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(522)
						_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(522)
						if (((order == (int)4))){
							HX_STACK_LINE(522)
							_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
							HX_STACK_LINE(522)
							_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",522,0x23671680)
									{
										HX_STACK_LINE(522)
										Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(522)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(522)
							_z = ::Math_obj::asin(_Function_7_1::Block(this));
						}
						else{
							HX_STACK_LINE(522)
							if (((order == (int)5))){
								HX_STACK_LINE(522)
								_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
								HX_STACK_LINE(522)
								_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",522,0x23671680)
										{
											HX_STACK_LINE(522)
											Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(522)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(522)
								_z = ::Math_obj::asin(_Function_8_1::Block(this));
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(522)
		{
			HX_STACK_LINE(522)
			Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
			HX_STACK_LINE(522)
			Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
			HX_STACK_LINE(522)
			Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
			HX_STACK_LINE(522)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(522)
			_this->ignore_listeners = true;
			HX_STACK_LINE(522)
			{
				HX_STACK_LINE(522)
				_this->x = _x1;
				HX_STACK_LINE(522)
				if ((_this->_construct)){
					HX_STACK_LINE(522)
					_this->x;
				}
				else{
					HX_STACK_LINE(522)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(522)
						_this->listen_x(_x1);
					}
					HX_STACK_LINE(522)
					_this->x;
				}
			}
			HX_STACK_LINE(522)
			{
				HX_STACK_LINE(522)
				_this->y = _y1;
				HX_STACK_LINE(522)
				if ((_this->_construct)){
					HX_STACK_LINE(522)
					_this->y;
				}
				else{
					HX_STACK_LINE(522)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(522)
						_this->listen_y(_y1);
					}
					HX_STACK_LINE(522)
					_this->y;
				}
			}
			HX_STACK_LINE(522)
			{
				HX_STACK_LINE(522)
				_this->z = _z1;
				HX_STACK_LINE(522)
				if ((_this->_construct)){
					HX_STACK_LINE(522)
					_this->z;
				}
				else{
					HX_STACK_LINE(522)
					if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(522)
						_this->listen_z(_z1);
					}
					HX_STACK_LINE(522)
					_this->z;
				}
			}
			HX_STACK_LINE(522)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(522)
			if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(522)
				_this->listen_x(_this->x);
			}
			HX_STACK_LINE(522)
			if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(522)
				_this->listen_y(_this->y);
			}
			HX_STACK_LINE(522)
			if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(522)
				_this->listen_z(_this->z);
			}
			HX_STACK_LINE(522)
			_this;
		}
		HX_STACK_LINE(522)
		_this;
	}
	HX_STACK_LINE(524)
	if (((bool((this->listen_z_dyn() != null())) && bool(!(this->ignore_listeners))))){
		HX_STACK_LINE(524)
		this->listen_z(this->z);
	}
	HX_STACK_LINE(526)
	return this->z;
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,set_z,return )

Float Quaternion_obj::set_w( Float _v){
	HX_STACK_FRAME("phoenix.Quaternion","set_w",0x5c83d3e9,"phoenix.Quaternion.set_w","phoenix/Quaternion.hx",530,0x23671680)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_v,"_v")
	HX_STACK_LINE(532)
	this->w = _v;
	HX_STACK_LINE(534)
	if ((this->_construct)){
		HX_STACK_LINE(534)
		return this->w;
	}
	HX_STACK_LINE(536)
	if (((bool((bool((this->euler == null())) || bool(this->ignore_euler))) || bool(this->_construct)))){
		HX_STACK_LINE(536)
		Dynamic();
	}
	else{
		HX_STACK_LINE(536)
		::phoenix::Vector _this = this->euler;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(536)
		int order = (int)0;		HX_STACK_VAR(order,"order");
		HX_STACK_LINE(536)
		Float sqx = (this->x * this->x);		HX_STACK_VAR(sqx,"sqx");
		HX_STACK_LINE(536)
		Float sqy = (this->y * this->y);		HX_STACK_VAR(sqy,"sqy");
		HX_STACK_LINE(536)
		Float sqz = (this->z * this->z);		HX_STACK_VAR(sqz,"sqz");
		HX_STACK_LINE(536)
		Float sqw = (this->w * this->w);		HX_STACK_VAR(sqw,"sqw");
		HX_STACK_LINE(536)
		Float _x = _this->x;		HX_STACK_VAR(_x,"_x");
		HX_STACK_LINE(536)
		Float _y = _this->y;		HX_STACK_VAR(_y,"_y");
		HX_STACK_LINE(536)
		Float _z = _this->z;		HX_STACK_VAR(_z,"_z");
		HX_STACK_LINE(536)
		if (((order == (int)0))){
			HX_STACK_LINE(536)
			_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->y * this->z)))),(((sqw - sqx) - sqy) + sqz));
			struct _Function_3_1{
				inline static Float Block( ::phoenix::Quaternion_obj *__this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",536,0x23671680)
					{
						HX_STACK_LINE(536)
						Float value = ((int)2 * (((__this->x * __this->z) + (__this->y * __this->w))));		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(536)
						return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
					}
					return null();
				}
			};
			HX_STACK_LINE(536)
			_y = ::Math_obj::asin(_Function_3_1::Block(this));
			HX_STACK_LINE(536)
			_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw + sqx) - sqy) - sqz));
		}
		else{
			HX_STACK_LINE(536)
			if (((order == (int)1))){
				struct _Function_4_1{
					inline static Float Block( ::phoenix::Quaternion_obj *__this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",536,0x23671680)
						{
							HX_STACK_LINE(536)
							Float value = ((int)2 * (((__this->x * __this->w) - (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(536)
							return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
						}
						return null();
					}
				};
				HX_STACK_LINE(536)
				_x = ::Math_obj::asin(_Function_4_1::Block(this));
				HX_STACK_LINE(536)
				_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw - sqx) - sqy) + sqz));
				HX_STACK_LINE(536)
				_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw - sqx) + sqy) - sqz));
			}
			else{
				HX_STACK_LINE(536)
				if (((order == (int)2))){
					struct _Function_5_1{
						inline static Float Block( ::phoenix::Quaternion_obj *__this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",536,0x23671680)
							{
								HX_STACK_LINE(536)
								Float value = ((int)2 * (((__this->x * __this->w) + (__this->y * __this->z))));		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(536)
								return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
							}
							return null();
						}
					};
					HX_STACK_LINE(536)
					_x = ::Math_obj::asin(_Function_5_1::Block(this));
					HX_STACK_LINE(536)
					_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->z * this->x)))),(((sqw - sqx) - sqy) + sqz));
					HX_STACK_LINE(536)
					_z = ::Math_obj::atan2(((int)2 * (((this->z * this->w) - (this->x * this->y)))),(((sqw - sqx) + sqy) - sqz));
				}
				else{
					HX_STACK_LINE(536)
					if (((order == (int)3))){
						HX_STACK_LINE(536)
						_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->z * this->y)))),(((sqw - sqx) - sqy) + sqz));
						struct _Function_6_1{
							inline static Float Block( ::phoenix::Quaternion_obj *__this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",536,0x23671680)
								{
									HX_STACK_LINE(536)
									Float value = ((int)2 * (((__this->y * __this->w) - (__this->x * __this->z))));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(536)
									return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
								}
								return null();
							}
						};
						HX_STACK_LINE(536)
						_y = ::Math_obj::asin(_Function_6_1::Block(this));
						HX_STACK_LINE(536)
						_z = ::Math_obj::atan2(((int)2 * (((this->x * this->y) + (this->z * this->w)))),(((sqw + sqx) - sqy) - sqz));
					}
					else{
						HX_STACK_LINE(536)
						if (((order == (int)4))){
							HX_STACK_LINE(536)
							_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) - (this->z * this->y)))),(((sqw - sqx) + sqy) - sqz));
							HX_STACK_LINE(536)
							_y = ::Math_obj::atan2(((int)2 * (((this->y * this->w) - (this->x * this->z)))),(((sqw + sqx) - sqy) - sqz));
							struct _Function_7_1{
								inline static Float Block( ::phoenix::Quaternion_obj *__this){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",536,0x23671680)
									{
										HX_STACK_LINE(536)
										Float value = ((int)2 * (((__this->x * __this->y) + (__this->z * __this->w))));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(536)
										return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
									}
									return null();
								}
							};
							HX_STACK_LINE(536)
							_z = ::Math_obj::asin(_Function_7_1::Block(this));
						}
						else{
							HX_STACK_LINE(536)
							if (((order == (int)5))){
								HX_STACK_LINE(536)
								_x = ::Math_obj::atan2(((int)2 * (((this->x * this->w) + (this->y * this->z)))),(((sqw - sqx) + sqy) - sqz));
								HX_STACK_LINE(536)
								_y = ::Math_obj::atan2(((int)2 * (((this->x * this->z) + (this->y * this->w)))),(((sqw + sqx) - sqy) - sqz));
								struct _Function_8_1{
									inline static Float Block( ::phoenix::Quaternion_obj *__this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","phoenix/Quaternion.hx",536,0x23671680)
										{
											HX_STACK_LINE(536)
											Float value = ((int)2 * (((__this->z * __this->w) - (__this->x * __this->y))));		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(536)
											return (  (((value < (int)-1))) ? Float((int)-1) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
										}
										return null();
									}
								};
								HX_STACK_LINE(536)
								_z = ::Math_obj::asin(_Function_8_1::Block(this));
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(536)
		{
			HX_STACK_LINE(536)
			Float _x1 = _this->x;		HX_STACK_VAR(_x1,"_x1");
			HX_STACK_LINE(536)
			Float _y1 = _this->y;		HX_STACK_VAR(_y1,"_y1");
			HX_STACK_LINE(536)
			Float _z1 = _this->z;		HX_STACK_VAR(_z1,"_z1");
			HX_STACK_LINE(536)
			bool prev = _this->ignore_listeners;		HX_STACK_VAR(prev,"prev");
			HX_STACK_LINE(536)
			_this->ignore_listeners = true;
			HX_STACK_LINE(536)
			{
				HX_STACK_LINE(536)
				_this->x = _x1;
				HX_STACK_LINE(536)
				if ((_this->_construct)){
					HX_STACK_LINE(536)
					_this->x;
				}
				else{
					HX_STACK_LINE(536)
					if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(536)
						_this->listen_x(_x1);
					}
					HX_STACK_LINE(536)
					_this->x;
				}
			}
			HX_STACK_LINE(536)
			{
				HX_STACK_LINE(536)
				_this->y = _y1;
				HX_STACK_LINE(536)
				if ((_this->_construct)){
					HX_STACK_LINE(536)
					_this->y;
				}
				else{
					HX_STACK_LINE(536)
					if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(536)
						_this->listen_y(_y1);
					}
					HX_STACK_LINE(536)
					_this->y;
				}
			}
			HX_STACK_LINE(536)
			{
				HX_STACK_LINE(536)
				_this->z = _z1;
				HX_STACK_LINE(536)
				if ((_this->_construct)){
					HX_STACK_LINE(536)
					_this->z;
				}
				else{
					HX_STACK_LINE(536)
					if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
						HX_STACK_LINE(536)
						_this->listen_z(_z1);
					}
					HX_STACK_LINE(536)
					_this->z;
				}
			}
			HX_STACK_LINE(536)
			_this->ignore_listeners = prev;
			HX_STACK_LINE(536)
			if (((bool((_this->listen_x != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(536)
				_this->listen_x(_this->x);
			}
			HX_STACK_LINE(536)
			if (((bool((_this->listen_y != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(536)
				_this->listen_y(_this->y);
			}
			HX_STACK_LINE(536)
			if (((bool((_this->listen_z != null())) && bool(!(_this->ignore_listeners))))){
				HX_STACK_LINE(536)
				_this->listen_z(_this->z);
			}
			HX_STACK_LINE(536)
			_this;
		}
		HX_STACK_LINE(536)
		_this;
	}
	HX_STACK_LINE(538)
	if (((bool((this->listen_w_dyn() != null())) && bool(!(this->ignore_listeners))))){
		HX_STACK_LINE(538)
		this->listen_w(this->w);
	}
	HX_STACK_LINE(540)
	return this->w;
}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,set_w,return )

::phoenix::Quaternion Quaternion_obj::Add( ::phoenix::Quaternion _a,::phoenix::Quaternion _b){
	HX_STACK_FRAME("phoenix.Quaternion","Add",0x41b350d0,"phoenix.Quaternion.Add","phoenix/Quaternion.hx",275,0x23671680)
	HX_STACK_ARG(_a,"_a")
	HX_STACK_ARG(_b,"_b")
	HX_STACK_LINE(275)
	return _a->clone()->add(_b);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,Add,return )

::phoenix::Quaternion Quaternion_obj::Multiply( ::phoenix::Quaternion _a,::phoenix::Quaternion _b){
	HX_STACK_FRAME("phoenix.Quaternion","Multiply",0x20e2e915,"phoenix.Quaternion.Multiply","phoenix/Quaternion.hx",279,0x23671680)
	HX_STACK_ARG(_a,"_a")
	HX_STACK_ARG(_b,"_b")
	HX_STACK_LINE(279)
	return _a->clone()->multiply(_b);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,Multiply,return )

::phoenix::Quaternion Quaternion_obj::MultiplyScalar( ::phoenix::Quaternion _quaternion,Float _scalar){
	HX_STACK_FRAME("phoenix.Quaternion","MultiplyScalar",0xd974c221,"phoenix.Quaternion.MultiplyScalar","phoenix/Quaternion.hx",283,0x23671680)
	HX_STACK_ARG(_quaternion,"_quaternion")
	HX_STACK_ARG(_scalar,"_scalar")
	HX_STACK_LINE(283)
	return _quaternion->clone()->multiplyScalar(_scalar);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,MultiplyScalar,return )

::phoenix::Quaternion Quaternion_obj::Slerp( ::phoenix::Quaternion _qa,::phoenix::Quaternion _qb,::phoenix::Quaternion _qm,Float _t){
	HX_STACK_FRAME("phoenix.Quaternion","Slerp",0xf44670d9,"phoenix.Quaternion.Slerp","phoenix/Quaternion.hx",430,0x23671680)
	HX_STACK_ARG(_qa,"_qa")
	HX_STACK_ARG(_qb,"_qb")
	HX_STACK_ARG(_qm,"_qm")
	HX_STACK_ARG(_t,"_t")
	HX_STACK_LINE(430)
	return _qm->copy(_qa)->slerp(_qb,_t);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Quaternion_obj,Slerp,return )

Float Quaternion_obj::Dot( ::phoenix::Quaternion _a,::phoenix::Quaternion _b){
	HX_STACK_FRAME("phoenix.Quaternion","Dot",0x41b5a138,"phoenix.Quaternion.Dot","phoenix/Quaternion.hx",435,0x23671680)
	HX_STACK_ARG(_a,"_a")
	HX_STACK_ARG(_b,"_b")
	HX_STACK_LINE(435)
	return ::phoenix::Quaternion_obj::__new(_a->x,_a->y,_a->z,_a->w)->dot(_b);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,Dot,return )

Void Quaternion_obj::Listen( ::phoenix::Quaternion _q,Dynamic listener){
{
		HX_STACK_FRAME("phoenix.Quaternion","Listen",0x4beb80f8,"phoenix.Quaternion.Listen","phoenix/Quaternion.hx",544,0x23671680)
		HX_STACK_ARG(_q,"_q")
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(546)
		_q->listen_x = listener;
		HX_STACK_LINE(547)
		_q->listen_y = listener;
		HX_STACK_LINE(548)
		_q->listen_z = listener;
		HX_STACK_LINE(549)
		_q->listen_w = listener;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,Listen,(void))


Quaternion_obj::Quaternion_obj()
{
}

void Quaternion_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Quaternion);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(z,"z");
	HX_MARK_MEMBER_NAME(w,"w");
	HX_MARK_MEMBER_NAME(euler,"euler");
	HX_MARK_MEMBER_NAME(ignore_listeners,"ignore_listeners");
	HX_MARK_MEMBER_NAME(listen_x,"listen_x");
	HX_MARK_MEMBER_NAME(listen_y,"listen_y");
	HX_MARK_MEMBER_NAME(listen_z,"listen_z");
	HX_MARK_MEMBER_NAME(listen_w,"listen_w");
	HX_MARK_MEMBER_NAME(_construct,"_construct");
	HX_MARK_MEMBER_NAME(ignore_euler,"ignore_euler");
	HX_MARK_END_CLASS();
}

void Quaternion_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(z,"z");
	HX_VISIT_MEMBER_NAME(w,"w");
	HX_VISIT_MEMBER_NAME(euler,"euler");
	HX_VISIT_MEMBER_NAME(ignore_listeners,"ignore_listeners");
	HX_VISIT_MEMBER_NAME(listen_x,"listen_x");
	HX_VISIT_MEMBER_NAME(listen_y,"listen_y");
	HX_VISIT_MEMBER_NAME(listen_z,"listen_z");
	HX_VISIT_MEMBER_NAME(listen_w,"listen_w");
	HX_VISIT_MEMBER_NAME(_construct,"_construct");
	HX_VISIT_MEMBER_NAME(ignore_euler,"ignore_euler");
}

Dynamic Quaternion_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"z") ) { return z; }
		if (HX_FIELD_EQ(inName,"w") ) { return w; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"Add") ) { return Add_dyn(); }
		if (HX_FIELD_EQ(inName,"Dot") ) { return Dot_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"dot") ) { return dot_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"Slerp") ) { return Slerp_dyn(); }
		if (HX_FIELD_EQ(inName,"euler") ) { return euler; }
		if (HX_FIELD_EQ(inName,"slerp") ) { return slerp_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_z") ) { return set_z_dyn(); }
		if (HX_FIELD_EQ(inName,"set_w") ) { return set_w_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Listen") ) { return Listen_dyn(); }
		if (HX_FIELD_EQ(inName,"length") ) { return length_dyn(); }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inverse") ) { return inverse_dyn(); }
		if (HX_FIELD_EQ(inName,"toArray") ) { return toArray_dyn(); }
		if (HX_FIELD_EQ(inName,"toeuler") ) { return toeuler_dyn(); }
		if (HX_FIELD_EQ(inName,"set_xyz") ) { return set_xyz_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"Multiply") ) { return Multiply_dyn(); }
		if (HX_FIELD_EQ(inName,"listen_x") ) { return listen_x; }
		if (HX_FIELD_EQ(inName,"listen_y") ) { return listen_y; }
		if (HX_FIELD_EQ(inName,"listen_z") ) { return listen_z; }
		if (HX_FIELD_EQ(inName,"listen_w") ) { return listen_w; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"lengthSq") ) { return lengthSq_dyn(); }
		if (HX_FIELD_EQ(inName,"multiply") ) { return multiply_dyn(); }
		if (HX_FIELD_EQ(inName,"set_xyzw") ) { return set_xyzw_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"conjugate") ) { return conjugate_dyn(); }
		if (HX_FIELD_EQ(inName,"normalize") ) { return normalize_dyn(); }
		if (HX_FIELD_EQ(inName,"fromArray") ) { return fromArray_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_construct") ) { return _construct; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setFromEuler") ) { return setFromEuler_dyn(); }
		if (HX_FIELD_EQ(inName,"update_euler") ) { return update_euler_dyn(); }
		if (HX_FIELD_EQ(inName,"ignore_euler") ) { return ignore_euler; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"MultiplyScalar") ) { return MultiplyScalar_dyn(); }
		if (HX_FIELD_EQ(inName,"addQuaternions") ) { return addQuaternions_dyn(); }
		if (HX_FIELD_EQ(inName,"multiplyScalar") ) { return multiplyScalar_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ignore_listeners") ) { return ignore_listeners; }
		if (HX_FIELD_EQ(inName,"setFromAxisAngle") ) { return setFromAxisAngle_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"multiplyQuaternions") ) { return multiplyQuaternions_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setFromRotationMatrix") ) { return setFromRotationMatrix_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Quaternion_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp) return set_x(inValue);x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp) return set_y(inValue);y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { if (inCallProp) return set_z(inValue);z=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"w") ) { if (inCallProp) return set_w(inValue);w=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"euler") ) { euler=inValue.Cast< ::phoenix::Vector >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"listen_x") ) { listen_x=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"listen_y") ) { listen_y=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"listen_z") ) { listen_z=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"listen_w") ) { listen_w=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_construct") ) { _construct=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"ignore_euler") ) { ignore_euler=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ignore_listeners") ) { ignore_listeners=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Quaternion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("z"));
	outFields->push(HX_CSTRING("w"));
	outFields->push(HX_CSTRING("euler"));
	outFields->push(HX_CSTRING("ignore_listeners"));
	outFields->push(HX_CSTRING("_construct"));
	outFields->push(HX_CSTRING("ignore_euler"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("Add"),
	HX_CSTRING("Multiply"),
	HX_CSTRING("MultiplyScalar"),
	HX_CSTRING("Slerp"),
	HX_CSTRING("Dot"),
	HX_CSTRING("Listen"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Quaternion_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(Quaternion_obj,y),HX_CSTRING("y")},
	{hx::fsFloat,(int)offsetof(Quaternion_obj,z),HX_CSTRING("z")},
	{hx::fsFloat,(int)offsetof(Quaternion_obj,w),HX_CSTRING("w")},
	{hx::fsObject /*::phoenix::Vector*/ ,(int)offsetof(Quaternion_obj,euler),HX_CSTRING("euler")},
	{hx::fsBool,(int)offsetof(Quaternion_obj,ignore_listeners),HX_CSTRING("ignore_listeners")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Quaternion_obj,listen_x),HX_CSTRING("listen_x")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Quaternion_obj,listen_y),HX_CSTRING("listen_y")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Quaternion_obj,listen_z),HX_CSTRING("listen_z")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Quaternion_obj,listen_w),HX_CSTRING("listen_w")},
	{hx::fsBool,(int)offsetof(Quaternion_obj,_construct),HX_CSTRING("_construct")},
	{hx::fsBool,(int)offsetof(Quaternion_obj,ignore_euler),HX_CSTRING("ignore_euler")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("z"),
	HX_CSTRING("w"),
	HX_CSTRING("euler"),
	HX_CSTRING("ignore_listeners"),
	HX_CSTRING("listen_x"),
	HX_CSTRING("listen_y"),
	HX_CSTRING("listen_z"),
	HX_CSTRING("listen_w"),
	HX_CSTRING("_construct"),
	HX_CSTRING("toString"),
	HX_CSTRING("set"),
	HX_CSTRING("copy"),
	HX_CSTRING("dot"),
	HX_CSTRING("setFromEuler"),
	HX_CSTRING("setFromAxisAngle"),
	HX_CSTRING("setFromRotationMatrix"),
	HX_CSTRING("inverse"),
	HX_CSTRING("conjugate"),
	HX_CSTRING("lengthSq"),
	HX_CSTRING("length"),
	HX_CSTRING("normalize"),
	HX_CSTRING("multiply"),
	HX_CSTRING("add"),
	HX_CSTRING("addQuaternions"),
	HX_CSTRING("multiplyScalar"),
	HX_CSTRING("multiplyQuaternions"),
	HX_CSTRING("slerp"),
	HX_CSTRING("equals"),
	HX_CSTRING("fromArray"),
	HX_CSTRING("toArray"),
	HX_CSTRING("clone"),
	HX_CSTRING("toeuler"),
	HX_CSTRING("update_euler"),
	HX_CSTRING("ignore_euler"),
	HX_CSTRING("set_xyzw"),
	HX_CSTRING("set_xyz"),
	HX_CSTRING("set_x"),
	HX_CSTRING("set_y"),
	HX_CSTRING("set_z"),
	HX_CSTRING("set_w"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Quaternion_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Quaternion_obj::__mClass,"__mClass");
};

#endif

Class Quaternion_obj::__mClass;

void Quaternion_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("phoenix.Quaternion"), hx::TCanCast< Quaternion_obj> ,sStaticFields,sMemberFields,
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

void Quaternion_obj::__boot()
{
}

} // end namespace phoenix
