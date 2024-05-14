.glow{
    box-shadow: 10px 10px 10px firebrick;
}

.glow:hover{
    box-shadow: 5px 5px 15px firebrick;
    animation: ease-in 1s ;
}
.a{font-size: large;
font-family: 'Franklin Gothic Medium', 'Arial Narrow', Arial, sans-serif;
font-weight: 200;
font-style:italic;
color-scheme:orange ;
text-align: center;
color:indigo;
background-image:linear-gradient(darkkhaki,lemonchiffon,papayawhip,peachpuff,darkkhaki);}

a:link{color:rgb(236, 157, 77);}
a:visited{color:firebrick;}
a:hover{color:rgb(143, 127, 104);}
a:active{color:yellowgreen;}

.container{display: flex;border: 5px solid yellowgreen;width:5000px; height:1330px}
.fitem{ border: 50px; width: 1000px; color:olivedrab;padding: 15px; 
    font-family: 'Franklin Gothic Medium', 'Arial Narrow', Arial, sans-serif;
font-size:larger;
font-weight: 200;}
hr{border-color: yellowgreen; }



.flip-box {
    background-color: transparent;
    width: 700px;
    height: 400px;
    border: 5px solid #f1f1f1;
    perspective: 1000px; 
  }
.flip-box-inner {
    position: relative;
    width: 100%;
    height: 100%;
    text-align: center;
    transition: transform 0.8s;
    transform-style: preserve-3d;
  }
  .flip-box:hover .flip-box-inner {
    transform: rotateY(180deg);
  }
  .flip-box-front, .flip-box-back {
    position: absolute;
    width: 100%;
    height: 100%;
    -webkit-backface-visibility: hidden; 
    backface-visibility: hidden;
  }

