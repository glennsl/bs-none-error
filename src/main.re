
module Wrapper = {
  external make : ReasonReact.reactElement => ReasonReact.reactElement = "" [@@bs.val];
};

let () =
/*
  ReasonReact.element (Wrapper.make [|ReactDOMRe.createElement "div"|])
*/
  <Wrapper>
    <div> </div>
  </Wrapper>