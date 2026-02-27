import Product from "./Product";

function ProductTab(){
    return(
        <>
        <Product title="phone" price={80000}/>
        <Product title="laptop" price={250000}/>
        <Product title="pen" />
        </>
    );
}

export default ProductTab;